#ifndef RECOTRACKSUTILS_cxx
#define RECOTRACKSUTILS_cxx 1

#include "RecoTracksUtils.h"
#include "TChainElement.h"
#include "TMath.h"
#include "TVector2.h"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace RECOTRACKS_ANA;

//----------------------------------------------------------------------------
RecoTracksUtils::RecoTracksUtils()
{
    loaded_pot_mc = false;
}

//----------------------------------------------------------------------------
RecoTracksUtils::~RecoTracksUtils()
{
}

//----------------------------------------------------------------------------
RecoTracksUtils& RecoTracksUtils::Get(){
    static RecoTracksUtils singleton;
    return singleton;
}

//============================================================================
// Build a TChain of MC files
// @name =
//============================================================================
TChain* RecoTracksUtils::getMCTree(std::string name,
        const std::string& file_name,
        int files_to_read,
        bool calc_POT)
{
    TChain* chain  = new TChain( "chain" );
    TChain* tree   = new TChain( name.c_str() );

    if (name=="Truth")
    {
        get_truth_files( chain, file_name );
    }
    else if (name=="RecoTracks" ||
            name=="Meta" ||
            name=="NukeCC" ||
            name=="NuECCQE" ||
            name=="MLVFSamplePrepTool"||
            name=="MasterAnaDev")
    {
        get_mc_files( chain, file_name ); //get all files
    }
    else
    {
        std::cout << "RecoTracksUtils::getMCTree Did not find TTree with name: "
            << name.c_str() << std::endl;
    }

    int nfiles = 0;
    if( files_to_read > 0 ){
        TObjArray *fileElements=chain->GetListOfFiles();
        TIter next(fileElements);
        TChainElement *chEl=0;
        int count = 1;
        while (( chEl=(TChainElement*)next() ) && count <= files_to_read ) {
            if( count >= 1 ){
                tree->Add(chEl->GetTitle());
                nfiles++;
            }
            count++;
        }
    }
    else{
        TObjArray *fileElements=chain->GetListOfFiles();
        TIter next(fileElements);
        TChainElement *chEl=0;
        while (( chEl=(TChainElement*)next() )) {
            tree->Add(chEl->GetTitle());
            nfiles++;
        }
    }

    std::cout << "loaded " << nfiles << " MC files: " << name << std::endl;
    std::cout<< "loaded pot = " << loaded_pot_mc<<  std::endl;

    if (calc_POT && name != "Meta" && !loaded_pot_mc) {
        std::cout<<"Trying to find MC POT"<<std::endl;
        TChain *meta = getMCTree( "Meta", file_name, files_to_read );
        setPOTMC( meta, name );
        delete meta;
    }

    delete chain;

    return tree;
}

//----------------------------------------------------------------------------
double RecoTracksUtils::getPOTMC( bool single_nu_mc ){

    if( loaded_pot_mc ) return global_pot_mc;
    else{
        std::cout << "You have not loaded a MC Tree!  use getMCTree()" << std::endl;
        return 0;
    }
}

//----------------------------------------------------------------------------
std::vector< std::string > RecoTracksUtils::split_line( std::string line, const char* split_var )
{
    std::vector< std::string > col;
    std::string str = "";

    for(unsigned int i = 0; i < line.size(); i++) {
        std::string s(1,line[i]);
        if( s.find(split_var) != std::string::npos ) { col.push_back( str ); str.clear(); }
        else {
            str += s;
            if( i == line.size()-1 ) col.push_back( str );
        }
    }

    return col;
}

//----------------------------------------------------------------------------
void RecoTracksUtils::setPOTMC( TChain *mc, const std::string& name )
{
    std::cout<<"Number of MC files = "<< std::endl;
    TObjArray* files = mc->GetListOfFiles();
    int subruns = 0;

    TIter next(files);
    TChainElement* file = 0;

    std::string split_marker = "_" + name;

    while( (file=(TChainElement*)next()) ) {

        std::string name = std::string(file->GetTitle()).substr(
                std::string(file->GetTitle()).find("SIM"));
        if( (int)name.find("Subruns") == -1 ) continue;

        name = name.erase( name.find(split_marker) );
        name = name.substr( name.find("Subruns") + std::string("Subruns_").length() );

        std::vector< std::string > subs = split_line(name,"-");

        subruns += (int)subs.size();
        subs.clear();
    }
    std::cout<< "Number of subruns in file list = "<< subruns << std::endl;

    //-------------------------------------------------
    // Monte Carlo is treated like data ONLY IF it is
    // overlay MC which properly handles spill-by-spill
    // intensity
    // For SINGLE NU MC, simply multiply the number of
    // analyzed files by the known pot-per-file
    //-------------------------------------------------
    double total_pot_mc = 0;
    total_pot_mc = subruns * POT_per_MC_file;
    loaded_pot_mc = true;
    global_pot_mc = total_pot_mc;
    std::cout << "MC pot = " << total_pot_mc << std::endl;

}

//----------------------------------------------------------------------------
void RecoTracksUtils::getPOT( double& total_pot_mc, bool single_nu_mc )
{
    total_pot_mc = getPOTMC( single_nu_mc );

    std::cout << "MC pot   = " << total_pot_mc << std::endl;
}

//----------------------------------------------------------------------------
void RecoTracksUtils::writePOT( TFile *f )
{
    double mc   = getPOTMC();
    double data = mc;
    TVector2 *pot = new TVector2( data, mc );

    f->WriteTObject( pot, "pot" );
}

//----------------------------------------------------------------------------
int RecoTracksUtils::getTargetForZPosition(double z, double extraToleranceUp,
        double extraToleranceDown, bool useNukeCCZdefs) const
{
    const double targets_z[5] = {target1_z, target2_z, target3_z, target4_z, target5_z};
    const double targets_w[5] = {target1_thickestW, target2_thickestW, target3_thickestW,
        target4_thickestW, target5_thickestW};

    double z_up[5] = {0., 0., 0., 0., 0.};
    double z_dn[5] = {0., 0., 0., 0., 0.};
    if (useNukeCCZdefs) {
        z_up[0] = target1_up_trk;
        z_dn[0] = target1_dn_trk;
        //
        z_up[1] = target2_up_trk;
        z_dn[1] = target2_dn_trk;
        //
        z_up[2] = target3_up_trk;
        z_dn[2] = target3_dn_trk;
        //
        z_up[3] = target4_up_trk;
        z_dn[3] = target4_dn_trk;
        //
        z_up[4] = target5_up_trk;
        z_dn[4] = target5_dn_trk;
        //
    }
    else {
        for (int i = 0; i < 5; ++i) {
            z_up[i] = targets_z[i] - targets_w[i] / 2.0 - extraToleranceUp;
            z_dn[i] = targets_z[i] + targets_w[i] / 2.0 + extraToleranceDown;
        }
    }

    for (int i = 0; i < 5; ++i) {
        if ((z > z_up[i]) && (z < z_dn[i])) {
            return i + 1;
        }
    }
    return 0;
}

//----------------------------------------------------------------------------
int RecoTracksUtils::getSegmentForZPosition(double z, double extraToleranceUp,
        double extraToleranceDown, bool useNukeCCZdefs) const
{
    int target = getTargetForZPosition(z, extraToleranceUp, extraToleranceDown);
    if (target != 0) {
        return target;
    }
    else if (z < target1_z) {
        return 0; // upstream of all targs
    }
    else if (z < target2_z) {
        return 6;
    }
    else if (z < target3_z) {
        return 7;
    }
    else if (z < target4_z) {
        return 8;
    }
    else if (z < target5_z) {
        return 9;
    }
    return 10; // downstream of all targs
}

//----------------------------------------------------------------------------
int RecoTracksUtils::convertPlaneCode(int raw_code) const
{
    // values computed with ANNMINERvA plane_codes.py using `build_indexed_codes()`
    if (raw_code == -1) return 0;
    if (raw_code == 1) return 9;
    if (raw_code == 2) return 18;
    if (raw_code == 3) return 27;
    if (raw_code == 4) return 45;
    if (raw_code == 5) return 50;
    if (raw_code == 6) return 36;
    if (raw_code == 8) return 1;
    if (raw_code == 16) return 2;
    if (raw_code == 40) return 3;
    if (raw_code == 48) return 4;
    if (raw_code == 72) return 5;
    if (raw_code == 80) return 6;
    if (raw_code == 104) return 7;
    if (raw_code == 112) return 8;
    if (raw_code == 168) return 10;
    if (raw_code == 176) return 11;
    if (raw_code == 200) return 12;
    if (raw_code == 208) return 13;
    if (raw_code == 232) return 14;
    if (raw_code == 240) return 15;
    if (raw_code == 264) return 16;
    if (raw_code == 272) return 17;
    if (raw_code == 328) return 19;
    if (raw_code == 336) return 20;
    if (raw_code == 360) return 21;
    if (raw_code == 368) return 22;
    if (raw_code == 392) return 23;
    if (raw_code == 400) return 24;
    if (raw_code == 424) return 25;
    if (raw_code == 432) return 26;
    if (raw_code == 520) return 28;
    if (raw_code == 528) return 29;
    if (raw_code == 552) return 30;
    if (raw_code == 560) return 31;
    if (raw_code == 584) return 32;
    if (raw_code == 592) return 33;
    if (raw_code == 616) return 34;
    if (raw_code == 624) return 35;
    if (raw_code == 648) return 37;
    if (raw_code == 656) return 38;
    if (raw_code == 680) return 39;
    if (raw_code == 688) return 40;
    if (raw_code == 712) return 41;
    if (raw_code == 720) return 42;
    if (raw_code == 744) return 43;
    if (raw_code == 752) return 44;
    if (raw_code == 808) return 46;
    if (raw_code == 816) return 47;
    if (raw_code == 840) return 48;
    if (raw_code == 848) return 49;
    if (raw_code == 904) return 51;
    if (raw_code == 912) return 52;
    if (raw_code == 936) return 53;
    if (raw_code == 944) return 54;
    if (raw_code == 968) return 55;
    if (raw_code == 976) return 56;
    if (raw_code == 1000) return 57;
    if (raw_code == 1008) return 58;
    if (raw_code == 1032) return 59;
    if (raw_code == 1040) return 60;
    if (raw_code == 1064) return 61;
    if (raw_code == 1072) return 62;
    if (raw_code == 1096) return 63;
    if (raw_code == 1104) return 64;
    if (raw_code == 1128) return 65;
    if (raw_code == 1136) return 66;
    if (raw_code == 1160) return 67;
    if (raw_code == 1168) return 68;
    if (raw_code == 1192) return 69;
    if (raw_code == 1200) return 70;
    if (raw_code == 1224) return 71;
    if (raw_code == 1232) return 72;
    if (raw_code == 1256) return 73;
    if (raw_code == 1264) return 74;
    if (raw_code == 1288) return 75;
    if (raw_code == 1296) return 76;
    if (raw_code == 1320) return 77;
    if (raw_code == 1328) return 78;
    if (raw_code == 1352) return 79;
    if (raw_code == 1360) return 80;
    if (raw_code == 1384) return 81;
    if (raw_code == 1392) return 82;
    if (raw_code == 1416) return 83;
    if (raw_code == 1424) return 84;
    if (raw_code == 1448) return 85;
    if (raw_code == 1456) return 86;
    if (raw_code == 1480) return 87;
    if (raw_code == 1488) return 88;
    if (raw_code == 1512) return 89;
    if (raw_code == 1520) return 90;
    if (raw_code == 1544) return 91;
    if (raw_code == 1552) return 92;
    if (raw_code == 1576) return 93;
    if (raw_code == 1584) return 94;
    if (raw_code == 1608) return 95;
    if (raw_code == 1616) return 96;
    if (raw_code == 1640) return 97;
    if (raw_code == 1648) return 98;
    if (raw_code == 1672) return 99;
    if (raw_code == 1680) return 100;
    if (raw_code == 1704) return 101;
    if (raw_code == 1712) return 102;
    if (raw_code == 1736) return 103;
    if (raw_code == 1744) return 104;
    if (raw_code == 1768) return 105;
    if (raw_code == 1776) return 106;
    if (raw_code == 1800) return 107;
    if (raw_code == 1808) return 108;
    if (raw_code == 1832) return 109;
    if (raw_code == 1840) return 110;
    if (raw_code == 1864) return 111;
    if (raw_code == 1872) return 112;
    if (raw_code == 1896) return 113;
    if (raw_code == 1904) return 114;
    if (raw_code == 1928) return 115;
    if (raw_code == 1936) return 116;
    if (raw_code == 1960) return 117;
    if (raw_code == 1968) return 118;
    if (raw_code == 1992) return 119;
    if (raw_code == 2000) return 120;
    if (raw_code == 2024) return 121;
    if (raw_code == 2032) return 122;
    if (raw_code == 2056) return 123;
    if (raw_code == 2064) return 124;
    if (raw_code == 2088) return 125;
    if (raw_code == 2096) return 126;
    if (raw_code == 2120) return 127;
    if (raw_code == 2128) return 128;
    if (raw_code == 2152) return 129;
    if (raw_code == 2160) return 130;
    if (raw_code == 2184) return 131;
    if (raw_code == 2192) return 132;
    if (raw_code == 2216) return 133;
    if (raw_code == 2224) return 134;
    if (raw_code == 2248) return 135;
    if (raw_code == 2256) return 136;
    if (raw_code == 2280) return 137;
    if (raw_code == 2288) return 138;
    if (raw_code == 2312) return 139;
    if (raw_code == 2320) return 140;
    if (raw_code == 2344) return 141;
    if (raw_code == 2352) return 142;
    if (raw_code == 2376) return 143;
    if (raw_code == 2384) return 144;
    if (raw_code == 2408) return 145;
    if (raw_code == 2416) return 146;
    if (raw_code == 2440) return 147;
    if (raw_code == 2448) return 148;
    if (raw_code == 2472) return 149;
    if (raw_code == 2480) return 150;
    if (raw_code == 2504) return 151;
    if (raw_code == 2512) return 152;
    if (raw_code == 2536) return 153;
    if (raw_code == 2544) return 154;
    if (raw_code == 2568) return 155;
    if (raw_code == 2576) return 156;
    if (raw_code == 2600) return 157;
    if (raw_code == 2608) return 158;
    if (raw_code == 2632) return 159;
    if (raw_code == 2640) return 160;
    if (raw_code == 2664) return 161;
    if (raw_code == 2672) return 162;
    if (raw_code == 2696) return 163;
    if (raw_code == 2704) return 164;
    if (raw_code == 2728) return 165;
    if (raw_code == 2736) return 166;
    if (raw_code == 2760) return 167;
    if (raw_code == 2768) return 168;
    if (raw_code == 2792) return 169;
    if (raw_code == 2800) return 170;
    if (raw_code == 2824) return 171;
    if (raw_code == 2832) return 172; //Oscar?
    if (raw_code == 2856) return 173;
    if (raw_code == 2864) return 174;
    if (raw_code == 2888) return 175;
    if (raw_code == 2896) return 176;
    if (raw_code == 2920) return 177;
    if (raw_code == 2928) return 178;
    if (raw_code == 2952) return 179;
    if (raw_code == 2960) return 180;
    if (raw_code == 2984) return 181;
    if (raw_code == 2992) return 182;
    if (raw_code == 3016) return 183;
    if (raw_code == 3024) return 184;
    if (raw_code == 3048) return 185;
    if (raw_code == 3056) return 186;
    if (raw_code == 3080) return 187;
    if (raw_code == 3088) return 188;
    if (raw_code == 3112) return 189;
    if (raw_code == 3120) return 190;
    if (raw_code == 3144) return 191;
    if (raw_code == 3152) return 192;
    if (raw_code == 3176) return 193;
    if (raw_code == 3184) return 194;
    if ((raw_code == 3208)||(raw_code == 3216)) return 195; //3208 //95 plane 1 and 2 Here starts the HCAL
    if ((raw_code == 3240)||(raw_code == 3248)) return 196; //3240
    if ((raw_code == 3272)||(raw_code == 3280)) return 197; //3272
    if ((raw_code == 3304)||(raw_code == 3312)) return 198; //3304  //98 plane 1
    if ((raw_code == 3336)||(raw_code == 3344)) return 199; //3336
    if ((raw_code == 3368)||(raw_code == 3376)) return 200; //3368
    if ((raw_code == 3400)||(raw_code == 3408)) return 201; //3400
    if ((raw_code == 3432)||(raw_code == 3440)) return 202; //3432
    if ((raw_code == 3464)||(raw_code == 3472)) return 203; //3464
    if ((raw_code == 3496)||(raw_code == 3504)) return 204; //3496
    if ((raw_code == 3528)||(raw_code == 3536)) return 205; //3528
    if ((raw_code == 3560)||(raw_code == 3568)) return 206; //3560 //106
    if ((raw_code == 3592)||(raw_code == 3600)) return 207; //3592
    if ((raw_code == 3624)||(raw_code == 3632)) return 208; //3624
    if ((raw_code == 3656)||(raw_code == 3664)) return 209; //3656
    if ((raw_code == 3688)||(raw_code == 3696)) return 210; //3688
    if ((raw_code == 3720)||(raw_code == 3728)) return 211; //3720
    if ((raw_code == 3752)||(raw_code == 3760)) return 212; //3752
    if ((raw_code == 3784)||(raw_code == 3792)) return 213; //3784
    if ((raw_code == 3816)||(raw_code == 3824)) return 214; //3816
    return -1;
}
//----------------------------------------------------------------------------
int RecoTracksUtils::getPlaneIdCode(const EnhNukeCC* mc) const
{
    int vtx_module = mc->truth_vtx_module;
    int vtx_plane  = mc->truth_vtx_plane;
    int target     = mc->truth_targetID;
    double z = mc->mc_vtx[2];

    //std::cout << "Module: " << vtx_module << std::endl;
    //std::cout << "Plane: " << vtx_plane << std::endl;
    //std::cout << "target: " << target << std::endl;
    //std::cout << "z: " << z << std::endl;

    if ((z > 5170. && z < 5440.) &&
            (target == 0 && (vtx_module == -999 || vtx_plane == -999))) {
        target = 6;  // water target
    }
    // target is 3 bits, 0->5, plane is 2 bits, 1->2, need module+5 (no neg)
    int raw_code = target + (vtx_plane << 3) + ((vtx_module + 5) << 5);

    if (target == 0 && (vtx_module == -999 || vtx_plane == -999)) {
        raw_code = -1;
    }
    if (target > 0) {
        raw_code = target;
    }
/*
    if(target == 0 && (vtx_module == -999 || vtx_plane == -999))
    {
    //This part is added by Oscar
        if (z > 8524. && z < 8544.0){ raw_code = 2832; //Module 84 plane 1        173
        }
        if (z > 8544.0 && z < 8605.33){ raw_code = 2856; //Module 84  plane 2       174
        }
      // ECAL starts here
        if (z >= 8605.33 && z < 8625.81){ raw_code = 2888; //Module 85  plane 1       175
        }
        if (z > 8625.81 && z < 8646.28){ raw_code = 2896; //Module 85  plane 2       176
        }
        if (z > 8650.28 && z < 8670.60){ raw_code = 2920; //Module 86  plane 1       177
        }
        if (z > 8670.60 && z < 8691.10){ raw_code = 2928; //Module 86  plane 2       178
        }
        if (z > 8691.10 && z < 8715.41){ raw_code = 2952; //Module 87  plane 1       179
        }
        if (z > 8715.41 && z < 8735.89){ raw_code = 2960; //Module 87  plane 2       180
        }
        if (z > 8735.89 && z < 8760.21){ raw_code = 2984; //Module 88  plane 1       181
        }
        if (z > 8760.21 && z < 8780.69){ raw_code = 2992; //Module 88  plane 2       182
        }
        if (z > 8780.69 && z < 8805.00){ raw_code = 3016; //Module 89  plane 1       183
        }
        if (z > 8805.00 && z < 8825.49){ raw_code = 3024; //Module 89  plane 2       184
        }
        if (z > 8825.49 && z < 8849.80){ raw_code = 3048; //Module 90  plane 1       185
        }
        if (z > 8849.80 && z < 8870.30){ raw_code = 3056; //Module 90  plane 2       186
        }
        if (z > 8870.30 && z < 8894.62){ raw_code = 3080; //Module 91  plane 1       187
        }
        if (z > 8894.62 && z < 8915.10){ raw_code = 3088; //Module 91  plane 2       188
        }
        if (z > 8915.10 && z < 8939.42){ raw_code = 3112; //Module 92  plane 1       189
        }
        if (z > 8939.42 && z < 8959.90){ raw_code = 3120; //Module 92  plane 2       190
        }
        if (z > 8959.90 && z < 8984.22){ raw_code = 3144; //Module 93  plane 1       191
        }
        if (z > 8984.22 && z < 9004.71){ raw_code = 3152; //Module 93  plane 2       192
        }
        if (z > 9004.71 && z < 9029.02){ raw_code = 3176; //Module 94  plane 1       193
        }
        if (z > 9029.02 && z < 9049.51){ raw_code = 3184; //Module 94  plane 2       194
        }
        if (z > 9049.51 && z < 9098.0){ raw_code = 3208; //Module 95  plane 1       195
        }
        if (z > 9098.0 && z < 9144.6){ raw_code = 3240; //Module 96  plane 1       196
        }
        if (z > 9144.6 && z < 9191.9){ raw_code = 3272; //Module 97  plane 1       197
        }
        if (z > 9191.9 && z < 9239.3){ raw_code = 3304; //Module 98  plane 1       198
        }
        if (z > 9239.3 && z < 9286.6){ raw_code = 3336; //Module 99  plane 1       199
        }
        if (z > 9286.6 && z < 9333.9){ raw_code = 3368; //Module 100  plane 1       200
        }
        if (z > 9333.9 && z < 9381.3){ raw_code = 3400; //Module 101  plane 1       201
        }
        if (z > 9381.3 && z < 9428.6){ raw_code = 3432; //Module 102  plane 1       202
        }
        if (z > 9428.6 && z < 9475.9){ raw_code = 3464; //Module 103  plane 1       203
        }
        if (z > 9475.9 && z < 9523.3){ raw_code = 3496; //Module 104  plane 1       204
        }
        if (z > 9523.3 && z < 9570.6){ raw_code = 3528; //Module 105  plane 1       205
        }
        if (z > 9570.6 && z < 9617.9){ raw_code = 3560; //Module 106  plane 1       206
        }
        if (z > 9617.9 && z < 9664.9){ raw_code = 3592; //Module 107  plane 1       207
        }
        if (z > 9664.9 && z < 9701.3){ raw_code = 3624; //Module 108  plane 1       208
        }
    //Fake!!
        if (z > 9701.3 && z < 9890.8){ raw_code = 3656; //Module 109  plane 1       209
        }
        if (z > 9890.8 && z < 9937.9){ raw_code = 3688; //Module 110  plane 1       210
        }
        if (z > 9937.9 && z < 9985.2){ raw_code = 3720; //Module 111  plane 1       211
        }
        if (z > 9985.2 && z < 10032.3){ raw_code = 3752; //Module 112  plane 1       212
        }
        if (z > 10032.3 && z < 10079.5){ raw_code = 3784; //Module 113  plane 1       213
        }
        if (z > 10079.5 && z < 10126.7){ raw_code = 3816; //Module 114  plane 1       214
        }
    }
*/    
    return this->convertPlaneCode(raw_code);
}


//----------------------------------------------------------------------------
int RecoTracksUtils::getPlaneIdCode(const EnhMasterAnaDev* mc) const
{
    int vtx_module = mc->truth_vtx_module;
    int vtx_plane  = mc->truth_vtx_plane;
    int target     = mc->truth_targetID;
    double z = mc->mc_vtx[2];
    if ((z > 5170. && z < 5440.) &&
            (target == 0 && (vtx_module == -999 || vtx_plane == -999))) {
        target = 6;  // water target
    }
    // target is 3 bits, 0->5, plane is 2 bits, 1->2, need module+5 (no neg)
    int raw_code = target + (vtx_plane << 3) + ((vtx_module + 5) << 5);

    if (target == 0 && (vtx_module == -999 || vtx_plane == -999)) {
        raw_code = -1;
    }
    if (target > 0) {
        raw_code = target;
    }

    //This part is added by Oscar
        if ((z > 8524. && z < 8544.0) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2832; //Module 84 plane 1        173
        }
        if ((z > 8544.1 && z < 8605.33) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2856; //Module 84  plane 2       174
        }
      // ECAL starts here
        if ((z >= 8605.33 && z < 8625.81) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2888; //Module 85  plane 1       175
        }
        if ((z > 8625.88 && z < 8646.28) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2896; //Module 85  plane 2       176
        }
        if ((z > 8650.12 && z < 8670.60) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2920; //Module 86  plane 1       177
        }
        if ((z > 8670.61 && z < 8691.10) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2928; //Module 86  plane 2       178
        }
        if ((z > 8694.90 && z < 8715.41) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2952; //Module 87  plane 1       179
        }
        if ((z > 8715.42 && z < 8735.89) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2960; //Module 87  plane 2       180
        }
        if ((z > 8739.70 && z < 8760.21) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2984; //Module 88  plane 1       181
        }
        if ((z >= 8760.22 && z < 8780.69) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 2992; //Module 88  plane 2       182
        }
        if ((z > 8784.52 && z < 8805.00) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3016; //Module 89  plane 1       183
        }
        if ((z > 8805.00 && z < 8825.49) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3024; //Module 89  plane 2       184
        }
        if ((z > 8829.35 && z < 8849.80) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3048; //Module 90  plane 1       185
        }
        if ((z > 8849.80 && z < 8870.30) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3056; //Module 90  plane 2       186
        }
        if ((z > 8874.13 && z < 8894.62) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3080; //Module 91  plane 1       187
        }
        if ((z > 8894.62 && z < 8915.10) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3088; //Module 91  plane 2       188
        }
        if ((z > 8918.94 && z < 8939.42) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3112; //Module 92  plane 1       189
        }
        if ((z > 8939.42 && z < 8959.90) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3120; //Module 92  plane 2       190
        }
        if ((z > 8963.75 && z < 8984.22) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3144; //Module 93  plane 1       191
        }
        if ((z > 8984.31 && z < 9004.71) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3152; //Module 93  plane 2       192
        }
        if ((z > 9008.58 && z < 9029.02) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3176; //Module 94  plane 1       193
        }
        if ((z > 9029.06 && z < 9049.51) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3184; //Module 94  plane 2       194
        }
        if ((z > 9053.33 && z < 9098.0) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3208; //Module 95  plane 1       195
        }
         if ((z > 9100.68 && z <= 9144.6) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3240; //Module 96  plane 1       196
        }

        if ((z > 9148.0 && z < 9191.9) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3272; //Module 97  plane 1       197
        }
        if ((z > 9195.3 && z < 9239.3) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3304; //Module 98  plane 1       198
        }
        if ((z > 9242.6 && z < 9286.6) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3336; //Module 99  plane 1       199
        }
        if ((z > 9290.0 && z < 9333.9) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3368; //Module 100  plane 1       200
        }
        if ((z > 9337.3 && z < 9381.3) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3400; //Module 101  plane 1       201
        }
        if ((z > 9384.6 && z < 9428.6) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3432; //Module 102  plane 1       202
        }
        if ((z > 9432.0 && z < 9475.9) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3464; //Module 103  plane 1       203
        }
        if ((z > 9479.3 && z < 9523.3) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3496; //Module 104  plane 1       204
        }
        if ((z > 9526.6 && z < 9570.6) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3528; //Module 105  plane 1       205
        }
        if ((z > 9574.0 && z < 9617.9) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3560; //Module 106  plane 1       206
        }
        if ((z > 9621.3 && z < 9664.9) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3592; //Module 107  plane 1       207
        }
        if ((z > 9668.6 && z < 9701.3) &&
                (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                  raw_code = 3624; //Module 108  plane 1       208
        }
    //Fake!!
        if ((z > 9716.4 && z < 9890.8) &&
              (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                raw_code = 3656; //Module 109  plane 1       209
        }
        if ((z > 9894.1 && z < 9937.9) &&
              (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                raw_code = 3688; //Module 110  plane 1       210
        }
        if ((z > 9941.3 && z < 9985.2) &&
              (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                raw_code = 3720; //Module 111  plane 1       211
        }
        if ((z > 9988.51 && z < 10032.3) &&
              (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                raw_code = 3752; //Module 112  plane 1       212
        }
        if ((z > 10035.7 && z < 10079.5) &&
              (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                raw_code = 3784; //Module 113  plane 1       213
        }
        if ((z > 10082.9 && z < 10126.7) &&
              (target == 0 && (vtx_module == -999 || vtx_plane == -999))){
                raw_code = 3816; //Module 114  plane 1       214
        }

        return this->convertPlaneCode(raw_code);
}

//----------------------------------------------------------------------------
void RecoTracksUtils::getFSParticles(const EnhNukeCC* mc,
        std::vector<int>& pdgs,
        std::vector<double>& energies) const
{
    for (int i = 0; i < mc->mc_nFSPart; ++i) {
        double m2 = TMath::Power(mc->mc_FSPartE[i], 2.0) -
            TMath::Power(mc->mc_FSPartPx[i], 2.0) -
            TMath::Power(mc->mc_FSPartPy[i], 2.0) -
            TMath::Power(mc->mc_FSPartPz[i], 2.0);
        double m = m2 > 0.0 ? TMath::Sqrt(m2) : 0.0;
        double ke = mc->mc_FSPartE[i] - m;
        pdgs.push_back(mc->mc_FSPartPDG[i]);
        energies.push_back(ke);
    }
}
//----------------Added by Oscar--------------------------------------------
//----------------------------------------------------------------------------
// ack... height of bad coding... this hurts my eyes...
void RecoTracksUtils::getFSParticles(const EnhNuECCQE* mc,
        std::vector<int>& pdgs,
        std::vector<double>& energies) const
{
    for (int i = 0; i < mc->mc_nFSPart; ++i) {
        double m2 = TMath::Power(mc->mc_FSPartE[i], 2.0) -
            TMath::Power(mc->mc_FSPartPx[i], 2.0) -
            TMath::Power(mc->mc_FSPartPy[i], 2.0) -
            TMath::Power(mc->mc_FSPartPz[i], 2.0);
        double m = m2 > 0.0 ? TMath::Sqrt(m2) : 0.0;
        double ke = mc->mc_FSPartE[i] - m;
        pdgs.push_back(mc->mc_FSPartPDG[i]);
        energies.push_back(ke);
    }
}
//----------------------------------------------------------------------------
void RecoTracksUtils::getFSParticles(const EnhMasterAnaDev* mc,
        std::vector<int>& pdgs,
        std::vector<double>& energies) const
{
    for (int i = 0; i < mc->mc_nFSPart; ++i) {
        double m2 = TMath::Power(mc->mc_FSPartE[i], 2.0) -
            TMath::Power(mc->mc_FSPartPx[i], 2.0) -
            TMath::Power(mc->mc_FSPartPy[i], 2.0) -
            TMath::Power(mc->mc_FSPartPz[i], 2.0);
        double m = m2 > 0.0 ? TMath::Sqrt(m2) : 0.0;
        double ke = mc->mc_FSPartE[i] - m;
        pdgs.push_back(mc->mc_FSPartPDG[i]);
        energies.push_back(ke);
    }
}
//-----------------------------------------------------------------------------

uint64_t RecoTracksUtils::computeEventId(int run, int subrun, int gate, int slice)
{
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(6) << run;
    ss << std::setfill('0') << std::setw(4) << subrun;
    ss << std::setfill('0') << std::setw(4) << gate;
    ss << std::setfill('0') << std::setw(2) << slice;
    const std::string& tmp = ss.str();
    uint64_t eventid = strtoull(tmp.c_str(), NULL, 10);
    return eventid;
}

//----------------------------------------------------------------------------
uint32_t RecoTracksUtils::computeEventId32a(int run, int slice)
{
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(6) << run;
    ss << std::setfill('0') << std::setw(2) << slice;
    const std::string& tmp = ss.str();
    uint32_t eventid = strtoul(tmp.c_str(), NULL, 10);
    return eventid;
}

//----------------------------------------------------------------------------
uint32_t RecoTracksUtils::computeEventId32b(int subrun, int gate)
{
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(4) << subrun;
    ss << std::setfill('0') << std::setw(4) << gate;
    const std::string& tmp = ss.str();
    uint32_t eventid = strtoul(tmp.c_str(), NULL, 10);
    return eventid;
}

#endif
