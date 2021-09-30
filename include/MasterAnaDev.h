//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul  9 13:38:24 2021 by ROOT version 5.34/36
// from TChain MasterAnaDev/
//////////////////////////////////////////////////////////

#ifndef MasterAnaDev_h
#define MasterAnaDev_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
//#include <TSelector.h>
//using namespace std;
// Header file for the classes stored in the TTree if any.
//#include "/minerva/app/users/aolivier/cmtuser/SL7Build_Final/Bootstrap/lcgcmake/build/lcg_61a/projects/ROOT-5.34.36/src/ROOT/5.34.36/cint/cint/lib/prec_stl/vector"

// Fixed size dimensions of array or collections stored in the TTree if any.
   //const Int_t kMaxtruth = 1;
   //const Int_t kMaxprong = 1;

namespace RECOTRACKS_ANA {
class MasterAnaDev {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent;

   static const size_t MAX_USACT_EXTENT = 250;
   static const size_t MAX_MC_FR_NNUANCESTORIDS = 4*10;
   static const size_t MAX_MC_ER_NPART = 50;
   static const size_t MAX_MC_NFSPART = 146; //50
   static const size_t MAX_N_PRONGS = 15;
   static const size_t MAX_N_SLICES = 3;
   static const size_t MAX_GENIE_WGT_N_SHIFTS = 7;
   static const size_t MAX_MC_WGT_GENIE_SZ = 100;
   static const size_t MAX_MC_WGT_FLUX_TERTIARY_SZ = 100;
   static const size_t MAX_MC_WGT_FLUX_NA49_SZ = 100;
   static const size_t MAX_MC_WGT_FLUX_BEAMFOCUS_SZ = 100;

   // Declaration of leaf types
   Double_t        eventID;
   Int_t           physEvtNum;
   Int_t           n_hyps;
   Int_t           processType;
   Int_t           primaryPart;
   Int_t           n_slices;
   Int_t           slice_numbers[MAX_N_SLICES];   //[n_slices]
   Int_t           shared_slice;
   Double_t        vtx[4];
   Double_t        vtxErr[4];
   Double_t        E[4];
   Int_t           reco_vertex_batch;
   Bool_t          found_truth;
   Bool_t          phys_front_activity;
   Bool_t          phys_energy_in_road_upstream_is_rockmuon_consistent;
   Bool_t          rock_muons_removed;
   Bool_t          minos_track_match;
   Bool_t          minos_stub_match;
   Bool_t          unknown_helicity;
   Bool_t          minos_track_inside_partial_plane;
   Bool_t          prim_vtx_has_misassigned_track_direction;
   Bool_t          prim_vtx_has_broken_track;
   Bool_t          pass_MasterAnaDev;
   Bool_t          VetoWall_extrapnowalls;
   Bool_t          VetoWall_extrapwall1;
   Bool_t          VetoWall_extrapwall2;
   Bool_t          VetoWall_extrapbothwalls;
   Bool_t          VetoWall_MuonTrkMatchToVETOwalloff;
   Int_t           EMLikeTrackMultiplicity;
   Int_t           HasNoBackExitingTracks;
   Int_t           HasNoVertexMismatch;
   Int_t           HasTracks;
   Int_t           ID_Hits_Post_Long;
   Int_t           NeutronMaxClusters;
   Int_t           NneutronClusters0;
   Int_t           NneutronClusters1;
   Int_t           NneutronClusters2;
   Int_t           NneutronClusters3;
   Int_t           PassNeutronMaxClusterCut;
   Int_t           StartPointVertexMultiplicity;
   Int_t           UpstreamInlineNClusters;
   Int_t           UpstreamInlineNDigits;
   Int_t           VertexTrackMultiplicity;
   Int_t           VetoWall_NumberMatchToVeto;
   Int_t           VetoWall_event_IsVeto;
   Int_t           VetoWall_sixPush;
   Int_t           blob_disp_nBlobs;
   Int_t           blob_disp_nClus;
   Int_t           blob_disp_nClus_ecal;
   Int_t           blob_disp_nClus_hcal;
   Int_t           blob_disp_nClus_nucl;
   Int_t           blob_disp_nClus_od;
   Int_t           blob_disp_nClus_tracker;
   Int_t           blob_iso_nBlobs;
   Int_t           blob_iso_nClus;
   Int_t           blob_iso_nClus_ecal;
   Int_t           blob_iso_nClus_hcal;
   Int_t           blob_iso_nClus_nucl;
   Int_t           blob_iso_nClus_od;
   Int_t           blob_iso_nClus_tracker;
   Int_t           blob_mufuzz_nBlobs;
   Int_t           blob_mufuzz_nClus;
   Int_t           blob_mufuzz_nClus_ecal;
   Int_t           blob_mufuzz_nClus_hcal;
   Int_t           blob_mufuzz_nClus_nucl;
   Int_t           blob_mufuzz_nClus_od;
   Int_t           blob_mufuzz_nClus_tracker;
   Int_t           blob_recoil_nBlobs;
   Int_t           blob_recoil_nClus;
   Int_t           blob_recoil_nClus_ecal;
   Int_t           blob_recoil_nClus_hcal;
   Int_t           blob_recoil_nClus_nucl;
   Int_t           blob_recoil_nClus_od;
   Int_t           blob_recoil_nClus_tracker;
   Int_t           blob_vtx_nBlobs;
   Int_t           blob_vtx_nClus;
   Int_t           blob_vtx_nClus_ecal;
   Int_t           blob_vtx_nClus_hcal;
   Int_t           blob_vtx_nClus_nucl;
   Int_t           blob_vtx_nClus_od;
   Int_t           blob_vtx_nClus_tracker;
   Int_t           broken_track_most_us_plane;
   Int_t           event_unused_start_vertices;
   Int_t           event_used_start_vertices;
   Int_t           has_interaction_vertex;
   Int_t           has_single_proton;
   Int_t           improved_nmichel;
   Int_t           isMinosMatchStub;
   Int_t           isMinosMatchTrack;
   Int_t           multiplicity;
   Int_t           muon_fuzz_energy;
   Int_t           muon_is_minos_match_stub;
   Int_t           muon_is_minos_match_track;
   Int_t           n_anchored_long_trk_prongs;
   Int_t           n_anchored_short_trk_prongs;
   Int_t           n_indices;
   Int_t           n_iso_trk_prongs;
   Int_t           n_minos_matches;
   Int_t           n_muon_iso_blobs;
   Int_t           n_nonvtx_iso_blobs;
   Int_t           n_nonvtx_iso_blobs_all;
   Int_t           part_response_recoil_nClus;
   Int_t           pass_MasterAnaDev_precuts;
   Int_t           phys_energy_in_road_downstream_nplanes;
   Int_t           phys_energy_in_road_upstream_nplanes;
   Int_t           phys_n_dead_discr_pair;
   Int_t           phys_n_dead_discr_pair_in_prim_track_region;
   Int_t           phys_n_dead_discr_pair_two_mod_downstream_prim_track;
   Int_t           phys_n_dead_discr_pair_two_mod_upstream_prim_vtx;
   Int_t           phys_n_dead_discr_pair_upstream_prim_track_proj;
   Int_t           phys_vertex_is_fiducial;
   Int_t           proton_prong_PDG;
   Int_t           proton_prong_traj_ID;
   Int_t           recoil_EInc;
   Int_t           slice_n_hits;
   Int_t           truth_improved_michel_electron;
   Double_t        ConeEnergyVis;
   Double_t        ExtraEnergyVis;
   Double_t        Psi;
   Double_t        UpstreamInlineEnergy;
   Double_t        UpstreamInlineEnergyWgtdPosMean;
   Double_t        UpstreamInlineEnergyWgtdPosRMS;
   Double_t        blob_ccqe_recoil_E;
   Double_t        blob_disp_E;
   Double_t        blob_disp_E_ecal;
   Double_t        blob_disp_E_ecal_em;
   Double_t        blob_disp_E_ecal_highn;
   Double_t        blob_disp_E_ecal_lown;
   Double_t        blob_disp_E_ecal_meson;
   Double_t        blob_disp_E_ecal_midn;
   Double_t        blob_disp_E_ecal_mu;
   Double_t        blob_disp_E_ecal_other;
   Double_t        blob_disp_E_ecal_p;
   Double_t        blob_disp_E_ecal_xtalk;
   Double_t        blob_disp_E_em;
   Double_t        blob_disp_E_hcal;
   Double_t        blob_disp_E_hcal_em;
   Double_t        blob_disp_E_hcal_highn;
   Double_t        blob_disp_E_hcal_lown;
   Double_t        blob_disp_E_hcal_meson;
   Double_t        blob_disp_E_hcal_midn;
   Double_t        blob_disp_E_hcal_mu;
   Double_t        blob_disp_E_hcal_other;
   Double_t        blob_disp_E_hcal_p;
   Double_t        blob_disp_E_hcal_xtalk;
   Double_t        blob_disp_E_highn;
   Double_t        blob_disp_E_lown;
   Double_t        blob_disp_E_meson;
   Double_t        blob_disp_E_midn;
   Double_t        blob_disp_E_mu;
   Double_t        blob_disp_E_nucl;
   Double_t        blob_disp_E_nucl_em;
   Double_t        blob_disp_E_nucl_highn;
   Double_t        blob_disp_E_nucl_lown;
   Double_t        blob_disp_E_nucl_meson;
   Double_t        blob_disp_E_nucl_midn;
   Double_t        blob_disp_E_nucl_mu;
   Double_t        blob_disp_E_nucl_other;
   Double_t        blob_disp_E_nucl_p;
   Double_t        blob_disp_E_nucl_xtalk;
   Double_t        blob_disp_E_od;
   Double_t        blob_disp_E_od_em;
   Double_t        blob_disp_E_od_highn;
   Double_t        blob_disp_E_od_lown;
   Double_t        blob_disp_E_od_meson;
   Double_t        blob_disp_E_od_midn;
   Double_t        blob_disp_E_od_mu;
   Double_t        blob_disp_E_od_other;
   Double_t        blob_disp_E_od_p;
   Double_t        blob_disp_E_od_xtalk;
   Double_t        blob_disp_E_other;
   Double_t        blob_disp_E_p;
   Double_t        blob_disp_E_tracker;
   Double_t        blob_disp_E_tracker_em;
   Double_t        blob_disp_E_tracker_highn;
   Double_t        blob_disp_E_tracker_lown;
   Double_t        blob_disp_E_tracker_meson;
   Double_t        blob_disp_E_tracker_midn;
   Double_t        blob_disp_E_tracker_mu;
   Double_t        blob_disp_E_tracker_other;
   Double_t        blob_disp_E_tracker_p;
   Double_t        blob_disp_E_tracker_xtalk;
   Double_t        blob_disp_E_xtalk;
   Double_t        blob_iso_E;
   Double_t        blob_iso_E_ecal;
   Double_t        blob_iso_E_ecal_em;
   Double_t        blob_iso_E_ecal_highn;
   Double_t        blob_iso_E_ecal_lown;
   Double_t        blob_iso_E_ecal_meson;
   Double_t        blob_iso_E_ecal_midn;
   Double_t        blob_iso_E_ecal_mu;
   Double_t        blob_iso_E_ecal_other;
   Double_t        blob_iso_E_ecal_p;
   Double_t        blob_iso_E_ecal_xtalk;
   Double_t        blob_iso_E_em;
   Double_t        blob_iso_E_hcal;
   Double_t        blob_iso_E_hcal_em;
   Double_t        blob_iso_E_hcal_highn;
   Double_t        blob_iso_E_hcal_lown;
   Double_t        blob_iso_E_hcal_meson;
   Double_t        blob_iso_E_hcal_midn;
   Double_t        blob_iso_E_hcal_mu;
   Double_t        blob_iso_E_hcal_other;
   Double_t        blob_iso_E_hcal_p;
   Double_t        blob_iso_E_hcal_xtalk;
   Double_t        blob_iso_E_highn;
   Double_t        blob_iso_E_lown;
   Double_t        blob_iso_E_meson;
   Double_t        blob_iso_E_midn;
   Double_t        blob_iso_E_mu;
   Double_t        blob_iso_E_nucl;
   Double_t        blob_iso_E_nucl_em;
   Double_t        blob_iso_E_nucl_highn;
   Double_t        blob_iso_E_nucl_lown;
   Double_t        blob_iso_E_nucl_meson;
   Double_t        blob_iso_E_nucl_midn;
   Double_t        blob_iso_E_nucl_mu;
   Double_t        blob_iso_E_nucl_other;
   Double_t        blob_iso_E_nucl_p;
   Double_t        blob_iso_E_nucl_xtalk;
   Double_t        blob_iso_E_od;
   Double_t        blob_iso_E_od_em;
   Double_t        blob_iso_E_od_highn;
   Double_t        blob_iso_E_od_lown;
   Double_t        blob_iso_E_od_meson;
   Double_t        blob_iso_E_od_midn;
   Double_t        blob_iso_E_od_mu;
   Double_t        blob_iso_E_od_other;
   Double_t        blob_iso_E_od_p;
   Double_t        blob_iso_E_od_xtalk;
   Double_t        blob_iso_E_other;
   Double_t        blob_iso_E_p;
   Double_t        blob_iso_E_tracker;
   Double_t        blob_iso_E_tracker_em;
   Double_t        blob_iso_E_tracker_highn;
   Double_t        blob_iso_E_tracker_lown;
   Double_t        blob_iso_E_tracker_meson;
   Double_t        blob_iso_E_tracker_midn;
   Double_t        blob_iso_E_tracker_mu;
   Double_t        blob_iso_E_tracker_other;
   Double_t        blob_iso_E_tracker_p;
   Double_t        blob_iso_E_tracker_xtalk;
   Double_t        blob_iso_E_xtalk;
   Double_t        blob_mufuzz_E;
   Double_t        blob_mufuzz_E_ecal;
   Double_t        blob_mufuzz_E_ecal_em;
   Double_t        blob_mufuzz_E_ecal_highn;
   Double_t        blob_mufuzz_E_ecal_lown;
   Double_t        blob_mufuzz_E_ecal_meson;
   Double_t        blob_mufuzz_E_ecal_midn;
   Double_t        blob_mufuzz_E_ecal_mu;
   Double_t        blob_mufuzz_E_ecal_other;
   Double_t        blob_mufuzz_E_ecal_p;
   Double_t        blob_mufuzz_E_ecal_xtalk;
   Double_t        blob_mufuzz_E_em;
   Double_t        blob_mufuzz_E_hcal;
   Double_t        blob_mufuzz_E_hcal_em;
   Double_t        blob_mufuzz_E_hcal_highn;
   Double_t        blob_mufuzz_E_hcal_lown;
   Double_t        blob_mufuzz_E_hcal_meson;
   Double_t        blob_mufuzz_E_hcal_midn;
   Double_t        blob_mufuzz_E_hcal_mu;
   Double_t        blob_mufuzz_E_hcal_other;
   Double_t        blob_mufuzz_E_hcal_p;
   Double_t        blob_mufuzz_E_hcal_xtalk;
   Double_t        blob_mufuzz_E_highn;
   Double_t        blob_mufuzz_E_lown;
   Double_t        blob_mufuzz_E_meson;
   Double_t        blob_mufuzz_E_midn;
   Double_t        blob_mufuzz_E_mu;
   Double_t        blob_mufuzz_E_nucl;
   Double_t        blob_mufuzz_E_nucl_em;
   Double_t        blob_mufuzz_E_nucl_highn;
   Double_t        blob_mufuzz_E_nucl_lown;
   Double_t        blob_mufuzz_E_nucl_meson;
   Double_t        blob_mufuzz_E_nucl_midn;
   Double_t        blob_mufuzz_E_nucl_mu;
   Double_t        blob_mufuzz_E_nucl_other;
   Double_t        blob_mufuzz_E_nucl_p;
   Double_t        blob_mufuzz_E_nucl_xtalk;
   Double_t        blob_mufuzz_E_od;
   Double_t        blob_mufuzz_E_od_em;
   Double_t        blob_mufuzz_E_od_highn;
   Double_t        blob_mufuzz_E_od_lown;
   Double_t        blob_mufuzz_E_od_meson;
   Double_t        blob_mufuzz_E_od_midn;
   Double_t        blob_mufuzz_E_od_mu;
   Double_t        blob_mufuzz_E_od_other;
   Double_t        blob_mufuzz_E_od_p;
   Double_t        blob_mufuzz_E_od_xtalk;
   Double_t        blob_mufuzz_E_other;
   Double_t        blob_mufuzz_E_p;
   Double_t        blob_mufuzz_E_tracker;
   Double_t        blob_mufuzz_E_tracker_em;
   Double_t        blob_mufuzz_E_tracker_highn;
   Double_t        blob_mufuzz_E_tracker_lown;
   Double_t        blob_mufuzz_E_tracker_meson;
   Double_t        blob_mufuzz_E_tracker_midn;
   Double_t        blob_mufuzz_E_tracker_mu;
   Double_t        blob_mufuzz_E_tracker_other;
   Double_t        blob_mufuzz_E_tracker_p;
   Double_t        blob_mufuzz_E_tracker_xtalk;
   Double_t        blob_mufuzz_E_xtalk;
   Double_t        blob_recoil_E;
   Double_t        blob_recoil_E_ecal;
   Double_t        blob_recoil_E_ecal_em;
   Double_t        blob_recoil_E_ecal_highn;
   Double_t        blob_recoil_E_ecal_lown;
   Double_t        blob_recoil_E_ecal_meson;
   Double_t        blob_recoil_E_ecal_midn;
   Double_t        blob_recoil_E_ecal_mu;
   Double_t        blob_recoil_E_ecal_other;
   Double_t        blob_recoil_E_ecal_p;
   Double_t        blob_recoil_E_ecal_xtalk;
   Double_t        blob_recoil_E_em;
   Double_t        blob_recoil_E_hcal;
   Double_t        blob_recoil_E_hcal_em;
   Double_t        blob_recoil_E_hcal_highn;
   Double_t        blob_recoil_E_hcal_lown;
   Double_t        blob_recoil_E_hcal_meson;
   Double_t        blob_recoil_E_hcal_midn;
   Double_t        blob_recoil_E_hcal_mu;
   Double_t        blob_recoil_E_hcal_other;
   Double_t        blob_recoil_E_hcal_p;
   Double_t        blob_recoil_E_hcal_xtalk;
   Double_t        blob_recoil_E_highn;
   Double_t        blob_recoil_E_lown;
   Double_t        blob_recoil_E_meson;
   Double_t        blob_recoil_E_midn;
   Double_t        blob_recoil_E_mu;
   Double_t        blob_recoil_E_nucl;
   Double_t        blob_recoil_E_nucl_em;
   Double_t        blob_recoil_E_nucl_highn;
   Double_t        blob_recoil_E_nucl_lown;
   Double_t        blob_recoil_E_nucl_meson;
   Double_t        blob_recoil_E_nucl_midn;
   Double_t        blob_recoil_E_nucl_mu;
   Double_t        blob_recoil_E_nucl_other;
   Double_t        blob_recoil_E_nucl_p;
   Double_t        blob_recoil_E_nucl_xtalk;
   Double_t        blob_recoil_E_od;
   Double_t        blob_recoil_E_od_em;
   Double_t        blob_recoil_E_od_highn;
   Double_t        blob_recoil_E_od_lown;
   Double_t        blob_recoil_E_od_meson;
   Double_t        blob_recoil_E_od_midn;
   Double_t        blob_recoil_E_od_mu;
   Double_t        blob_recoil_E_od_other;
   Double_t        blob_recoil_E_od_p;
   Double_t        blob_recoil_E_od_xtalk;
   Double_t        blob_recoil_E_other;
   Double_t        blob_recoil_E_p;
   Double_t        blob_recoil_E_tracker;
   Double_t        blob_recoil_E_tracker_em;
   Double_t        blob_recoil_E_tracker_highn;
   Double_t        blob_recoil_E_tracker_lown;
   Double_t        blob_recoil_E_tracker_meson;
   Double_t        blob_recoil_E_tracker_midn;
   Double_t        blob_recoil_E_tracker_mu;
   Double_t        blob_recoil_E_tracker_other;
   Double_t        blob_recoil_E_tracker_p;
   Double_t        blob_recoil_E_tracker_xtalk;
   Double_t        blob_recoil_E_xtalk;
   Double_t        blob_vtx_E;
   Double_t        blob_vtx_E_ecal;
   Double_t        blob_vtx_E_ecal_em;
   Double_t        blob_vtx_E_ecal_highn;
   Double_t        blob_vtx_E_ecal_lown;
   Double_t        blob_vtx_E_ecal_meson;
   Double_t        blob_vtx_E_ecal_midn;
   Double_t        blob_vtx_E_ecal_mu;
   Double_t        blob_vtx_E_ecal_other;
   Double_t        blob_vtx_E_ecal_p;
   Double_t        blob_vtx_E_ecal_xtalk;
   Double_t        blob_vtx_E_em;
   Double_t        blob_vtx_E_hcal;
   Double_t        blob_vtx_E_hcal_em;
   Double_t        blob_vtx_E_hcal_highn;
   Double_t        blob_vtx_E_hcal_lown;
   Double_t        blob_vtx_E_hcal_meson;
   Double_t        blob_vtx_E_hcal_midn;
   Double_t        blob_vtx_E_hcal_mu;
   Double_t        blob_vtx_E_hcal_other;
   Double_t        blob_vtx_E_hcal_p;
   Double_t        blob_vtx_E_hcal_xtalk;
   Double_t        blob_vtx_E_highn;
   Double_t        blob_vtx_E_lown;
   Double_t        blob_vtx_E_meson;
   Double_t        blob_vtx_E_midn;
   Double_t        blob_vtx_E_mu;
   Double_t        blob_vtx_E_nucl;
   Double_t        blob_vtx_E_nucl_em;
   Double_t        blob_vtx_E_nucl_highn;
   Double_t        blob_vtx_E_nucl_lown;
   Double_t        blob_vtx_E_nucl_meson;
   Double_t        blob_vtx_E_nucl_midn;
   Double_t        blob_vtx_E_nucl_mu;
   Double_t        blob_vtx_E_nucl_other;
   Double_t        blob_vtx_E_nucl_p;
   Double_t        blob_vtx_E_nucl_xtalk;
   Double_t        blob_vtx_E_od;
   Double_t        blob_vtx_E_od_em;
   Double_t        blob_vtx_E_od_highn;
   Double_t        blob_vtx_E_od_lown;
   Double_t        blob_vtx_E_od_meson;
   Double_t        blob_vtx_E_od_midn;
   Double_t        blob_vtx_E_od_mu;
   Double_t        blob_vtx_E_od_other;
   Double_t        blob_vtx_E_od_p;
   Double_t        blob_vtx_E_od_xtalk;
   Double_t        blob_vtx_E_other;
   Double_t        blob_vtx_E_p;
   Double_t        blob_vtx_E_tracker;
   Double_t        blob_vtx_E_tracker_em;
   Double_t        blob_vtx_E_tracker_highn;
   Double_t        blob_vtx_E_tracker_lown;
   Double_t        blob_vtx_E_tracker_meson;
   Double_t        blob_vtx_E_tracker_midn;
   Double_t        blob_vtx_E_tracker_mu;
   Double_t        blob_vtx_E_tracker_other;
   Double_t        blob_vtx_E_tracker_p;
   Double_t        blob_vtx_E_tracker_xtalk;
   Double_t        blob_vtx_E_xtalk;
   Double_t        dis_id_energy;
   Double_t        energy_from_mc;
   Double_t        energy_from_mc_fraction;
   Double_t        energy_from_mc_fraction_of_highest;
   Double_t        muon_iso_blobs_energy;
   Double_t        muon_minerva_trk_chi2PerDoF;
   Double_t        muon_phi;
   Double_t        muon_theta;
   Double_t        muon_thetaX;
   Double_t        muon_thetaY;
   Double_t        muon_trackVertexTime;
   Double_t        nonvtx_iso_blobs_energy;
   Double_t        nonvtx_iso_blobs_energy_all;
   Double_t        numi_bpm1;
   Double_t        numi_bpm2;
   Double_t        numi_bpm3;
   Double_t        numi_bpm4;
   Double_t        numi_bpm5;
   Double_t        numi_bpm6;
   Double_t        numi_horn_curr;
   Double_t        numi_pot;
   Double_t        numi_tor101;
   Double_t        numi_tortgt;
   Double_t        numi_tr101d;
   Double_t        numi_trtgtd;
   Double_t        numi_x;
   Double_t        numi_x_width;
   Double_t        numi_y;
   Double_t        numi_y_width;
   Double_t        part_response_recoil_em_id;
   Double_t        part_response_recoil_em_id_err;
   Double_t        part_response_recoil_em_od;
   Double_t        part_response_recoil_em_od_err;
   Double_t        part_response_recoil_high_neutron_id;
   Double_t        part_response_recoil_high_neutron_id_err;
   Double_t        part_response_recoil_high_neutron_od;
   Double_t        part_response_recoil_high_neutron_od_err;
   Double_t        part_response_recoil_high_proton_id;
   Double_t        part_response_recoil_high_proton_id_err;
   Double_t        part_response_recoil_high_proton_od;
   Double_t        part_response_recoil_high_proton_od_err;
   Double_t        part_response_recoil_low_neutron_id;
   Double_t        part_response_recoil_low_neutron_id_err;
   Double_t        part_response_recoil_low_neutron_od;
   Double_t        part_response_recoil_low_neutron_od_err;
   Double_t        part_response_recoil_low_proton_id;
   Double_t        part_response_recoil_low_proton_id_err;
   Double_t        part_response_recoil_low_proton_od;
   Double_t        part_response_recoil_low_proton_od_err;
   Double_t        part_response_recoil_meson_id;
   Double_t        part_response_recoil_meson_id_err;
   Double_t        part_response_recoil_meson_od;
   Double_t        part_response_recoil_meson_od_err;
   Double_t        part_response_recoil_mid_neutron_id;
   Double_t        part_response_recoil_mid_neutron_id_err;
   Double_t        part_response_recoil_mid_neutron_od;
   Double_t        part_response_recoil_mid_neutron_od_err;
   Double_t        part_response_recoil_mid_proton_id;
   Double_t        part_response_recoil_mid_proton_id_err;
   Double_t        part_response_recoil_mid_proton_od;
   Double_t        part_response_recoil_mid_proton_od_err;
   Double_t        part_response_recoil_muon_id;
   Double_t        part_response_recoil_muon_id_err;
   Double_t        part_response_recoil_muon_od;
   Double_t        part_response_recoil_muon_od_err;
   Double_t        part_response_recoil_other_id;
   Double_t        part_response_recoil_other_id_err;
   Double_t        part_response_recoil_other_od;
   Double_t        part_response_recoil_other_od_err;
   Double_t        part_response_recoil_proton_id;
   Double_t        part_response_recoil_proton_id_err;
   Double_t        part_response_recoil_proton_od;
   Double_t        part_response_recoil_proton_od_err;
   Double_t        part_response_recoil_xtalk_id;
   Double_t        part_response_recoil_xtalk_id_err;
   Double_t        part_response_recoil_xtalk_od;
   Double_t        part_response_recoil_xtalk_od_err;
   Double_t        phys_energy_dispersed;
   Double_t        phys_energy_in_road_downstream;
   Double_t        phys_energy_in_road_upstream;
   Double_t        phys_energy_unattached;
   Double_t        prim_vtx_smallest_opening_angle;
   Double_t        proton_track_endx;
   Double_t        proton_track_endy;
   Double_t        proton_track_endz;
   Double_t        proton_track_length;
   Double_t        recoil_energy_nonmuon_nonvtx0mm;
   Double_t        recoil_energy_nonmuon_nonvtx100mm;
   Double_t        recoil_energy_nonmuon_nonvtx150mm;
   Double_t        recoil_energy_nonmuon_nonvtx200mm;
   Double_t        recoil_energy_nonmuon_nonvtx250mm;
   Double_t        recoil_energy_nonmuon_nonvtx300mm;
   Double_t        recoil_energy_nonmuon_nonvtx50mm;
   Double_t        recoil_energy_nonmuon_vtx0mm;
   Double_t        recoil_energy_nonmuon_vtx100mm;
   Double_t        recoil_energy_nonmuon_vtx150mm;
   Double_t        recoil_energy_nonmuon_vtx200mm;
   Double_t        recoil_energy_nonmuon_vtx250mm;
   Double_t        recoil_energy_nonmuon_vtx300mm;
   Double_t        recoil_energy_nonmuon_vtx50mm;
   Double_t        vtx_blobs_energy;
   Double_t        vtx_iso_blobs_energy_outside_radius;
   Int_t           _sz;
   //Int_t           [1];   //[_sz]
   Int_t           ANN_segments[2];
   Int_t           ANN_vtx_modules_sz;
   Int_t           ANN_vtx_modules[1];   //[ANN_vtx_modules_sz]
   Int_t           ANN_vtx_planes_sz;
   Int_t           ANN_vtx_planes[1];   //[ANN_vtx_planes_sz]
   Int_t           VetoWall_PMTStatusMAP[24];
   Int_t           VetoWall_sixPush_paddle_wall1_sz;
   Int_t           VetoWall_sixPush_paddle_wall1[2];   //[VetoWall_sixPush_paddle_wall1_sz]
   Int_t           VetoWall_sixPush_paddle_wall2_sz;
   Int_t           VetoWall_sixPush_paddle_wall2[2];   //[VetoWall_sixPush_paddle_wall2_sz]
   Int_t           all_event_start_vertex_fv_minos_match_sz;
   Int_t           all_event_start_vertex_fv_minos_match[1];   //[all_event_start_vertex_fv_minos_match_sz]
   Int_t           clusters_found_at_end_proton_prong_sz;
   Int_t           clusters_found_at_end_proton_prong[4];   //[clusters_found_at_end_proton_prong_sz]
   Int_t           event_in_time_vertex_types_sz;
   Int_t           event_in_time_vertex_types[9];   //[event_in_time_vertex_types_sz]
   Int_t           event_track_nhits_sz;
   Int_t           event_track_nhits[8];   //[event_track_nhits_sz]
   Int_t           event_vertex_types_sz;
   Int_t           event_vertex_types[13];   //[event_vertex_types_sz]
   Int_t           improved_michel_in_vertex_point_sz;
   Int_t           improved_michel_in_vertex_point[5];   //[improved_michel_in_vertex_point_sz]
   Int_t           improved_michel_match_vec_sz;
   Int_t           improved_michel_match_vec[5];   //[improved_michel_match_vec_sz]
   Int_t           improved_michel_matched_pdg_sz;
   Int_t           improved_michel_matched_pdg[5];   //[improved_michel_matched_pdg_sz]
   Int_t           improved_michel_matched_primary_pdg_sz;
   Int_t           improved_michel_matched_primary_pdg[5];   //[improved_michel_matched_primary_pdg_sz]
   Int_t           improved_michel_ndigits_sz;
   Int_t           improved_michel_ndigits[5];   //[improved_michel_ndigits_sz]
   Int_t           improved_michel_vertex_type_sz;
   Int_t           improved_michel_vertex_type[5];   //[improved_michel_vertex_type_sz]
   Int_t           improved_michel_view_vec_sz;
   Int_t           improved_michel_view_vec[5];   //[improved_michel_view_vec_sz]
   Int_t           latticeEnergyIndices[26416];   //[n_indices]
   //Int_t           latticeEnergyIndices_new[23876];   //[n_indices]
   Int_t           nonvtx_iso_blobs_n_hits_in_prong_sz;
   Int_t           nonvtx_iso_blobs_n_hits_in_prong[9];   //[nonvtx_iso_blobs_n_hits_in_prong_sz]
   Int_t           nonvtx_iso_blobs_particle_pdg_in_prong_sz;
   Int_t           nonvtx_iso_blobs_particle_pdg_in_prong[9];   //[nonvtx_iso_blobs_particle_pdg_in_prong_sz]
   Int_t           nonvtx_iso_blobs_primary_particle_pdg_in_prong_sz;
   Int_t           nonvtx_iso_blobs_primary_particle_pdg_in_prong[9];   //[nonvtx_iso_blobs_primary_particle_pdg_in_prong_sz]
   Int_t           number_clusters_at_end_proton_prong_sz;
   Int_t           number_clusters_at_end_proton_prong[4];   //[number_clusters_at_end_proton_prong_sz]
   Int_t           recoil_lower_time_limit_sz;
   Int_t           recoil_lower_time_limit[700];   //[recoil_lower_time_limit_sz]
   Int_t           recoil_upper_time_limit_sz;
   Int_t           recoil_upper_time_limit[700];   //[recoil_upper_time_limit_sz]
   Int_t           sec_protons_prong_PDG_sz;
   Int_t           sec_protons_prong_PDG[3];   //[sec_protons_prong_PDG_sz]
   Int_t           sec_protons_prong_traj_ID_sz;
   Int_t           sec_protons_prong_traj_ID[3];   //[sec_protons_prong_traj_ID_sz]
   //Double_t        [1];   //[_sz]
   Double_t        ANN_plane_probs[2];
   Double_t        VetoWall_muon_extrapVetoXY[4];
   Int_t           all_event_start_vertex_time_sz;
   Double_t        all_event_start_vertex_time[5];   //[all_event_start_vertex_time_sz]
   Int_t           all_event_start_vertex_time_minos_match_sz;
   Double_t        all_event_start_vertex_time_minos_match[1];   //[all_event_start_vertex_time_minos_match_sz]
   Int_t           calibE_clusters_at_end_proton_prong_sz;
   Double_t        calibE_clusters_at_end_proton_prong[4];   //[calibE_clusters_at_end_proton_prong_sz]
   Int_t           clusters_found_at_end_proton_prong_max_distance_sz;
   Double_t        clusters_found_at_end_proton_prong_max_distance[4];   //[clusters_found_at_end_proton_prong_max_distance_sz]
   Int_t           event_extra_track_PID_sz;
   Double_t        event_extra_track_PID[3];   //[event_extra_track_PID_sz]
   Int_t           event_in_time_tracks_energy_sz;
   Double_t        event_in_time_tracks_energy[7];   //[event_in_time_tracks_energy_sz]
   Int_t           event_track_hit_energy_sz;
   Double_t        event_track_hit_energy[774];   //[event_track_hit_energy_sz]
   Int_t           event_track_hit_time_sz;
   Double_t        event_track_hit_time[774];   //[event_track_hit_time_sz]
   Int_t           event_track_time_diff_sz;
   Double_t        event_track_time_diff[8];   //[event_track_time_diff_sz]
   Int_t           event_tracks_energy_sz;
   Double_t        event_tracks_energy[8];   //[event_tracks_energy_sz]
   Int_t           event_vertex_time_diff_sz;
   Double_t        event_vertex_time_diff[13];   //[event_vertex_time_diff_sz]
   Int_t           improved_michel_data_energy_fraction_sz;
   Double_t        improved_michel_data_energy_fraction[5];   //[improved_michel_data_energy_fraction_sz]
   Int_t           improved_michel_dist_vec_sz;
   Double_t        improved_michel_dist_vec[5];   //[improved_michel_dist_vec_sz]
   Int_t           improved_michel_ecalo_vec_sz;
   Double_t        improved_michel_ecalo_vec[5];   //[improved_michel_ecalo_vec_sz]
   Int_t           improved_michel_evis_vec_sz;
   Double_t        improved_michel_evis_vec[5];   //[improved_michel_evis_vec_sz]
   Int_t           improved_michel_hit_charges_sz;
   Double_t        improved_michel_hit_charges[39];   //[improved_michel_hit_charges_sz]
   Int_t           improved_michel_hit_time_diff_cluster_sz;
   Double_t        improved_michel_hit_time_diff_cluster[39];   //[improved_michel_hit_time_diff_cluster_sz]
   Int_t           improved_michel_hit_time_diff_vtx_sz;
   Double_t        improved_michel_hit_time_diff_vtx[39];   //[improved_michel_hit_time_diff_vtx_sz]
   Int_t           improved_michel_hit_times_sz;
   Double_t        improved_michel_hit_times[39];   //[improved_michel_hit_times_sz]
   Int_t           improved_michel_matched_energy_fraction_sz;
   Double_t        improved_michel_matched_energy_fraction[5];   //[improved_michel_matched_energy_fraction_sz]
   Int_t           improved_michel_tdiff_vec_sz;
   Double_t        improved_michel_tdiff_vec[5];   //[improved_michel_tdiff_vec_sz]
   Int_t           improved_michel_tvec_sz;
   Double_t        improved_michel_tvec[5];   //[improved_michel_tvec_sz]
   Int_t           improved_michel_uvec_sz;
   Double_t        improved_michel_uvec[5];   //[improved_michel_uvec_sz]
   Int_t           improved_michel_vvec_sz;
   Double_t        improved_michel_vvec[5];   //[improved_michel_vvec_sz]
   Int_t           improved_michel_xvec_sz;
   Double_t        improved_michel_xvec[5];   //[improved_michel_xvec_sz]
   Int_t           improved_michel_yvec_sz;
   Double_t        improved_michel_yvec[5];   //[improved_michel_yvec_sz]
   Int_t           improved_michel_zvec_sz;
   Double_t        improved_michel_zvec[5];   //[improved_michel_zvec_sz]
   Double_t        latticeNormEnergySums[26416];   //[n_indices]
//   Double_t        latticeNormEnergySums_new[23876];   //[n_indices]
   Double_t        latticeRelativeTimes[26416];   //[n_indices]
//   Double_t        latticeRelativeTimes_new[23876];   //[n_indices]
   Int_t           muon_thetaX_allNodes_sz;
   Double_t        muon_thetaX_allNodes[200];   //[muon_thetaX_allNodes_sz]
   Int_t           muon_thetaY_allNodes_sz;
   Double_t        muon_thetaY_allNodes[200];   //[muon_thetaY_allNodes_sz]
   Int_t           muon_theta_allNodes_sz;
   Double_t        muon_theta_allNodes[200];   //[muon_theta_allNodes_sz]
   Int_t           nonvtx_iso_blobs_data_energy_fraction_in_prong_sz;
   Double_t        nonvtx_iso_blobs_data_energy_fraction_in_prong[9];   //[nonvtx_iso_blobs_data_energy_fraction_in_prong_sz]
   Int_t           nonvtx_iso_blobs_distance_in_prong_sz;
   Double_t        nonvtx_iso_blobs_distance_in_prong[9];   //[nonvtx_iso_blobs_distance_in_prong_sz]
   Int_t           nonvtx_iso_blobs_earliest_hit_time_in_prong_sz;
   Double_t        nonvtx_iso_blobs_earliest_hit_time_in_prong[9];   //[nonvtx_iso_blobs_earliest_hit_time_in_prong_sz]
   Int_t           nonvtx_iso_blobs_energy_in_prong_sz;
   Double_t        nonvtx_iso_blobs_energy_in_prong[9];   //[nonvtx_iso_blobs_energy_in_prong_sz]
   Int_t           nonvtx_iso_blobs_highest_hit_energy_in_prong_sz;
   Double_t        nonvtx_iso_blobs_highest_hit_energy_in_prong[9];   //[nonvtx_iso_blobs_highest_hit_energy_in_prong_sz]
   Int_t           nonvtx_iso_blobs_highest_module_u_in_prong_sz;
   Double_t        nonvtx_iso_blobs_highest_module_u_in_prong[9];   //[nonvtx_iso_blobs_highest_module_u_in_prong_sz]
   Int_t           nonvtx_iso_blobs_highest_module_v_in_prong_sz;
   Double_t        nonvtx_iso_blobs_highest_module_v_in_prong[9];   //[nonvtx_iso_blobs_highest_module_v_in_prong_sz]
   Int_t           nonvtx_iso_blobs_highest_module_x_in_prong_sz;
   Double_t        nonvtx_iso_blobs_highest_module_x_in_prong[9];   //[nonvtx_iso_blobs_highest_module_x_in_prong_sz]
   Int_t           nonvtx_iso_blobs_latest_hit_time_in_prong_sz;
   Double_t        nonvtx_iso_blobs_latest_hit_time_in_prong[9];   //[nonvtx_iso_blobs_latest_hit_time_in_prong_sz]
   Int_t           nonvtx_iso_blobs_lowest_module_u_in_prong_sz;
   Double_t        nonvtx_iso_blobs_lowest_module_u_in_prong[9];   //[nonvtx_iso_blobs_lowest_module_u_in_prong_sz]
   Int_t           nonvtx_iso_blobs_lowest_module_v_in_prong_sz;
   Double_t        nonvtx_iso_blobs_lowest_module_v_in_prong[9];   //[nonvtx_iso_blobs_lowest_module_v_in_prong_sz]
   Int_t           nonvtx_iso_blobs_lowest_module_x_in_prong_sz;
   Double_t        nonvtx_iso_blobs_lowest_module_x_in_prong[9];   //[nonvtx_iso_blobs_lowest_module_x_in_prong_sz]
   Int_t           nonvtx_iso_blobs_matched_energy_fraction_in_prong_sz;
   Double_t        nonvtx_iso_blobs_matched_energy_fraction_in_prong[9];   //[nonvtx_iso_blobs_matched_energy_fraction_in_prong_sz]
   Int_t           nonvtx_iso_blobs_start_position_x_in_prong_sz;
   Double_t        nonvtx_iso_blobs_start_position_x_in_prong[9];   //[nonvtx_iso_blobs_start_position_x_in_prong_sz]
   Int_t           nonvtx_iso_blobs_start_position_y_in_prong_sz;
   Double_t        nonvtx_iso_blobs_start_position_y_in_prong[9];   //[nonvtx_iso_blobs_start_position_y_in_prong_sz]
   Int_t           nonvtx_iso_blobs_start_position_z_in_prong_sz;
   Double_t        nonvtx_iso_blobs_start_position_z_in_prong[9];   //[nonvtx_iso_blobs_start_position_z_in_prong_sz]
   Int_t           nonvtx_iso_blobs_time_difference_in_prong_sz;
   Double_t        nonvtx_iso_blobs_time_difference_in_prong[9];   //[nonvtx_iso_blobs_time_difference_in_prong_sz]
   Int_t           nonvtx_iso_blobs_time_in_prong_sz;
   Double_t        nonvtx_iso_blobs_time_in_prong[9];   //[nonvtx_iso_blobs_time_in_prong_sz]
   Double_t        proton_prong_4p[4];
   Double_t        proton_prong_tpos[4];
   Int_t           proton_prong_tpos_t_sz;
   Double_t        proton_prong_tpos_t[3];   //[proton_prong_tpos_t_sz]
   Int_t           proton_prong_tpos_x_sz;
   Double_t        proton_prong_tpos_x[3];   //[proton_prong_tpos_x_sz]
   Int_t           proton_prong_tpos_y_sz;
   Double_t        proton_prong_tpos_y[3];   //[proton_prong_tpos_y_sz]
   Int_t           proton_prong_tpos_z_sz;
   Double_t        proton_prong_tpos_z[3];   //[proton_prong_tpos_z_sz]
   Int_t           recoil_data_fraction_sz;
   Double_t        recoil_data_fraction[700];   //[recoil_data_fraction_sz]
   Int_t           recoil_summed_energy_sz;
   Double_t        recoil_summed_energy[700];   //[recoil_summed_energy_sz]
   Int_t           recoil_summed_energy_edge_sz;
   Double_t        recoil_summed_energy_edge[700];   //[recoil_summed_energy_edge_sz]
   Int_t           seco_protons_prong_4p_E_sz;
   Double_t        seco_protons_prong_4p_E[3];   //[seco_protons_prong_4p_E_sz]
   Int_t           seco_protons_prong_4p_px_sz;
   Double_t        seco_protons_prong_4p_px[3];   //[seco_protons_prong_4p_px_sz]
   Int_t           seco_protons_prong_4p_py_sz;
   Double_t        seco_protons_prong_4p_py[3];   //[seco_protons_prong_4p_py_sz]
   Int_t           seco_protons_prong_4p_pz_sz;
   Double_t        seco_protons_prong_4p_pz[3];   //[seco_protons_prong_4p_pz_sz]
   Int_t           slice_hit_energy_sz;
   Double_t        slice_hit_energy[2640];   //[slice_hit_energy_sz]
   Int_t           slice_hit_time_sz;
   Double_t        slice_hit_time[2640];   //[slice_hit_time_sz]
   Int_t           visE_clusters_at_end_proton_prong_sz;
   Double_t        visE_clusters_at_end_proton_prong[4];   //[visE_clusters_at_end_proton_prong_sz]
   Double_t        vtx_blob_radius;
   Int_t           vtx_blobs_iso_distance_in_prong_sz;
   Double_t        vtx_blobs_iso_distance_in_prong[1];   //[vtx_blobs_iso_distance_in_prong_sz]
   Int_t           vtx_blobs_iso_energy_clusters_outside_radius_in_prong_sz;
   Double_t        vtx_blobs_iso_energy_clusters_outside_radius_in_prong[1];   //[vtx_blobs_iso_energy_clusters_outside_radius_in_prong_sz]
   Int_t           vtx_blobs_iso_energy_in_prong_sz;
   Double_t        vtx_blobs_iso_energy_in_prong[1];   //[vtx_blobs_iso_energy_in_prong_sz]
   Int_t           vtx_blobs_vtx_distance_in_prong_sz;
   Double_t        vtx_blobs_vtx_distance_in_prong[1];   //[vtx_blobs_vtx_distance_in_prong_sz]
   Int_t           vtx_blobs_vtx_energy_in_prong_sz;
   Double_t        vtx_blobs_vtx_energy_in_prong[1];   //[vtx_blobs_vtx_energy_in_prong_sz]
   Bool_t          truth_has_physics_event;
   Bool_t          truth_pass_MasterAnaDev;
   Bool_t          truth_is_fiducial;
   Bool_t          truth_reco_has_muon;
   Bool_t          truth_reco_has_int_vtx;
   //Int_t           truth_;
   Int_t           truth_hadronReweightNPaths;
   Int_t           truth_hadronReweightNPoints;
   Int_t           truth_in_fiducial_area;
   Int_t           truth_reco_has_muon_charge;
   Int_t           truth_reco_has_single_proton;
   Int_t           truth_reco_is_fiducial;
   Int_t           truth_reco_is_minos_match;
   Int_t           truth_reco_muon_is_minos_match_stub;
   Int_t           truth_reco_muon_is_minos_match_track;
   Int_t           truth_reco_pass_MasterAnaDev_precuts;
   Int_t           truth_targetID;
   Int_t           truth_targetZ;
   Int_t           truth_target_code;
   Int_t           truth_vtx_module;
   Int_t           truth_vtx_plane;
   //Double_t        truth_;
   Double_t        truth_muon_theta;
   Double_t        truth_target_dist_to_division;
   Double_t        truth_target_zDist;
   Int_t           truth__sz;
   //Int_t           truth_[1];   //[truth__sz]
   Int_t           truth_hadronReweightID_sz;
   Int_t           truth_hadronReweightID[120];   //[truth_hadronReweightID_sz]
   Int_t           truth_hadronReweightIntCode_sz;
   Int_t           truth_hadronReweightIntCode[120];   //[truth_hadronReweightIntCode_sz]
   Int_t           truth_hadronReweightIntCodePerSegment_sz;
   Int_t           truth_hadronReweightIntCodePerSegment[871];   //[truth_hadronReweightIntCodePerSegment_sz]
   Int_t           truth_hadronReweightNTrajPoints_sz;
   Int_t           truth_hadronReweightNTrajPoints[120];   //[truth_hadronReweightNTrajPoints_sz]
   Int_t           truth_hadronReweightNTrajPointsSaved_sz;
   Int_t           truth_hadronReweightNTrajPointsSaved[120];   //[truth_hadronReweightNTrajPointsSaved_sz]
   Int_t           truth_hadronReweightNuke_sz;
   Int_t           truth_hadronReweightNuke[871];   //[truth_hadronReweightNuke_sz]
   Int_t           truth_hadronReweightPDG_sz;
   Int_t           truth_hadronReweightPDG[120];   //[truth_hadronReweightPDG_sz]
   Int_t           truth_hadronReweightParentID_sz;
   Int_t           truth_hadronReweightParentID[120];   //[truth_hadronReweightParentID_sz]
   Int_t           truth_hadronReweightTrackID_sz;
   Int_t           truth_hadronReweightTrackID[871];   //[truth_hadronReweightTrackID_sz]
   Int_t           truth_hadronReweightTrajPointFlag_sz;
   Int_t           truth_hadronReweightTrajPointFlag[120];   //[truth_hadronReweightTrajPointFlag_sz]
   //Double_t        truth_[1];   //[truth__sz]
   Int_t           genie_wgt_n_shifts;
   Double_t        truth_genie_wgt_AGKYxF1pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_AhtBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_BhtBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_CCQEPauliSupViaKF[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_CV1uBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_CV2uBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_EtaNCEL[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrAbs_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrAbs_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrCEx_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrCEx_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrElas_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrElas_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrInel_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrInel_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrPiProd_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_FrPiProd_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MFP_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MFP_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MaCCQE[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MaCCQEshape[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MaNCEL[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MaRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_MvRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_NormCCQE[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_NormCCRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_NormDISCC[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_NormNCRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_RDecBR1gamma[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_Rvn1pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_Rvn2pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_Rvp1pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_Rvp2pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_Theta_Delta2Npi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_VecFFCCQEshape[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
   Double_t        truth_genie_wgt_shifts[7];   //[genie_wgt_n_shifts]
   Int_t           truth_hadronReweightColumnarDensity_sz;
   Double_t        truth_hadronReweightColumnarDensity[871];   //[truth_hadronReweightColumnarDensity_sz]
   Int_t           truth_hadronReweightFinalE_sz;
   Double_t        truth_hadronReweightFinalE[871];   //[truth_hadronReweightFinalE_sz]
   Int_t           truth_hadronReweightFinalSigmaE_sz;
   Double_t        truth_hadronReweightFinalSigmaE[871];   //[truth_hadronReweightFinalSigmaE_sz]
   Int_t           truth_hadronReweightInitialE_sz;
   Double_t        truth_hadronReweightInitialE[871];   //[truth_hadronReweightInitialE_sz]
   Int_t           truth_hadronReweightInitialSigmaE_sz;
   Double_t        truth_hadronReweightInitialSigmaE[871];   //[truth_hadronReweightInitialSigmaE_sz]
   Int_t           truth_hadronReweightPosX_sz;
   Double_t        truth_hadronReweightPosX[871];   //[truth_hadronReweightPosX_sz]
   Int_t           truth_hadronReweightPosY_sz;
   Double_t        truth_hadronReweightPosY[871];   //[truth_hadronReweightPosY_sz]
   Int_t           truth_hadronReweightPosZ_sz;
   Double_t        truth_hadronReweightPosZ[871];   //[truth_hadronReweightPosZ_sz]
   Int_t           truth_hadronReweightTimeDelta_sz;
   Double_t        truth_hadronReweightTimeDelta[120];   //[truth_hadronReweightTimeDelta_sz]
   Int_t           MasterAnaDev_nuFlavor;
   Int_t           MasterAnaDev_nuHelicity;
   Int_t           MasterAnaDev_intCurrent;
   Int_t           MasterAnaDev_intType;
   Double_t        MasterAnaDev_E;
   Double_t        MasterAnaDev_Q2;
   Double_t        MasterAnaDev_x;
   Double_t        MasterAnaDev_y;
   Double_t        MasterAnaDev_W;
   Double_t        MasterAnaDev_score;
   Double_t        MasterAnaDev_leptonE[4];
   Double_t        MasterAnaDev_vtx[4];
   Bool_t          MasterAnaDev_minos_trk_is_contained;
   Bool_t          MasterAnaDev_minos_trk_is_ok;
   Bool_t          MasterAnaDev_minos_used_range;
   Bool_t          MasterAnaDev_minos_used_curvature;
   Int_t           MasterAnaDev_EvtHasNBlobIncTracks;
   Int_t           MasterAnaDev_EvtHasNBlobTracks;
   Int_t           MasterAnaDev_in_fiducial_area;
   Int_t           MasterAnaDev_minos_trk_end_plane;
   Int_t           MasterAnaDev_minos_trk_quality;
   Int_t           MasterAnaDev_proton_patternRec;
   Int_t           MasterAnaDev_proton_prongType;
   Int_t           MasterAnaDev_r_minos_trk_vtx_plane;
   Int_t           MasterAnaDev_t_minos_trk_numFSMuons;
   Int_t           MasterAnaDev_t_minos_trk_primFSLeptonPDG;
   Int_t           MasterAnaDev_targetID;
   Int_t           MasterAnaDev_targetZ;
   Int_t           MasterAnaDev_target_code;
   Int_t           MasterAnaDev_vtx_module;
   Int_t           MasterAnaDev_vtx_plane;
   Double_t        MasterAnaDev_Q2_CCQE;
   Double_t        MasterAnaDev_Q2_Inclusive;
   Double_t        MasterAnaDev_Q2_wide_window;
   Double_t        MasterAnaDev_enu_muon;
   Double_t        MasterAnaDev_enu_proton;
   Double_t        MasterAnaDev_minos_trk_bave;
   Double_t        MasterAnaDev_minos_trk_chi2;
   Double_t        MasterAnaDev_minos_trk_end_u;
   Double_t        MasterAnaDev_minos_trk_end_v;
   Double_t        MasterAnaDev_minos_trk_end_x;
   Double_t        MasterAnaDev_minos_trk_end_y;
   Double_t        MasterAnaDev_minos_trk_end_z;
   Double_t        MasterAnaDev_minos_trk_eqp;
   Double_t        MasterAnaDev_minos_trk_eqp_qp;
   Double_t        MasterAnaDev_minos_trk_fit_pass;
   Double_t        MasterAnaDev_minos_trk_ndf;
   Double_t        MasterAnaDev_minos_trk_p;
   Double_t        MasterAnaDev_minos_trk_p_curvature;
   Double_t        MasterAnaDev_minos_trk_p_range;
   Double_t        MasterAnaDev_minos_trk_qp;
   Double_t        MasterAnaDev_minos_trk_vtx_x;
   Double_t        MasterAnaDev_minos_trk_vtx_y;
   Double_t        MasterAnaDev_minos_trk_vtx_z;
   Double_t        MasterAnaDev_muon_E;
   Double_t        MasterAnaDev_muon_P;
   Double_t        MasterAnaDev_muon_T;
   Double_t        MasterAnaDev_muon_score;
   Double_t        MasterAnaDev_muon_theta;
   Double_t        MasterAnaDev_pion_score;
   Double_t        MasterAnaDev_pion_score1;
   Double_t        MasterAnaDev_pion_score2;
   Double_t        MasterAnaDev_proton_E_BetheBloch_biasDown;
   Double_t        MasterAnaDev_proton_E_BetheBloch_biasUp;
   Double_t        MasterAnaDev_proton_E_Birks_bias;
   Double_t        MasterAnaDev_proton_E_MEU_biasDown;
   Double_t        MasterAnaDev_proton_E_MEU_biasUp;
   Double_t        MasterAnaDev_proton_E_Mass_biasDown;
   Double_t        MasterAnaDev_proton_E_Mass_biasUp;
   Double_t        MasterAnaDev_proton_E_fromdEdx;
   Double_t        MasterAnaDev_proton_P_fromdEdx;
   Double_t        MasterAnaDev_proton_Px_fromdEdx;
   Double_t        MasterAnaDev_proton_Py_fromdEdx;
   Double_t        MasterAnaDev_proton_Pz_fromdEdx;
   Double_t        MasterAnaDev_proton_T_fromdEdx;
   Double_t        MasterAnaDev_proton_calib_energy;
   Double_t        MasterAnaDev_proton_endPointX;
   Double_t        MasterAnaDev_proton_endPointY;
   Double_t        MasterAnaDev_proton_endPointZ;
   Double_t        MasterAnaDev_proton_phi;
   Double_t        MasterAnaDev_proton_score;
   Double_t        MasterAnaDev_proton_score1;
   Double_t        MasterAnaDev_proton_score1_BetheBloch_biasDown;
   Double_t        MasterAnaDev_proton_score1_BetheBloch_biasUp;
   Double_t        MasterAnaDev_proton_score1_Birks_bias;
   Double_t        MasterAnaDev_proton_score1_MEU_biasDown;
   Double_t        MasterAnaDev_proton_score1_MEU_biasUp;
   Double_t        MasterAnaDev_proton_score1_Mass_biasDown;
   Double_t        MasterAnaDev_proton_score1_Mass_biasUp;
   Double_t        MasterAnaDev_proton_score2;
   Double_t        MasterAnaDev_proton_startPointX;
   Double_t        MasterAnaDev_proton_startPointY;
   Double_t        MasterAnaDev_proton_startPointZ;
   Double_t        MasterAnaDev_proton_theta;
   Double_t        MasterAnaDev_proton_thetaX;
   Double_t        MasterAnaDev_proton_thetaY;
   Double_t        MasterAnaDev_proton_theta_fromdEdx;
   Double_t        MasterAnaDev_r_minos_trk_bdL;
   Double_t        MasterAnaDev_r_minos_trk_end_dcosx;
   Double_t        MasterAnaDev_r_minos_trk_end_dcosy;
   Double_t        MasterAnaDev_r_minos_trk_end_dcosz;
   Double_t        MasterAnaDev_r_minos_trk_vtx_dcosx;
   Double_t        MasterAnaDev_r_minos_trk_vtx_dcosy;
   Double_t        MasterAnaDev_r_minos_trk_vtx_dcosz;
   Double_t        MasterAnaDev_recoil_E;
   Double_t        MasterAnaDev_recoil_E_wide_window;
   Double_t        MasterAnaDev_recoil_passivecorrected;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPx;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPy;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPz;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMinosInitProjX;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMinosInitProjY;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMinosInitProjZ;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvFinalPx;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvFinalPy;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvFinalPz;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvFinalX;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvFinalY;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvFinalZ;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvInitPx;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvInitPy;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvInitPz;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvInitX;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvInitY;
   Double_t        MasterAnaDev_t_minos_trk_primFSLepMnvInitZ;
   Double_t        MasterAnaDev_target_dist_to_division;
   Double_t        MasterAnaDev_target_zDist;
   Double_t        MasterAnaDev_visible_E;
   Int_t           MasterAnaDev_Blob2DMuonDRho_order_sz;
   Int_t           MasterAnaDev_Blob2DMuonDRho_order[82];   //[MasterAnaDev_Blob2DMuonDRho_order_sz]
   Int_t           MasterAnaDev_Blob2DMuonDTheta_order_sz;
   Int_t           MasterAnaDev_Blob2DMuonDTheta_order[82];   //[MasterAnaDev_Blob2DMuonDTheta_order_sz]
   Int_t           MasterAnaDev_Blob2DPartDRho_order_sz;
   Int_t           MasterAnaDev_Blob2DPartDRho_order[82];   //[MasterAnaDev_Blob2DPartDRho_order_sz]
   Int_t           MasterAnaDev_Blob2DPartDTheta_order_sz;
   Int_t           MasterAnaDev_Blob2DPartDTheta_order[82];   //[MasterAnaDev_Blob2DPartDTheta_order_sz]
   Int_t           MasterAnaDev_Blob2DView_sz;
   Int_t           MasterAnaDev_Blob2DView[82];   //[MasterAnaDev_Blob2DView_sz]
   Int_t           MasterAnaDev_BlobAvgE_order_sz;
   Int_t           MasterAnaDev_BlobAvgE_order[82];   //[MasterAnaDev_BlobAvgE_order_sz]
   Int_t           MasterAnaDev_BlobClusID_sz;
   Int_t           MasterAnaDev_BlobClusID[92];   //[MasterAnaDev_BlobClusID_sz]
   Int_t           MasterAnaDev_BlobClusterMaxE_order_sz;
   Int_t           MasterAnaDev_BlobClusterMaxE_order[82];   //[MasterAnaDev_BlobClusterMaxE_order_sz]
   Int_t           MasterAnaDev_BlobID_sz;
   Int_t           MasterAnaDev_BlobID[82];   //[MasterAnaDev_BlobID_sz]
   Int_t           MasterAnaDev_BlobIs3D_sz;
   Int_t           MasterAnaDev_BlobIs3D[82];   //[MasterAnaDev_BlobIs3D_sz]
   Int_t           MasterAnaDev_BlobIsFiducial_sz;
   Int_t           MasterAnaDev_BlobIsFiducial[82];   //[MasterAnaDev_BlobIsFiducial_sz]
   Int_t           MasterAnaDev_BlobMCPID_sz;
   Int_t           MasterAnaDev_BlobMCPID[82];   //[MasterAnaDev_BlobMCPID_sz]
   Int_t           MasterAnaDev_BlobMCParentTrackID_sz;
   Int_t           MasterAnaDev_BlobMCParentTrackID[82];   //[MasterAnaDev_BlobMCParentTrackID_sz]
   Int_t           MasterAnaDev_BlobMCTrackID_sz;
   Int_t           MasterAnaDev_BlobMCTrackID[82];   //[MasterAnaDev_BlobMCTrackID_sz]
   Int_t           MasterAnaDev_BlobMuonDRho_order_sz;
   Int_t           MasterAnaDev_BlobMuonDRho_order[82];   //[MasterAnaDev_BlobMuonDRho_order_sz]
   Int_t           MasterAnaDev_BlobMuonDTheta_order_sz;
   Int_t           MasterAnaDev_BlobMuonDTheta_order[82];   //[MasterAnaDev_BlobMuonDTheta_order_sz]
   Int_t           MasterAnaDev_BlobNClusters_sz;
   Int_t           MasterAnaDev_BlobNClusters[82];   //[MasterAnaDev_BlobNClusters_sz]
   Int_t           MasterAnaDev_BlobNHeavyIonizingClusters_sz;
   Int_t           MasterAnaDev_BlobNHeavyIonizingClusters[82];   //[MasterAnaDev_BlobNHeavyIonizingClusters_sz]
   Int_t           MasterAnaDev_BlobNTracks_sz;
   Int_t           MasterAnaDev_BlobNTracks[82];   //[MasterAnaDev_BlobNTracks_sz]
   Int_t           MasterAnaDev_BlobPIDPerCluster_sz;
   Int_t           MasterAnaDev_BlobPIDPerCluster[1];   //[MasterAnaDev_BlobPIDPerCluster_sz]
   Int_t           MasterAnaDev_BlobParentMCPID_sz;
   Int_t           MasterAnaDev_BlobParentMCPID[82];   //[MasterAnaDev_BlobParentMCPID_sz]
   Int_t           MasterAnaDev_BlobTopMCPID_sz;
   Int_t           MasterAnaDev_BlobTopMCPID[82];   //[MasterAnaDev_BlobTopMCPID_sz]
   Int_t           MasterAnaDev_BlobTotalE_order_sz;
   Int_t           MasterAnaDev_BlobTotalE_order[82];   //[MasterAnaDev_BlobTotalE_order_sz]
   Int_t           MasterAnaDev_BlobTrackNClus_sz;
   Int_t           MasterAnaDev_BlobTrackNClus[82];   //[MasterAnaDev_BlobTrackNClus_sz]
   Int_t           MasterAnaDev_BlobTrackNNode_sz;
   Int_t           MasterAnaDev_BlobTrackNNode[82];   //[MasterAnaDev_BlobTrackNNode_sz]
   Int_t           MasterAnaDev_BlobViewPerCluster_sz;
   Int_t           MasterAnaDev_BlobViewPerCluster[417];   //[MasterAnaDev_BlobViewPerCluster_sz]
   Int_t           MasterAnaDev_BlobVtxDR_order_sz;
   Int_t           MasterAnaDev_BlobVtxDR_order[82];   //[MasterAnaDev_BlobVtxDR_order_sz]
   Int_t           MasterAnaDev_BlobVtxDZ_order_sz;
   Int_t           MasterAnaDev_BlobVtxDZ_order[1];   //[MasterAnaDev_BlobVtxDZ_order_sz]
   Int_t           MasterAnaDev_RecoPattern_sz;
   Int_t           MasterAnaDev_RecoPattern[82];   //[MasterAnaDev_RecoPattern_sz]
   Int_t           MasterAnaDev_ref_targZ[5];
   Int_t           MasterAnaDev_sec_protons_nodes_index_sz;
   Int_t           MasterAnaDev_sec_protons_nodes_index[59];   //[MasterAnaDev_sec_protons_nodes_index_sz]
   Int_t           MasterAnaDev_sec_protons_patternRec_sz;
   Int_t           MasterAnaDev_sec_protons_patternRec[3];   //[MasterAnaDev_sec_protons_patternRec_sz]
   Int_t           MasterAnaDev_sec_protons_prongType_sz;
   Int_t           MasterAnaDev_sec_protons_prongType[3];   //[MasterAnaDev_sec_protons_prongType_sz]
   Int_t           MasterAnaDev_Blob2DBeamDTPos_sz;
   Double_t        MasterAnaDev_Blob2DBeamDTPos[82];   //[MasterAnaDev_Blob2DBeamDTPos_sz]
   Int_t           MasterAnaDev_Blob2DBeamDZ_sz;
   Double_t        MasterAnaDev_Blob2DBeamDZ[82];   //[MasterAnaDev_Blob2DBeamDZ_sz]
   Int_t           MasterAnaDev_Blob2DMuonDRho_sz;
   Double_t        MasterAnaDev_Blob2DMuonDRho[82];   //[MasterAnaDev_Blob2DMuonDRho_sz]
   Int_t           MasterAnaDev_Blob2DMuonDTheta_sz;
   Double_t        MasterAnaDev_Blob2DMuonDTheta[82];   //[MasterAnaDev_Blob2DMuonDTheta_sz]
   Int_t           MasterAnaDev_Blob2DPartDRho_sz;
   Double_t        MasterAnaDev_Blob2DPartDRho[82];   //[MasterAnaDev_Blob2DPartDRho_sz]
   Int_t           MasterAnaDev_Blob2DPartDTheta_sz;
   Double_t        MasterAnaDev_Blob2DPartDTheta[82];   //[MasterAnaDev_Blob2DPartDTheta_sz]
   Int_t           MasterAnaDev_Blob2DPartDZ_sz;
   Double_t        MasterAnaDev_Blob2DPartDZ[82];   //[MasterAnaDev_Blob2DPartDZ_sz]
   Int_t           MasterAnaDev_Blob2DVtxDR_sz;
   Double_t        MasterAnaDev_Blob2DVtxDR[82];   //[MasterAnaDev_Blob2DVtxDR_sz]
   Int_t           MasterAnaDev_Blob2DVtxDTPos_sz;
   Double_t        MasterAnaDev_Blob2DVtxDTPos[82];   //[MasterAnaDev_Blob2DVtxDTPos_sz]
   Int_t           MasterAnaDev_Blob2DVtxDZ_sz;
   Double_t        MasterAnaDev_Blob2DVtxDZ[82];   //[MasterAnaDev_Blob2DVtxDZ_sz]
   Int_t           MasterAnaDev_BlobAvgE_sz;
   Double_t        MasterAnaDev_BlobAvgE[82];   //[MasterAnaDev_BlobAvgE_sz]
   Int_t           MasterAnaDev_BlobBeamDZ_sz;
   Double_t        MasterAnaDev_BlobBeamDZ[82];   //[MasterAnaDev_BlobBeamDZ_sz]
   Int_t           MasterAnaDev_BlobBegT_sz;
   Double_t        MasterAnaDev_BlobBegT[82];   //[MasterAnaDev_BlobBegT_sz]
   Int_t           MasterAnaDev_BlobBegX_sz;
   Double_t        MasterAnaDev_BlobBegX[82];   //[MasterAnaDev_BlobBegX_sz]
   Int_t           MasterAnaDev_BlobBegY_sz;
   Double_t        MasterAnaDev_BlobBegY[82];   //[MasterAnaDev_BlobBegY_sz]
   Int_t           MasterAnaDev_BlobBegZ_sz;
   Double_t        MasterAnaDev_BlobBegZ[82];   //[MasterAnaDev_BlobBegZ_sz]
   Int_t           MasterAnaDev_BlobClusterMaxE_sz;
   Double_t        MasterAnaDev_BlobClusterMaxE[82];   //[MasterAnaDev_BlobClusterMaxE_sz]
   Int_t           MasterAnaDev_BlobClusterMinE_sz;
   Double_t        MasterAnaDev_BlobClusterMinE[82];   //[MasterAnaDev_BlobClusterMinE_sz]
   Int_t           MasterAnaDev_BlobCoplanarityAngle_sz;
   Double_t        MasterAnaDev_BlobCoplanarityAngle[82];   //[MasterAnaDev_BlobCoplanarityAngle_sz]
   Int_t           MasterAnaDev_BlobEndT_sz;
   Double_t        MasterAnaDev_BlobEndT[82];   //[MasterAnaDev_BlobEndT_sz]
   Int_t           MasterAnaDev_BlobEndX_sz;
   Double_t        MasterAnaDev_BlobEndX[82];   //[MasterAnaDev_BlobEndX_sz]
   Int_t           MasterAnaDev_BlobEndY_sz;
   Double_t        MasterAnaDev_BlobEndY[82];   //[MasterAnaDev_BlobEndY_sz]
   Int_t           MasterAnaDev_BlobEndZ_sz;
   Double_t        MasterAnaDev_BlobEndZ[82];   //[MasterAnaDev_BlobEndZ_sz]
   Int_t           MasterAnaDev_BlobEnergyPerCluster_sz;
   Double_t        MasterAnaDev_BlobEnergyPerCluster[417];   //[MasterAnaDev_BlobEnergyPerCluster_sz]
   Int_t           MasterAnaDev_BlobMCTrackE_sz;
   Double_t        MasterAnaDev_BlobMCTrackE[82];   //[MasterAnaDev_BlobMCTrackE_sz]
   Int_t           MasterAnaDev_BlobMCTrackPx_sz;
   Double_t        MasterAnaDev_BlobMCTrackPx[82];   //[MasterAnaDev_BlobMCTrackPx_sz]
   Int_t           MasterAnaDev_BlobMCTrackPy_sz;
   Double_t        MasterAnaDev_BlobMCTrackPy[82];   //[MasterAnaDev_BlobMCTrackPy_sz]
   Int_t           MasterAnaDev_BlobMCTrackPz_sz;
   Double_t        MasterAnaDev_BlobMCTrackPz[82];   //[MasterAnaDev_BlobMCTrackPz_sz]
   Int_t           MasterAnaDev_BlobMCTrackT_sz;
   Double_t        MasterAnaDev_BlobMCTrackT[82];   //[MasterAnaDev_BlobMCTrackT_sz]
   Int_t           MasterAnaDev_BlobMCTrackX_sz;
   Double_t        MasterAnaDev_BlobMCTrackX[82];   //[MasterAnaDev_BlobMCTrackX_sz]
   Int_t           MasterAnaDev_BlobMCTrackY_sz;
   Double_t        MasterAnaDev_BlobMCTrackY[82];   //[MasterAnaDev_BlobMCTrackY_sz]
   Int_t           MasterAnaDev_BlobMCTrackZ_sz;
   Double_t        MasterAnaDev_BlobMCTrackZ[82];   //[MasterAnaDev_BlobMCTrackZ_sz]
   Int_t           MasterAnaDev_BlobMuonDRho_sz;
   Double_t        MasterAnaDev_BlobMuonDRho[82];   //[MasterAnaDev_BlobMuonDRho_sz]
   Int_t           MasterAnaDev_BlobMuonDTheta_sz;
   Double_t        MasterAnaDev_BlobMuonDTheta[82];   //[MasterAnaDev_BlobMuonDTheta_sz]
   Int_t           MasterAnaDev_BlobReactionPlaneAngle_sz;
   Double_t        MasterAnaDev_BlobReactionPlaneAngle[82];   //[MasterAnaDev_BlobReactionPlaneAngle_sz]
   Int_t           MasterAnaDev_BlobT_sz;
   Double_t        MasterAnaDev_BlobT[82];   //[MasterAnaDev_BlobT_sz]
   Int_t           MasterAnaDev_BlobTPos_sz;
   Double_t        MasterAnaDev_BlobTPos[82];   //[MasterAnaDev_BlobTPos_sz]
   Int_t           MasterAnaDev_BlobTPosPerCluster_sz;
   Double_t        MasterAnaDev_BlobTPosPerCluster[417];   //[MasterAnaDev_BlobTPosPerCluster_sz]
   Int_t           MasterAnaDev_BlobTimePerCluster_sz;
   Double_t        MasterAnaDev_BlobTimePerCluster[417];   //[MasterAnaDev_BlobTimePerCluster_sz]
   Int_t           MasterAnaDev_BlobTotalE_sz;
   Double_t        MasterAnaDev_BlobTotalE[82];   //[MasterAnaDev_BlobTotalE_sz]
   Int_t           MasterAnaDev_BlobTrackAx_sz;
   Double_t        MasterAnaDev_BlobTrackAx[82];   //[MasterAnaDev_BlobTrackAx_sz]
   Int_t           MasterAnaDev_BlobTrackAy_sz;
   Double_t        MasterAnaDev_BlobTrackAy[82];   //[MasterAnaDev_BlobTrackAy_sz]
   Int_t           MasterAnaDev_BlobTrackE_sz;
   Double_t        MasterAnaDev_BlobTrackE[82];   //[MasterAnaDev_BlobTrackE_sz]
   Int_t           MasterAnaDev_BlobTrackL_sz;
   Double_t        MasterAnaDev_BlobTrackL[82];   //[MasterAnaDev_BlobTrackL_sz]
   Int_t           MasterAnaDev_BlobTrackLLRPion_sz;
   Double_t        MasterAnaDev_BlobTrackLLRPion[82];   //[MasterAnaDev_BlobTrackLLRPion_sz]
   Int_t           MasterAnaDev_BlobTrackLLRProton_sz;
   Double_t        MasterAnaDev_BlobTrackLLRProton[82];   //[MasterAnaDev_BlobTrackLLRProton_sz]
   Int_t           MasterAnaDev_BlobTrackNodeEnergy_sz;
   Double_t        MasterAnaDev_BlobTrackNodeEnergy[41];   //[MasterAnaDev_BlobTrackNodeEnergy_sz]
   Int_t           MasterAnaDev_BlobTrackT_sz;
   Double_t        MasterAnaDev_BlobTrackT[82];   //[MasterAnaDev_BlobTrackT_sz]
   Int_t           MasterAnaDev_BlobTrackX_sz;
   Double_t        MasterAnaDev_BlobTrackX[82];   //[MasterAnaDev_BlobTrackX_sz]
   Int_t           MasterAnaDev_BlobTrackY_sz;
   Double_t        MasterAnaDev_BlobTrackY[82];   //[MasterAnaDev_BlobTrackY_sz]
   Int_t           MasterAnaDev_BlobTrackZ_sz;
   Double_t        MasterAnaDev_BlobTrackZ[82];   //[MasterAnaDev_BlobTrackZ_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXElectron_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXElectron[82];   //[MasterAnaDev_BlobTrackdEdXElectron_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXElectronE_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXElectronE[82];   //[MasterAnaDev_BlobTrackdEdXElectronE_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXElectronPx_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXElectronPx[82];   //[MasterAnaDev_BlobTrackdEdXElectronPx_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXElectronPy_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXElectronPy[82];   //[MasterAnaDev_BlobTrackdEdXElectronPy_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXElectronPz_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXElectronPz[82];   //[MasterAnaDev_BlobTrackdEdXElectronPz_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXPion_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXPion[82];   //[MasterAnaDev_BlobTrackdEdXPion_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXPionE_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXPionE[82];   //[MasterAnaDev_BlobTrackdEdXPionE_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXPionPx_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXPionPx[82];   //[MasterAnaDev_BlobTrackdEdXPionPx_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXPionPy_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXPionPy[82];   //[MasterAnaDev_BlobTrackdEdXPionPy_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXPionPz_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXPionPz[82];   //[MasterAnaDev_BlobTrackdEdXPionPz_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXProton_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXProton[82];   //[MasterAnaDev_BlobTrackdEdXProton_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXProtonE_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXProtonE[82];   //[MasterAnaDev_BlobTrackdEdXProtonE_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXProtonPx_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXProtonPx[82];   //[MasterAnaDev_BlobTrackdEdXProtonPx_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXProtonPy_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXProtonPy[82];   //[MasterAnaDev_BlobTrackdEdXProtonPy_sz]
   Int_t           MasterAnaDev_BlobTrackdEdXProtonPz_sz;
   Double_t        MasterAnaDev_BlobTrackdEdXProtonPz[82];   //[MasterAnaDev_BlobTrackdEdXProtonPz_sz]
   Int_t           MasterAnaDev_BlobVtxDR_sz;
   Double_t        MasterAnaDev_BlobVtxDR[82];   //[MasterAnaDev_BlobVtxDR_sz]
   Int_t           MasterAnaDev_BlobVtxDTPos_sz;
   Double_t        MasterAnaDev_BlobVtxDTPos[1];   //[MasterAnaDev_BlobVtxDTPos_sz]
   Int_t           MasterAnaDev_BlobVtxDZ_sz;
   Double_t        MasterAnaDev_BlobVtxDZ[82];   //[MasterAnaDev_BlobVtxDZ_sz]
   Int_t           MasterAnaDev_BlobX_sz;
   Double_t        MasterAnaDev_BlobX[82];   //[MasterAnaDev_BlobX_sz]
   Int_t           MasterAnaDev_BlobY_sz;
   Double_t        MasterAnaDev_BlobY[82];   //[MasterAnaDev_BlobY_sz]
   Int_t           MasterAnaDev_BlobZ_sz;
   Double_t        MasterAnaDev_BlobZ[82];   //[MasterAnaDev_BlobZ_sz]
   Int_t           MasterAnaDev_BlobZPerCluster_sz;
   Double_t        MasterAnaDev_BlobZPerCluster[417];   //[MasterAnaDev_BlobZPerCluster_sz]
   Int_t           MasterAnaDev_HadronE_sz;
   Double_t        MasterAnaDev_HadronE[4];   //[MasterAnaDev_HadronE_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Election_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Election[82];   //[MasterAnaDev_MCEnergyFrac_Election_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Muon_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Muon[82];   //[MasterAnaDev_MCEnergyFrac_Muon_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Neutron_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Neutron[82];   //[MasterAnaDev_MCEnergyFrac_Neutron_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_NonParticle_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_NonParticle[82];   //[MasterAnaDev_MCEnergyFrac_NonParticle_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Others_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Others[82];   //[MasterAnaDev_MCEnergyFrac_Others_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Photon_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Photon[82];   //[MasterAnaDev_MCEnergyFrac_Photon_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Pi0_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Pi0[82];   //[MasterAnaDev_MCEnergyFrac_Pi0_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_PiMinus_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_PiMinus[82];   //[MasterAnaDev_MCEnergyFrac_PiMinus_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_PiPlus_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_PiPlus[82];   //[MasterAnaDev_MCEnergyFrac_PiPlus_sz]
   Int_t           MasterAnaDev_MCEnergyFrac_Proton_sz;
   Double_t        MasterAnaDev_MCEnergyFrac_Proton[82];   //[MasterAnaDev_MCEnergyFrac_Proton_sz]
   Int_t           MasterAnaDev_ReconstructedHadronMass_sz;
   Double_t        MasterAnaDev_ReconstructedHadronMass[82];   //[MasterAnaDev_ReconstructedHadronMass_sz]
   Int_t           MasterAnaDev_proton_nodes_E_sz;
   Double_t        MasterAnaDev_proton_nodes_E[167];   //[MasterAnaDev_proton_nodes_E_sz]
   Int_t           MasterAnaDev_proton_nodes_nodesNormE_sz;
   Double_t        MasterAnaDev_proton_nodes_nodesNormE[167];   //[MasterAnaDev_proton_nodes_nodesNormE_sz]
   Double_t        MasterAnaDev_ref_dist_to_division[5];
   Double_t        MasterAnaDev_ref_dist_to_target[5];
   Int_t           MasterAnaDev_sec_protons_E_BetheBloch_biasDown_sz;
   Double_t        MasterAnaDev_sec_protons_E_BetheBloch_biasDown[3];   //[MasterAnaDev_sec_protons_E_BetheBloch_biasDown_sz]
   Int_t           MasterAnaDev_sec_protons_E_BetheBloch_biasUp_sz;
   Double_t        MasterAnaDev_sec_protons_E_BetheBloch_biasUp[3];   //[MasterAnaDev_sec_protons_E_BetheBloch_biasUp_sz]
   Int_t           MasterAnaDev_sec_protons_E_Birks_bias_sz;
   Double_t        MasterAnaDev_sec_protons_E_Birks_bias[3];   //[MasterAnaDev_sec_protons_E_Birks_bias_sz]
   Int_t           MasterAnaDev_sec_protons_E_MEU_biasDown_sz;
   Double_t        MasterAnaDev_sec_protons_E_MEU_biasDown[3];   //[MasterAnaDev_sec_protons_E_MEU_biasDown_sz]
   Int_t           MasterAnaDev_sec_protons_E_MEU_biasUp_sz;
   Double_t        MasterAnaDev_sec_protons_E_MEU_biasUp[3];   //[MasterAnaDev_sec_protons_E_MEU_biasUp_sz]
   Int_t           MasterAnaDev_sec_protons_E_Mass_biasDown_sz;
   Double_t        MasterAnaDev_sec_protons_E_Mass_biasDown[3];   //[MasterAnaDev_sec_protons_E_Mass_biasDown_sz]
   Int_t           MasterAnaDev_sec_protons_E_Mass_biasUp_sz;
   Double_t        MasterAnaDev_sec_protons_E_Mass_biasUp[3];   //[MasterAnaDev_sec_protons_E_Mass_biasUp_sz]
   Int_t           MasterAnaDev_sec_protons_E_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_E_fromdEdx[3];   //[MasterAnaDev_sec_protons_E_fromdEdx_sz]
   Int_t           MasterAnaDev_sec_protons_P_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_P_fromdEdx[3];   //[MasterAnaDev_sec_protons_P_fromdEdx_sz]
   Int_t           MasterAnaDev_sec_protons_Px_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_Px_fromdEdx[3];   //[MasterAnaDev_sec_protons_Px_fromdEdx_sz]
   Int_t           MasterAnaDev_sec_protons_Py_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_Py_fromdEdx[3];   //[MasterAnaDev_sec_protons_Py_fromdEdx_sz]
   Int_t           MasterAnaDev_sec_protons_Pz_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_Pz_fromdEdx[3];   //[MasterAnaDev_sec_protons_Pz_fromdEdx_sz]
   Int_t           MasterAnaDev_sec_protons_T_fromCalo_sz;
   Double_t        MasterAnaDev_sec_protons_T_fromCalo[3];   //[MasterAnaDev_sec_protons_T_fromCalo_sz]
   Int_t           MasterAnaDev_sec_protons_T_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_T_fromdEdx[3];   //[MasterAnaDev_sec_protons_T_fromdEdx_sz]
   Int_t           MasterAnaDev_sec_protons_nodes_E_sz;
   Double_t        MasterAnaDev_sec_protons_nodes_E[59];   //[MasterAnaDev_sec_protons_nodes_E_sz]
   Int_t           MasterAnaDev_sec_protons_nodes_nodesNormE_sz;
   Double_t        MasterAnaDev_sec_protons_nodes_nodesNormE[59];   //[MasterAnaDev_sec_protons_nodes_nodesNormE_sz]
   Int_t           MasterAnaDev_sec_protons_pion_scores_sz;
   Double_t        MasterAnaDev_sec_protons_pion_scores[3];   //[MasterAnaDev_sec_protons_pion_scores_sz]
   Int_t           MasterAnaDev_sec_protons_pion_scores1_sz;
   Double_t        MasterAnaDev_sec_protons_pion_scores1[3];   //[MasterAnaDev_sec_protons_pion_scores1_sz]
   Int_t           MasterAnaDev_sec_protons_pion_scores2_sz;
   Double_t        MasterAnaDev_sec_protons_pion_scores2[3];   //[MasterAnaDev_sec_protons_pion_scores2_sz]
   Int_t           MasterAnaDev_sec_protons_proton_scores_sz;
   Double_t        MasterAnaDev_sec_protons_proton_scores[3];   //[MasterAnaDev_sec_protons_proton_scores_sz]
   Int_t           MasterAnaDev_sec_protons_proton_scores1_sz;
   Double_t        MasterAnaDev_sec_protons_proton_scores1[3];   //[MasterAnaDev_sec_protons_proton_scores1_sz]
   Int_t           MasterAnaDev_sec_protons_proton_scores2_sz;
   Double_t        MasterAnaDev_sec_protons_proton_scores2[3];   //[MasterAnaDev_sec_protons_proton_scores2_sz]
   Int_t           MasterAnaDev_sec_protons_score1_BetheBloch_biasDown_sz;
   Double_t        MasterAnaDev_sec_protons_score1_BetheBloch_biasDown[3];   //[MasterAnaDev_sec_protons_score1_BetheBloch_biasDown_sz]
   Int_t           MasterAnaDev_sec_protons_score1_BetheBloch_biasUp_sz;
   Double_t        MasterAnaDev_sec_protons_score1_BetheBloch_biasUp[3];   //[MasterAnaDev_sec_protons_score1_BetheBloch_biasUp_sz]
   Int_t           MasterAnaDev_sec_protons_score1_Birks_bias_sz;
   Double_t        MasterAnaDev_sec_protons_score1_Birks_bias[3];   //[MasterAnaDev_sec_protons_score1_Birks_bias_sz]
   Int_t           MasterAnaDev_sec_protons_score1_MEU_biasDown_sz;
   Double_t        MasterAnaDev_sec_protons_score1_MEU_biasDown[3];   //[MasterAnaDev_sec_protons_score1_MEU_biasDown_sz]
   Int_t           MasterAnaDev_sec_protons_score1_MEU_biasUp_sz;
   Double_t        MasterAnaDev_sec_protons_score1_MEU_biasUp[3];   //[MasterAnaDev_sec_protons_score1_MEU_biasUp_sz]
   Int_t           MasterAnaDev_sec_protons_score1_Mass_biasDown_sz;
   Double_t        MasterAnaDev_sec_protons_score1_Mass_biasDown[3];   //[MasterAnaDev_sec_protons_score1_Mass_biasDown_sz]
   Int_t           MasterAnaDev_sec_protons_score1_Mass_biasUp_sz;
   Double_t        MasterAnaDev_sec_protons_score1_Mass_biasUp[3];   //[MasterAnaDev_sec_protons_score1_Mass_biasUp_sz]
   Int_t           MasterAnaDev_sec_protons_theta_fromdEdx_sz;
   Double_t        MasterAnaDev_sec_protons_theta_fromdEdx[3];   //[MasterAnaDev_sec_protons_theta_fromdEdx_sz]
   Double_t        MasterAnaDev_sys_muon_curve_energy_shift[2];
   Double_t        MasterAnaDev_sys_muon_energy_shift[2];
   Double_t        MasterAnaDev_sys_muon_minerva_energy_shift[2];
   Double_t        MasterAnaDev_sys_muon_qSquared_shift[2];
   Double_t        MasterAnaDev_sys_muon_range_energy_shift[2];
   Double_t        MasterAnaDev_sys_muon_wSquared_shift[2];
   Double_t        MasterAnaDev_sys_muon_xbj_shift[2];
   Double_t        MasterAnaDev_sys_muon_y_shift[2];
   Double_t        MasterAnaDev_sys_nu_energy_shift[2];
   Double_t        MasterAnaDev_sys_recoil_energy_shift[2];
   Double_t        MasterAnaDev_sys_recoil_qSquared_shift[2];
   Double_t        MasterAnaDev_sys_recoil_wSquared_shift[2];
   Double_t        MasterAnaDev_sys_recoil_xbj_shift[2];
   Double_t        MasterAnaDev_sys_recoil_y_shift[2];
   Double_t        MasterAnaDev_sys_total_qSquared_shift[2];
   Double_t        MasterAnaDev_sys_total_wSquared_shift[2];
   Double_t        MasterAnaDev_sys_total_xbj_shift[2];
   Double_t        MasterAnaDev_sys_total_y_shift[2];
   Int_t           n_prongs;
   Int_t           prong_nParticles[MAX_N_PRONGS];   //[n_prongs]
   Int_t           prong_[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_BackMiddleRatio[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_CalCorrectedEnergy[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_ECALCalibE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_ECALVisE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_FirstFireFraction[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_HCALCalibE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_HCALVisE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_MedianPlaneShowerWidth[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_NonMIPClusFrac[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_ODVisE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_SideECALVisE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_TotalVisE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_TrackerCalibE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_TransverseGapScore[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_TrimmedCaloEnergy[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_TrimmedVisE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_UViewE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_VViewE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_XViewE[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_dEdXMean[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_dEdXMeanFrontTracker[MAX_N_PRONGS];   //[n_prongs]
   std::vector<std::vector<double> > *prong_axis_vector;
   std::vector<std::vector<double> > *prong_axis_vertex;
   std::vector<std::vector<double> > *prong_dEdXs;
   std::vector<std::vector<double> > *prong_dEdXs_dz;
   std::vector<std::vector<double> > *prong_dEdXs_projection;
   std::vector<std::vector<double> > *prong_source_vertex;
   Int_t           ev_run;
   Int_t           ev_subrun;
   Int_t           ev_detector;
   Int_t           ev_triggerType;
   Int_t           ev_gate;
   Int_t           ev_global_gate;
   Int_t           ev_gps_time_sec;
   Int_t           ev_gps_time_usec;
   Double_t        numi_x_pos;
   Double_t        numi_y_pos;
   Int_t           batch_structure;
   Int_t           numi_minos_time_sec;
   Int_t           numi_minos_time_nsec;
   Int_t           numi_database_sec;
   Int_t           numi_database_nsec;
   Int_t           numi_is_good_beam_spill;
   Int_t           numi_is_bad_pot_data_spill;
   Int_t           numi_is_no_beam_spill;
   Int_t           numi_is_bad_data_spill;
   Int_t           numi_is_bad_profile_x_width_data;
   Int_t           numi_is_bad_profile_y_width_data;
   Int_t           numi_is_bad_x_position_data;
   Int_t           numi_is_bad_y_position_data;
   Int_t           numi_is_bad_horn_curr_data;
   Int_t           numi_is_bad_nearest_time_spill;
   Int_t           numi_is_bad_beam_spill;
   Int_t           numi_is_bad_pot_spill;
   Int_t           numi_is_bad_x_pos;
   Int_t           numi_is_bad_y_pos;
   Int_t           numi_is_bad_beam_size;
   Int_t           numi_is_bad_profile_width_x;
   Int_t           numi_is_bad_profile_width_y;
   Int_t           numi_is_bad_horn_curr;
   Int_t           numi_is_target_out_spill;
   Int_t           numi_is_bad_beam_type_spill;
   Int_t           numi_is_bad_beam_frac_on_tgt_spill;
   Int_t           numi_is_good_position;
   Int_t           numi_is_good_width;
   Int_t           numi_is_good_toroids;
   Int_t           numi_is_good_delta_t;
   Int_t           numi_is_good_horn;
   Double_t        numi_time_to_nearest;
   Int_t           mc_run;
   Int_t           mc_subrun;
   Int_t           mc_nInteractions;
   Int_t           mc_MIState;
   Double_t        mc_pot;
   Int_t           mc_beamConfig;
   Int_t           mc_processType;
   Int_t           mc_nthEvtInSpill;
   Int_t           mc_nthEvtInFile;
   Int_t           mc_intType;
   Int_t           mc_current;
   Int_t           mc_charm;
   Double_t        mc_weight;
   Double_t        mc_XSec;
   Double_t        mc_diffXSec;
   Int_t           mc_incoming;
   Double_t        mc_fluxDriverProb;
   Int_t           mc_targetNucleus;
   Int_t           mc_targetZ;
   Int_t           mc_targetA;
   Int_t           mc_targetNucleon;
   Int_t           mc_struckQuark;
   Int_t           mc_seaQuark;
   Int_t           mc_resID;
   Int_t           mc_primaryLepton;
   Double_t        mc_incomingE;
   Double_t        mc_Bjorkenx;
   Double_t        mc_Bjorkeny;
   Double_t        mc_Q2;
   Double_t        mc_nuT;
   Double_t        mc_w;
   Double_t        mc_vtx[4];
   Double_t        mc_incomingPartVec[4];
   Double_t        mc_initNucVec[4];
   Double_t        mc_primFSLepton[4];
   Int_t           mc_nFSPart;
   Double_t        mc_FSPartPx[MAX_MC_NFSPART];   //[mc_nFSPart]
   Double_t        mc_FSPartPy[MAX_MC_NFSPART];   //[mc_nFSPart]
   Double_t        mc_FSPartPz[MAX_MC_NFSPART];   //[mc_nFSPart]
   Double_t        mc_FSPartE[MAX_MC_NFSPART];   //[mc_nFSPart]
   Int_t           mc_FSPartPDG[MAX_MC_NFSPART];   //[mc_nFSPart]
   Int_t           mc_er_nPart;
   Int_t           mc_er_ID[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Int_t           mc_er_status[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_posInNucX[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_posInNucY[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_posInNucZ[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_Px[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_Py[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_Pz[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Double_t        mc_er_E[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Int_t           mc_er_FD[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Int_t           mc_er_LD[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Int_t           mc_er_mother[MAX_MC_ER_NPART];   //[mc_er_nPart]
   Int_t           mc_fr_nNuAncestorIDs;
   Int_t           mc_fr_nuAncestorIDs[MAX_MC_FR_NNUANCESTORIDS];   //[mc_fr_nNuAncestorIDs]
   Int_t           mc_fr_nuParentID;
   Int_t           mc_fr_decMode;
   Double_t        mc_fr_primProtonVtx[3];
   Double_t        mc_fr_primProtonP[4];
   Double_t        mc_fr_nuParentDecVtx[3];
   Double_t        mc_fr_nuParentProdVtx[3];
   Double_t        mc_fr_nuParentProdP[4];
   Double_t        mc_cvweight_total;
   Double_t        wgt;
   Double_t        mc_cvweight_totalFlux;
   Double_t        mc_cvweight_totalXsec;
   Double_t        mc_ppfx1_cvweight;
   Double_t        mc_hornCurrent_cvweight;
   Double_t        mc_gen1_cvweight_total;
   Double_t        gen1_wgt;
   Double_t        mc_gen1_cvweight_totalFlux;
   Double_t        mc_gen1_cvweight_NA49;
   Int_t           mc_wgt_Flux_BeamFocus_sz;
   Double_t        mc_wgt_Flux_BeamFocus[MAX_MC_WGT_FLUX_BEAMFOCUS_SZ];   //[mc_wgt_Flux_BeamFocus_sz]
   Int_t           mc_wgt_gen1_Flux_Tertiary_sz;
   Double_t        mc_wgt_gen1_Flux_Tertiary[100];   //[mc_wgt_gen1_Flux_Tertiary_sz]
   Int_t           mc_wgt_gen1_Flux_NA49_sz;
   Double_t        mc_wgt_gen1_Flux_NA49[100];   //[mc_wgt_gen1_Flux_NA49_sz]
   Int_t           mc_wgt_Norm_sz;
   Double_t        mc_wgt_Norm[1];   //[mc_wgt_Norm_sz]
   Int_t           mc_wgt_ppfx1_Total_sz;
   Double_t        mc_wgt_ppfx1_Total[100];   //[mc_wgt_ppfx1_Total_sz]
   Int_t           mc_vertex_batch;
   Double_t        prong_part_score[MAX_N_PRONGS];   //[n_prongs]
   Double_t        prong_part_mass[MAX_N_PRONGS];   //[n_prongs]
   Int_t           prong_part_charge[MAX_N_PRONGS];   //[n_prongs]
   Int_t           prong_part_pid[MAX_N_PRONGS];   //[n_prongs]
   std::vector<std::vector<double> > *prong_part_E;
   std::vector<std::vector<double> > *prong_part_pos;

   // List of branches
   TBranch        *b_eventID;   //!
   TBranch        *b_physEvtNum;   //!
   TBranch        *b_n_hyps;   //!
   TBranch        *b_processType;   //!
   TBranch        *b_primaryPart;   //!
   TBranch        *b_n_slices;   //!
   TBranch        *b_slice_numbers;   //!
   TBranch        *b_shared_slice;   //!
   TBranch        *b_vtx;   //!
   TBranch        *b_vtxErr;   //!
   TBranch        *b_E;   //!
   TBranch        *b_reco_vertex_batch;   //!
   TBranch        *b_found_truth;   //!
   TBranch        *b_phys_front_activity;   //!
   TBranch        *b_phys_energy_in_road_upstream_is_rockmuon_consistent;   //!
   TBranch        *b_rock_muons_removed;   //!
   TBranch        *b_minos_track_match;   //!
   TBranch        *b_minos_stub_match;   //!
   TBranch        *b_unknown_helicity;   //!
   TBranch        *b_minos_track_inside_partial_plane;   //!
   TBranch        *b_prim_vtx_has_misassigned_track_direction;   //!
   TBranch        *b_prim_vtx_has_broken_track;   //!
   TBranch        *b_pass_MasterAnaDev;   //!
   TBranch        *b_VetoWall_extrapnowalls;   //!
   TBranch        *b_VetoWall_extrapwall1;   //!
   TBranch        *b_VetoWall_extrapwall2;   //!
   TBranch        *b_VetoWall_extrapbothwalls;   //!
   TBranch        *b_VetoWall_MuonTrkMatchToVETOwalloff;   //!
   TBranch        *b_EMLikeTrackMultiplicity;   //!
   TBranch        *b_HasNoBackExitingTracks;   //!
   TBranch        *b_HasNoVertexMismatch;   //!
   TBranch        *b_HasTracks;   //!
   TBranch        *b_ID_Hits_Post_Long;   //!
   TBranch        *b_NeutronMaxClusters;   //!
   TBranch        *b_NneutronClusters0;   //!
   TBranch        *b_NneutronClusters1;   //!
   TBranch        *b_NneutronClusters2;   //!
   TBranch        *b_NneutronClusters3;   //!
   TBranch        *b_PassNeutronMaxClusterCut;   //!
   TBranch        *b_StartPointVertexMultiplicity;   //!
   TBranch        *b_UpstreamInlineNClusters;   //!
   TBranch        *b_UpstreamInlineNDigits;   //!
   TBranch        *b_VertexTrackMultiplicity;   //!
   TBranch        *b_VetoWall_NumberMatchToVeto;   //!
   TBranch        *b_VetoWall_event_IsVeto;   //!
   TBranch        *b_VetoWall_sixPush;   //!
   TBranch        *b_blob_disp_nBlobs;   //!
   TBranch        *b_blob_disp_nClus;   //!
   TBranch        *b_blob_disp_nClus_ecal;   //!
   TBranch        *b_blob_disp_nClus_hcal;   //!
   TBranch        *b_blob_disp_nClus_nucl;   //!
   TBranch        *b_blob_disp_nClus_od;   //!
   TBranch        *b_blob_disp_nClus_tracker;   //!
   TBranch        *b_blob_iso_nBlobs;   //!
   TBranch        *b_blob_iso_nClus;   //!
   TBranch        *b_blob_iso_nClus_ecal;   //!
   TBranch        *b_blob_iso_nClus_hcal;   //!
   TBranch        *b_blob_iso_nClus_nucl;   //!
   TBranch        *b_blob_iso_nClus_od;   //!
   TBranch        *b_blob_iso_nClus_tracker;   //!
   TBranch        *b_blob_mufuzz_nBlobs;   //!
   TBranch        *b_blob_mufuzz_nClus;   //!
   TBranch        *b_blob_mufuzz_nClus_ecal;   //!
   TBranch        *b_blob_mufuzz_nClus_hcal;   //!
   TBranch        *b_blob_mufuzz_nClus_nucl;   //!
   TBranch        *b_blob_mufuzz_nClus_od;   //!
   TBranch        *b_blob_mufuzz_nClus_tracker;   //!
   TBranch        *b_blob_recoil_nBlobs;   //!
   TBranch        *b_blob_recoil_nClus;   //!
   TBranch        *b_blob_recoil_nClus_ecal;   //!
   TBranch        *b_blob_recoil_nClus_hcal;   //!
   TBranch        *b_blob_recoil_nClus_nucl;   //!
   TBranch        *b_blob_recoil_nClus_od;   //!
   TBranch        *b_blob_recoil_nClus_tracker;   //!
   TBranch        *b_blob_vtx_nBlobs;   //!
   TBranch        *b_blob_vtx_nClus;   //!
   TBranch        *b_blob_vtx_nClus_ecal;   //!
   TBranch        *b_blob_vtx_nClus_hcal;   //!
   TBranch        *b_blob_vtx_nClus_nucl;   //!
   TBranch        *b_blob_vtx_nClus_od;   //!
   TBranch        *b_blob_vtx_nClus_tracker;   //!
   TBranch        *b_broken_track_most_us_plane;   //!
   TBranch        *b_event_unused_start_vertices;   //!
   TBranch        *b_event_used_start_vertices;   //!
   TBranch        *b_has_interaction_vertex;   //!
   TBranch        *b_has_single_proton;   //!
   TBranch        *b_improved_nmichel;   //!
   TBranch        *b_isMinosMatchStub;   //!
   TBranch        *b_isMinosMatchTrack;   //!
   TBranch        *b_multiplicity;   //!
   TBranch        *b_muon_fuzz_energy;   //!
   TBranch        *b_muon_is_minos_match_stub;   //!
   TBranch        *b_muon_is_minos_match_track;   //!
   TBranch        *b_n_anchored_long_trk_prongs;   //!
   TBranch        *b_n_anchored_short_trk_prongs;   //!
   TBranch        *b_n_indices;   //!
   TBranch        *b_n_iso_trk_prongs;   //!
   TBranch        *b_n_minos_matches;   //!
   TBranch        *b_n_muon_iso_blobs;   //!
   TBranch        *b_n_nonvtx_iso_blobs;   //!
   TBranch        *b_n_nonvtx_iso_blobs_all;   //!
   TBranch        *b_part_response_recoil_nClus;   //!
   TBranch        *b_pass_MasterAnaDev_precuts;   //!
   TBranch        *b_phys_energy_in_road_downstream_nplanes;   //!
   TBranch        *b_phys_energy_in_road_upstream_nplanes;   //!
   TBranch        *b_phys_n_dead_discr_pair;   //!
   TBranch        *b_phys_n_dead_discr_pair_in_prim_track_region;   //!
   TBranch        *b_phys_n_dead_discr_pair_two_mod_downstream_prim_track;   //!
   TBranch        *b_phys_n_dead_discr_pair_two_mod_upstream_prim_vtx;   //!
   TBranch        *b_phys_n_dead_discr_pair_upstream_prim_track_proj;   //!
   TBranch        *b_phys_vertex_is_fiducial;   //!
   TBranch        *b_proton_prong_PDG;   //!
   TBranch        *b_proton_prong_traj_ID;   //!
   TBranch        *b_recoil_EInc;   //!
   TBranch        *b_slice_n_hits;   //!
   TBranch        *b_truth_improved_michel_electron;   //!
   TBranch        *b_ConeEnergyVis;   //!
   TBranch        *b_ExtraEnergyVis;   //!
   TBranch        *b_Psi;   //!
   TBranch        *b_UpstreamInlineEnergy;   //!
   TBranch        *b_UpstreamInlineEnergyWgtdPosMean;   //!
   TBranch        *b_UpstreamInlineEnergyWgtdPosRMS;   //!
   TBranch        *b_blob_ccqe_recoil_E;   //!
   TBranch        *b_blob_disp_E;   //!
   TBranch        *b_blob_disp_E_ecal;   //!
   TBranch        *b_blob_disp_E_ecal_em;   //!
   TBranch        *b_blob_disp_E_ecal_highn;   //!
   TBranch        *b_blob_disp_E_ecal_lown;   //!
   TBranch        *b_blob_disp_E_ecal_meson;   //!
   TBranch        *b_blob_disp_E_ecal_midn;   //!
   TBranch        *b_blob_disp_E_ecal_mu;   //!
   TBranch        *b_blob_disp_E_ecal_other;   //!
   TBranch        *b_blob_disp_E_ecal_p;   //!
   TBranch        *b_blob_disp_E_ecal_xtalk;   //!
   TBranch        *b_blob_disp_E_em;   //!
   TBranch        *b_blob_disp_E_hcal;   //!
   TBranch        *b_blob_disp_E_hcal_em;   //!
   TBranch        *b_blob_disp_E_hcal_highn;   //!
   TBranch        *b_blob_disp_E_hcal_lown;   //!
   TBranch        *b_blob_disp_E_hcal_meson;   //!
   TBranch        *b_blob_disp_E_hcal_midn;   //!
   TBranch        *b_blob_disp_E_hcal_mu;   //!
   TBranch        *b_blob_disp_E_hcal_other;   //!
   TBranch        *b_blob_disp_E_hcal_p;   //!
   TBranch        *b_blob_disp_E_hcal_xtalk;   //!
   TBranch        *b_blob_disp_E_highn;   //!
   TBranch        *b_blob_disp_E_lown;   //!
   TBranch        *b_blob_disp_E_meson;   //!
   TBranch        *b_blob_disp_E_midn;   //!
   TBranch        *b_blob_disp_E_mu;   //!
   TBranch        *b_blob_disp_E_nucl;   //!
   TBranch        *b_blob_disp_E_nucl_em;   //!
   TBranch        *b_blob_disp_E_nucl_highn;   //!
   TBranch        *b_blob_disp_E_nucl_lown;   //!
   TBranch        *b_blob_disp_E_nucl_meson;   //!
   TBranch        *b_blob_disp_E_nucl_midn;   //!
   TBranch        *b_blob_disp_E_nucl_mu;   //!
   TBranch        *b_blob_disp_E_nucl_other;   //!
   TBranch        *b_blob_disp_E_nucl_p;   //!
   TBranch        *b_blob_disp_E_nucl_xtalk;   //!
   TBranch        *b_blob_disp_E_od;   //!
   TBranch        *b_blob_disp_E_od_em;   //!
   TBranch        *b_blob_disp_E_od_highn;   //!
   TBranch        *b_blob_disp_E_od_lown;   //!
   TBranch        *b_blob_disp_E_od_meson;   //!
   TBranch        *b_blob_disp_E_od_midn;   //!
   TBranch        *b_blob_disp_E_od_mu;   //!
   TBranch        *b_blob_disp_E_od_other;   //!
   TBranch        *b_blob_disp_E_od_p;   //!
   TBranch        *b_blob_disp_E_od_xtalk;   //!
   TBranch        *b_blob_disp_E_other;   //!
   TBranch        *b_blob_disp_E_p;   //!
   TBranch        *b_blob_disp_E_tracker;   //!
   TBranch        *b_blob_disp_E_tracker_em;   //!
   TBranch        *b_blob_disp_E_tracker_highn;   //!
   TBranch        *b_blob_disp_E_tracker_lown;   //!
   TBranch        *b_blob_disp_E_tracker_meson;   //!
   TBranch        *b_blob_disp_E_tracker_midn;   //!
   TBranch        *b_blob_disp_E_tracker_mu;   //!
   TBranch        *b_blob_disp_E_tracker_other;   //!
   TBranch        *b_blob_disp_E_tracker_p;   //!
   TBranch        *b_blob_disp_E_tracker_xtalk;   //!
   TBranch        *b_blob_disp_E_xtalk;   //!
   TBranch        *b_blob_iso_E;   //!
   TBranch        *b_blob_iso_E_ecal;   //!
   TBranch        *b_blob_iso_E_ecal_em;   //!
   TBranch        *b_blob_iso_E_ecal_highn;   //!
   TBranch        *b_blob_iso_E_ecal_lown;   //!
   TBranch        *b_blob_iso_E_ecal_meson;   //!
   TBranch        *b_blob_iso_E_ecal_midn;   //!
   TBranch        *b_blob_iso_E_ecal_mu;   //!
   TBranch        *b_blob_iso_E_ecal_other;   //!
   TBranch        *b_blob_iso_E_ecal_p;   //!
   TBranch        *b_blob_iso_E_ecal_xtalk;   //!
   TBranch        *b_blob_iso_E_em;   //!
   TBranch        *b_blob_iso_E_hcal;   //!
   TBranch        *b_blob_iso_E_hcal_em;   //!
   TBranch        *b_blob_iso_E_hcal_highn;   //!
   TBranch        *b_blob_iso_E_hcal_lown;   //!
   TBranch        *b_blob_iso_E_hcal_meson;   //!
   TBranch        *b_blob_iso_E_hcal_midn;   //!
   TBranch        *b_blob_iso_E_hcal_mu;   //!
   TBranch        *b_blob_iso_E_hcal_other;   //!
   TBranch        *b_blob_iso_E_hcal_p;   //!
   TBranch        *b_blob_iso_E_hcal_xtalk;   //!
   TBranch        *b_blob_iso_E_highn;   //!
   TBranch        *b_blob_iso_E_lown;   //!
   TBranch        *b_blob_iso_E_meson;   //!
   TBranch        *b_blob_iso_E_midn;   //!
   TBranch        *b_blob_iso_E_mu;   //!
   TBranch        *b_blob_iso_E_nucl;   //!
   TBranch        *b_blob_iso_E_nucl_em;   //!
   TBranch        *b_blob_iso_E_nucl_highn;   //!
   TBranch        *b_blob_iso_E_nucl_lown;   //!
   TBranch        *b_blob_iso_E_nucl_meson;   //!
   TBranch        *b_blob_iso_E_nucl_midn;   //!
   TBranch        *b_blob_iso_E_nucl_mu;   //!
   TBranch        *b_blob_iso_E_nucl_other;   //!
   TBranch        *b_blob_iso_E_nucl_p;   //!
   TBranch        *b_blob_iso_E_nucl_xtalk;   //!
   TBranch        *b_blob_iso_E_od;   //!
   TBranch        *b_blob_iso_E_od_em;   //!
   TBranch        *b_blob_iso_E_od_highn;   //!
   TBranch        *b_blob_iso_E_od_lown;   //!
   TBranch        *b_blob_iso_E_od_meson;   //!
   TBranch        *b_blob_iso_E_od_midn;   //!
   TBranch        *b_blob_iso_E_od_mu;   //!
   TBranch        *b_blob_iso_E_od_other;   //!
   TBranch        *b_blob_iso_E_od_p;   //!
   TBranch        *b_blob_iso_E_od_xtalk;   //!
   TBranch        *b_blob_iso_E_other;   //!
   TBranch        *b_blob_iso_E_p;   //!
   TBranch        *b_blob_iso_E_tracker;   //!
   TBranch        *b_blob_iso_E_tracker_em;   //!
   TBranch        *b_blob_iso_E_tracker_highn;   //!
   TBranch        *b_blob_iso_E_tracker_lown;   //!
   TBranch        *b_blob_iso_E_tracker_meson;   //!
   TBranch        *b_blob_iso_E_tracker_midn;   //!
   TBranch        *b_blob_iso_E_tracker_mu;   //!
   TBranch        *b_blob_iso_E_tracker_other;   //!
   TBranch        *b_blob_iso_E_tracker_p;   //!
   TBranch        *b_blob_iso_E_tracker_xtalk;   //!
   TBranch        *b_blob_iso_E_xtalk;   //!
   TBranch        *b_blob_mufuzz_E;   //!
   TBranch        *b_blob_mufuzz_E_ecal;   //!
   TBranch        *b_blob_mufuzz_E_ecal_em;   //!
   TBranch        *b_blob_mufuzz_E_ecal_highn;   //!
   TBranch        *b_blob_mufuzz_E_ecal_lown;   //!
   TBranch        *b_blob_mufuzz_E_ecal_meson;   //!
   TBranch        *b_blob_mufuzz_E_ecal_midn;   //!
   TBranch        *b_blob_mufuzz_E_ecal_mu;   //!
   TBranch        *b_blob_mufuzz_E_ecal_other;   //!
   TBranch        *b_blob_mufuzz_E_ecal_p;   //!
   TBranch        *b_blob_mufuzz_E_ecal_xtalk;   //!
   TBranch        *b_blob_mufuzz_E_em;   //!
   TBranch        *b_blob_mufuzz_E_hcal;   //!
   TBranch        *b_blob_mufuzz_E_hcal_em;   //!
   TBranch        *b_blob_mufuzz_E_hcal_highn;   //!
   TBranch        *b_blob_mufuzz_E_hcal_lown;   //!
   TBranch        *b_blob_mufuzz_E_hcal_meson;   //!
   TBranch        *b_blob_mufuzz_E_hcal_midn;   //!
   TBranch        *b_blob_mufuzz_E_hcal_mu;   //!
   TBranch        *b_blob_mufuzz_E_hcal_other;   //!
   TBranch        *b_blob_mufuzz_E_hcal_p;   //!
   TBranch        *b_blob_mufuzz_E_hcal_xtalk;   //!
   TBranch        *b_blob_mufuzz_E_highn;   //!
   TBranch        *b_blob_mufuzz_E_lown;   //!
   TBranch        *b_blob_mufuzz_E_meson;   //!
   TBranch        *b_blob_mufuzz_E_midn;   //!
   TBranch        *b_blob_mufuzz_E_mu;   //!
   TBranch        *b_blob_mufuzz_E_nucl;   //!
   TBranch        *b_blob_mufuzz_E_nucl_em;   //!
   TBranch        *b_blob_mufuzz_E_nucl_highn;   //!
   TBranch        *b_blob_mufuzz_E_nucl_lown;   //!
   TBranch        *b_blob_mufuzz_E_nucl_meson;   //!
   TBranch        *b_blob_mufuzz_E_nucl_midn;   //!
   TBranch        *b_blob_mufuzz_E_nucl_mu;   //!
   TBranch        *b_blob_mufuzz_E_nucl_other;   //!
   TBranch        *b_blob_mufuzz_E_nucl_p;   //!
   TBranch        *b_blob_mufuzz_E_nucl_xtalk;   //!
   TBranch        *b_blob_mufuzz_E_od;   //!
   TBranch        *b_blob_mufuzz_E_od_em;   //!
   TBranch        *b_blob_mufuzz_E_od_highn;   //!
   TBranch        *b_blob_mufuzz_E_od_lown;   //!
   TBranch        *b_blob_mufuzz_E_od_meson;   //!
   TBranch        *b_blob_mufuzz_E_od_midn;   //!
   TBranch        *b_blob_mufuzz_E_od_mu;   //!
   TBranch        *b_blob_mufuzz_E_od_other;   //!
   TBranch        *b_blob_mufuzz_E_od_p;   //!
   TBranch        *b_blob_mufuzz_E_od_xtalk;   //!
   TBranch        *b_blob_mufuzz_E_other;   //!
   TBranch        *b_blob_mufuzz_E_p;   //!
   TBranch        *b_blob_mufuzz_E_tracker;   //!
   TBranch        *b_blob_mufuzz_E_tracker_em;   //!
   TBranch        *b_blob_mufuzz_E_tracker_highn;   //!
   TBranch        *b_blob_mufuzz_E_tracker_lown;   //!
   TBranch        *b_blob_mufuzz_E_tracker_meson;   //!
   TBranch        *b_blob_mufuzz_E_tracker_midn;   //!
   TBranch        *b_blob_mufuzz_E_tracker_mu;   //!
   TBranch        *b_blob_mufuzz_E_tracker_other;   //!
   TBranch        *b_blob_mufuzz_E_tracker_p;   //!
   TBranch        *b_blob_mufuzz_E_tracker_xtalk;   //!
   TBranch        *b_blob_mufuzz_E_xtalk;   //!
   TBranch        *b_blob_recoil_E;   //!
   TBranch        *b_blob_recoil_E_ecal;   //!
   TBranch        *b_blob_recoil_E_ecal_em;   //!
   TBranch        *b_blob_recoil_E_ecal_highn;   //!
   TBranch        *b_blob_recoil_E_ecal_lown;   //!
   TBranch        *b_blob_recoil_E_ecal_meson;   //!
   TBranch        *b_blob_recoil_E_ecal_midn;   //!
   TBranch        *b_blob_recoil_E_ecal_mu;   //!
   TBranch        *b_blob_recoil_E_ecal_other;   //!
   TBranch        *b_blob_recoil_E_ecal_p;   //!
   TBranch        *b_blob_recoil_E_ecal_xtalk;   //!
   TBranch        *b_blob_recoil_E_em;   //!
   TBranch        *b_blob_recoil_E_hcal;   //!
   TBranch        *b_blob_recoil_E_hcal_em;   //!
   TBranch        *b_blob_recoil_E_hcal_highn;   //!
   TBranch        *b_blob_recoil_E_hcal_lown;   //!
   TBranch        *b_blob_recoil_E_hcal_meson;   //!
   TBranch        *b_blob_recoil_E_hcal_midn;   //!
   TBranch        *b_blob_recoil_E_hcal_mu;   //!
   TBranch        *b_blob_recoil_E_hcal_other;   //!
   TBranch        *b_blob_recoil_E_hcal_p;   //!
   TBranch        *b_blob_recoil_E_hcal_xtalk;   //!
   TBranch        *b_blob_recoil_E_highn;   //!
   TBranch        *b_blob_recoil_E_lown;   //!
   TBranch        *b_blob_recoil_E_meson;   //!
   TBranch        *b_blob_recoil_E_midn;   //!
   TBranch        *b_blob_recoil_E_mu;   //!
   TBranch        *b_blob_recoil_E_nucl;   //!
   TBranch        *b_blob_recoil_E_nucl_em;   //!
   TBranch        *b_blob_recoil_E_nucl_highn;   //!
   TBranch        *b_blob_recoil_E_nucl_lown;   //!
   TBranch        *b_blob_recoil_E_nucl_meson;   //!
   TBranch        *b_blob_recoil_E_nucl_midn;   //!
   TBranch        *b_blob_recoil_E_nucl_mu;   //!
   TBranch        *b_blob_recoil_E_nucl_other;   //!
   TBranch        *b_blob_recoil_E_nucl_p;   //!
   TBranch        *b_blob_recoil_E_nucl_xtalk;   //!
   TBranch        *b_blob_recoil_E_od;   //!
   TBranch        *b_blob_recoil_E_od_em;   //!
   TBranch        *b_blob_recoil_E_od_highn;   //!
   TBranch        *b_blob_recoil_E_od_lown;   //!
   TBranch        *b_blob_recoil_E_od_meson;   //!
   TBranch        *b_blob_recoil_E_od_midn;   //!
   TBranch        *b_blob_recoil_E_od_mu;   //!
   TBranch        *b_blob_recoil_E_od_other;   //!
   TBranch        *b_blob_recoil_E_od_p;   //!
   TBranch        *b_blob_recoil_E_od_xtalk;   //!
   TBranch        *b_blob_recoil_E_other;   //!
   TBranch        *b_blob_recoil_E_p;   //!
   TBranch        *b_blob_recoil_E_tracker;   //!
   TBranch        *b_blob_recoil_E_tracker_em;   //!
   TBranch        *b_blob_recoil_E_tracker_highn;   //!
   TBranch        *b_blob_recoil_E_tracker_lown;   //!
   TBranch        *b_blob_recoil_E_tracker_meson;   //!
   TBranch        *b_blob_recoil_E_tracker_midn;   //!
   TBranch        *b_blob_recoil_E_tracker_mu;   //!
   TBranch        *b_blob_recoil_E_tracker_other;   //!
   TBranch        *b_blob_recoil_E_tracker_p;   //!
   TBranch        *b_blob_recoil_E_tracker_xtalk;   //!
   TBranch        *b_blob_recoil_E_xtalk;   //!
   TBranch        *b_blob_vtx_E;   //!
   TBranch        *b_blob_vtx_E_ecal;   //!
   TBranch        *b_blob_vtx_E_ecal_em;   //!
   TBranch        *b_blob_vtx_E_ecal_highn;   //!
   TBranch        *b_blob_vtx_E_ecal_lown;   //!
   TBranch        *b_blob_vtx_E_ecal_meson;   //!
   TBranch        *b_blob_vtx_E_ecal_midn;   //!
   TBranch        *b_blob_vtx_E_ecal_mu;   //!
   TBranch        *b_blob_vtx_E_ecal_other;   //!
   TBranch        *b_blob_vtx_E_ecal_p;   //!
   TBranch        *b_blob_vtx_E_ecal_xtalk;   //!
   TBranch        *b_blob_vtx_E_em;   //!
   TBranch        *b_blob_vtx_E_hcal;   //!
   TBranch        *b_blob_vtx_E_hcal_em;   //!
   TBranch        *b_blob_vtx_E_hcal_highn;   //!
   TBranch        *b_blob_vtx_E_hcal_lown;   //!
   TBranch        *b_blob_vtx_E_hcal_meson;   //!
   TBranch        *b_blob_vtx_E_hcal_midn;   //!
   TBranch        *b_blob_vtx_E_hcal_mu;   //!
   TBranch        *b_blob_vtx_E_hcal_other;   //!
   TBranch        *b_blob_vtx_E_hcal_p;   //!
   TBranch        *b_blob_vtx_E_hcal_xtalk;   //!
   TBranch        *b_blob_vtx_E_highn;   //!
   TBranch        *b_blob_vtx_E_lown;   //!
   TBranch        *b_blob_vtx_E_meson;   //!
   TBranch        *b_blob_vtx_E_midn;   //!
   TBranch        *b_blob_vtx_E_mu;   //!
   TBranch        *b_blob_vtx_E_nucl;   //!
   TBranch        *b_blob_vtx_E_nucl_em;   //!
   TBranch        *b_blob_vtx_E_nucl_highn;   //!
   TBranch        *b_blob_vtx_E_nucl_lown;   //!
   TBranch        *b_blob_vtx_E_nucl_meson;   //!
   TBranch        *b_blob_vtx_E_nucl_midn;   //!
   TBranch        *b_blob_vtx_E_nucl_mu;   //!
   TBranch        *b_blob_vtx_E_nucl_other;   //!
   TBranch        *b_blob_vtx_E_nucl_p;   //!
   TBranch        *b_blob_vtx_E_nucl_xtalk;   //!
   TBranch        *b_blob_vtx_E_od;   //!
   TBranch        *b_blob_vtx_E_od_em;   //!
   TBranch        *b_blob_vtx_E_od_highn;   //!
   TBranch        *b_blob_vtx_E_od_lown;   //!
   TBranch        *b_blob_vtx_E_od_meson;   //!
   TBranch        *b_blob_vtx_E_od_midn;   //!
   TBranch        *b_blob_vtx_E_od_mu;   //!
   TBranch        *b_blob_vtx_E_od_other;   //!
   TBranch        *b_blob_vtx_E_od_p;   //!
   TBranch        *b_blob_vtx_E_od_xtalk;   //!
   TBranch        *b_blob_vtx_E_other;   //!
   TBranch        *b_blob_vtx_E_p;   //!
   TBranch        *b_blob_vtx_E_tracker;   //!
   TBranch        *b_blob_vtx_E_tracker_em;   //!
   TBranch        *b_blob_vtx_E_tracker_highn;   //!
   TBranch        *b_blob_vtx_E_tracker_lown;   //!
   TBranch        *b_blob_vtx_E_tracker_meson;   //!
   TBranch        *b_blob_vtx_E_tracker_midn;   //!
   TBranch        *b_blob_vtx_E_tracker_mu;   //!
   TBranch        *b_blob_vtx_E_tracker_other;   //!
   TBranch        *b_blob_vtx_E_tracker_p;   //!
   TBranch        *b_blob_vtx_E_tracker_xtalk;   //!
   TBranch        *b_blob_vtx_E_xtalk;   //!
   TBranch        *b_dis_id_energy;   //!
   TBranch        *b_energy_from_mc;   //!
   TBranch        *b_energy_from_mc_fraction;   //!
   TBranch        *b_energy_from_mc_fraction_of_highest;   //!
   TBranch        *b_muon_iso_blobs_energy;   //!
   TBranch        *b_muon_minerva_trk_chi2PerDoF;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_theta;   //!
   TBranch        *b_muon_thetaX;   //!
   TBranch        *b_muon_thetaY;   //!
   TBranch        *b_muon_trackVertexTime;   //!
   TBranch        *b_nonvtx_iso_blobs_energy;   //!
   TBranch        *b_nonvtx_iso_blobs_energy_all;   //!
   TBranch        *b_numi_bpm1;   //!
   TBranch        *b_numi_bpm2;   //!
   TBranch        *b_numi_bpm3;   //!
   TBranch        *b_numi_bpm4;   //!
   TBranch        *b_numi_bpm5;   //!
   TBranch        *b_numi_bpm6;   //!
   TBranch        *b_numi_horn_curr;   //!
   TBranch        *b_numi_pot;   //!
   TBranch        *b_numi_tor101;   //!
   TBranch        *b_numi_tortgt;   //!
   TBranch        *b_numi_tr101d;   //!
   TBranch        *b_numi_trtgtd;   //!
   TBranch        *b_numi_x;   //!
   TBranch        *b_numi_x_width;   //!
   TBranch        *b_numi_y;   //!
   TBranch        *b_numi_y_width;   //!
   TBranch        *b_part_response_recoil_em_id;   //!
   TBranch        *b_part_response_recoil_em_id_err;   //!
   TBranch        *b_part_response_recoil_em_od;   //!
   TBranch        *b_part_response_recoil_em_od_err;   //!
   TBranch        *b_part_response_recoil_high_neutron_id;   //!
   TBranch        *b_part_response_recoil_high_neutron_id_err;   //!
   TBranch        *b_part_response_recoil_high_neutron_od;   //!
   TBranch        *b_part_response_recoil_high_neutron_od_err;   //!
   TBranch        *b_part_response_recoil_high_proton_id;   //!
   TBranch        *b_part_response_recoil_high_proton_id_err;   //!
   TBranch        *b_part_response_recoil_high_proton_od;   //!
   TBranch        *b_part_response_recoil_high_proton_od_err;   //!
   TBranch        *b_part_response_recoil_low_neutron_id;   //!
   TBranch        *b_part_response_recoil_low_neutron_id_err;   //!
   TBranch        *b_part_response_recoil_low_neutron_od;   //!
   TBranch        *b_part_response_recoil_low_neutron_od_err;   //!
   TBranch        *b_part_response_recoil_low_proton_id;   //!
   TBranch        *b_part_response_recoil_low_proton_id_err;   //!
   TBranch        *b_part_response_recoil_low_proton_od;   //!
   TBranch        *b_part_response_recoil_low_proton_od_err;   //!
   TBranch        *b_part_response_recoil_meson_id;   //!
   TBranch        *b_part_response_recoil_meson_id_err;   //!
   TBranch        *b_part_response_recoil_meson_od;   //!
   TBranch        *b_part_response_recoil_meson_od_err;   //!
   TBranch        *b_part_response_recoil_mid_neutron_id;   //!
   TBranch        *b_part_response_recoil_mid_neutron_id_err;   //!
   TBranch        *b_part_response_recoil_mid_neutron_od;   //!
   TBranch        *b_part_response_recoil_mid_neutron_od_err;   //!
   TBranch        *b_part_response_recoil_mid_proton_id;   //!
   TBranch        *b_part_response_recoil_mid_proton_id_err;   //!
   TBranch        *b_part_response_recoil_mid_proton_od;   //!
   TBranch        *b_part_response_recoil_mid_proton_od_err;   //!
   TBranch        *b_part_response_recoil_muon_id;   //!
   TBranch        *b_part_response_recoil_muon_id_err;   //!
   TBranch        *b_part_response_recoil_muon_od;   //!
   TBranch        *b_part_response_recoil_muon_od_err;   //!
   TBranch        *b_part_response_recoil_other_id;   //!
   TBranch        *b_part_response_recoil_other_id_err;   //!
   TBranch        *b_part_response_recoil_other_od;   //!
   TBranch        *b_part_response_recoil_other_od_err;   //!
   TBranch        *b_part_response_recoil_proton_id;   //!
   TBranch        *b_part_response_recoil_proton_id_err;   //!
   TBranch        *b_part_response_recoil_proton_od;   //!
   TBranch        *b_part_response_recoil_proton_od_err;   //!
   TBranch        *b_part_response_recoil_xtalk_id;   //!
   TBranch        *b_part_response_recoil_xtalk_id_err;   //!
   TBranch        *b_part_response_recoil_xtalk_od;   //!
   TBranch        *b_part_response_recoil_xtalk_od_err;   //!
   TBranch        *b_phys_energy_dispersed;   //!
   TBranch        *b_phys_energy_in_road_downstream;   //!
   TBranch        *b_phys_energy_in_road_upstream;   //!
   TBranch        *b_phys_energy_unattached;   //!
   TBranch        *b_prim_vtx_smallest_opening_angle;   //!
   TBranch        *b_proton_track_endx;   //!
   TBranch        *b_proton_track_endy;   //!
   TBranch        *b_proton_track_endz;   //!
   TBranch        *b_proton_track_length;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx0mm;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx100mm;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx150mm;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx200mm;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx250mm;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx300mm;   //!
   TBranch        *b_recoil_energy_nonmuon_nonvtx50mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx0mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx100mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx150mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx200mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx250mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx300mm;   //!
   TBranch        *b_recoil_energy_nonmuon_vtx50mm;   //!
   TBranch        *b_vtx_blobs_energy;   //!
   TBranch        *b_vtx_iso_blobs_energy_outside_radius;   //!
   TBranch        *b__sz;   //!
   //TBranch        *b_;   //!
   TBranch        *b_ANN_segments;   //!
   TBranch        *b_ANN_vtx_modules_sz;   //!
   TBranch        *b_ANN_vtx_modules;   //!
   TBranch        *b_ANN_vtx_planes_sz;   //!
   TBranch        *b_ANN_vtx_planes;   //!
   TBranch        *b_VetoWall_PMTStatusMAP;   //!
   TBranch        *b_VetoWall_sixPush_paddle_wall1_sz;   //!
   TBranch        *b_VetoWall_sixPush_paddle_wall1;   //!
   TBranch        *b_VetoWall_sixPush_paddle_wall2_sz;   //!
   TBranch        *b_VetoWall_sixPush_paddle_wall2;   //!
   TBranch        *b_all_event_start_vertex_fv_minos_match_sz;   //!
   TBranch        *b_all_event_start_vertex_fv_minos_match;   //!
   TBranch        *b_clusters_found_at_end_proton_prong_sz;   //!
   TBranch        *b_clusters_found_at_end_proton_prong;   //!
   TBranch        *b_event_in_time_vertex_types_sz;   //!
   TBranch        *b_event_in_time_vertex_types;   //!
   TBranch        *b_event_track_nhits_sz;   //!
   TBranch        *b_event_track_nhits;   //!
   TBranch        *b_event_vertex_types_sz;   //!
   TBranch        *b_event_vertex_types;   //!
   TBranch        *b_improved_michel_in_vertex_point_sz;   //!
   TBranch        *b_improved_michel_in_vertex_point;   //!
   TBranch        *b_improved_michel_match_vec_sz;   //!
   TBranch        *b_improved_michel_match_vec;   //!
   TBranch        *b_improved_michel_matched_pdg_sz;   //!
   TBranch        *b_improved_michel_matched_pdg;   //!
   TBranch        *b_improved_michel_matched_primary_pdg_sz;   //!
   TBranch        *b_improved_michel_matched_primary_pdg;   //!
   TBranch        *b_improved_michel_ndigits_sz;   //!
   TBranch        *b_improved_michel_ndigits;   //!
   TBranch        *b_improved_michel_vertex_type_sz;   //!
   TBranch        *b_improved_michel_vertex_type;   //!
   TBranch        *b_improved_michel_view_vec_sz;   //!
   TBranch        *b_improved_michel_view_vec;   //!
   TBranch        *b_latticeEnergyIndices;   //!
//   TBranch        *b_latticeEnergyIndices_new;   //!
   TBranch        *b_nonvtx_iso_blobs_n_hits_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_n_hits_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_particle_pdg_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_particle_pdg_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_primary_particle_pdg_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_primary_particle_pdg_in_prong;   //!
   TBranch        *b_number_clusters_at_end_proton_prong_sz;   //!
   TBranch        *b_number_clusters_at_end_proton_prong;   //!
   TBranch        *b_recoil_lower_time_limit_sz;   //!
   TBranch        *b_recoil_lower_time_limit;   //!
   TBranch        *b_recoil_upper_time_limit_sz;   //!
   TBranch        *b_recoil_upper_time_limit;   //!
   TBranch        *b_sec_protons_prong_PDG_sz;   //!
   TBranch        *b_sec_protons_prong_PDG;   //!
   TBranch        *b_sec_protons_prong_traj_ID_sz;   //!
   TBranch        *b_sec_protons_prong_traj_ID;   //!
   //TBranch        *b_;   //!
   TBranch        *b_ANN_plane_probs;   //!
   TBranch        *b_VetoWall_muon_extrapVetoXY;   //!
   TBranch        *b_all_event_start_vertex_time_sz;   //!
   TBranch        *b_all_event_start_vertex_time;   //!
   TBranch        *b_all_event_start_vertex_time_minos_match_sz;   //!
   TBranch        *b_all_event_start_vertex_time_minos_match;   //!
   TBranch        *b_calibE_clusters_at_end_proton_prong_sz;   //!
   TBranch        *b_calibE_clusters_at_end_proton_prong;   //!
   TBranch        *b_clusters_found_at_end_proton_prong_max_distance_sz;   //!
   TBranch        *b_clusters_found_at_end_proton_prong_max_distance;   //!
   TBranch        *b_event_extra_track_PID_sz;   //!
   TBranch        *b_event_extra_track_PID;   //!
   TBranch        *b_event_in_time_tracks_energy_sz;   //!
   TBranch        *b_event_in_time_tracks_energy;   //!
   TBranch        *b_event_track_hit_energy_sz;   //!
   TBranch        *b_event_track_hit_energy;   //!
   TBranch        *b_event_track_hit_time_sz;   //!
   TBranch        *b_event_track_hit_time;   //!
   TBranch        *b_event_track_time_diff_sz;   //!
   TBranch        *b_event_track_time_diff;   //!
   TBranch        *b_event_tracks_energy_sz;   //!
   TBranch        *b_event_tracks_energy;   //!
   TBranch        *b_event_vertex_time_diff_sz;   //!
   TBranch        *b_event_vertex_time_diff;   //!
   TBranch        *b_improved_michel_data_energy_fraction_sz;   //!
   TBranch        *b_improved_michel_data_energy_fraction;   //!
   TBranch        *b_improved_michel_dist_vec_sz;   //!
   TBranch        *b_improved_michel_dist_vec;   //!
   TBranch        *b_improved_michel_ecalo_vec_sz;   //!
   TBranch        *b_improved_michel_ecalo_vec;   //!
   TBranch        *b_improved_michel_evis_vec_sz;   //!
   TBranch        *b_improved_michel_evis_vec;   //!
   TBranch        *b_improved_michel_hit_charges_sz;   //!
   TBranch        *b_improved_michel_hit_charges;   //!
   TBranch        *b_improved_michel_hit_time_diff_cluster_sz;   //!
   TBranch        *b_improved_michel_hit_time_diff_cluster;   //!
   TBranch        *b_improved_michel_hit_time_diff_vtx_sz;   //!
   TBranch        *b_improved_michel_hit_time_diff_vtx;   //!
   TBranch        *b_improved_michel_hit_times_sz;   //!
   TBranch        *b_improved_michel_hit_times;   //!
   TBranch        *b_improved_michel_matched_energy_fraction_sz;   //!
   TBranch        *b_improved_michel_matched_energy_fraction;   //!
   TBranch        *b_improved_michel_tdiff_vec_sz;   //!
   TBranch        *b_improved_michel_tdiff_vec;   //!
   TBranch        *b_improved_michel_tvec_sz;   //!
   TBranch        *b_improved_michel_tvec;   //!
   TBranch        *b_improved_michel_uvec_sz;   //!
   TBranch        *b_improved_michel_uvec;   //!
   TBranch        *b_improved_michel_vvec_sz;   //!
   TBranch        *b_improved_michel_vvec;   //!
   TBranch        *b_improved_michel_xvec_sz;   //!
   TBranch        *b_improved_michel_xvec;   //!
   TBranch        *b_improved_michel_yvec_sz;   //!
   TBranch        *b_improved_michel_yvec;   //!
   TBranch        *b_improved_michel_zvec_sz;   //!
   TBranch        *b_improved_michel_zvec;   //!
   TBranch        *b_latticeNormEnergySums;   //!
   TBranch        *b_latticeRelativeTimes;   //!
//   TBranch        *b_latticeNormEnergySums_new;   //!
//   TBranch        *b_latticeRelativeTimes_new;   //!
   TBranch        *b_muon_thetaX_allNodes_sz;   //!
   TBranch        *b_muon_thetaX_allNodes;   //!
   TBranch        *b_muon_thetaY_allNodes_sz;   //!
   TBranch        *b_muon_thetaY_allNodes;   //!
   TBranch        *b_muon_theta_allNodes_sz;   //!
   TBranch        *b_muon_theta_allNodes;   //!
   TBranch        *b_nonvtx_iso_blobs_data_energy_fraction_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_data_energy_fraction_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_distance_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_distance_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_earliest_hit_time_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_earliest_hit_time_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_energy_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_energy_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_hit_energy_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_hit_energy_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_module_u_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_module_u_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_module_v_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_module_v_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_module_x_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_highest_module_x_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_latest_hit_time_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_latest_hit_time_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_lowest_module_u_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_lowest_module_u_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_lowest_module_v_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_lowest_module_v_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_lowest_module_x_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_lowest_module_x_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_matched_energy_fraction_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_matched_energy_fraction_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_start_position_x_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_start_position_x_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_start_position_y_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_start_position_y_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_start_position_z_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_start_position_z_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_time_difference_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_time_difference_in_prong;   //!
   TBranch        *b_nonvtx_iso_blobs_time_in_prong_sz;   //!
   TBranch        *b_nonvtx_iso_blobs_time_in_prong;   //!
   TBranch        *b_proton_prong_4p;   //!
   TBranch        *b_proton_prong_tpos;   //!
   TBranch        *b_proton_prong_tpos_t_sz;   //!
   TBranch        *b_proton_prong_tpos_t;   //!
   TBranch        *b_proton_prong_tpos_x_sz;   //!
   TBranch        *b_proton_prong_tpos_x;   //!
   TBranch        *b_proton_prong_tpos_y_sz;   //!
   TBranch        *b_proton_prong_tpos_y;   //!
   TBranch        *b_proton_prong_tpos_z_sz;   //!
   TBranch        *b_proton_prong_tpos_z;   //!
   TBranch        *b_recoil_data_fraction_sz;   //!
   TBranch        *b_recoil_data_fraction;   //!
   TBranch        *b_recoil_summed_energy_sz;   //!
   TBranch        *b_recoil_summed_energy;   //!
   TBranch        *b_recoil_summed_energy_edge_sz;   //!
   TBranch        *b_recoil_summed_energy_edge;   //!
   TBranch        *b_seco_protons_prong_4p_E_sz;   //!
   TBranch        *b_seco_protons_prong_4p_E;   //!
   TBranch        *b_seco_protons_prong_4p_px_sz;   //!
   TBranch        *b_seco_protons_prong_4p_px;   //!
   TBranch        *b_seco_protons_prong_4p_py_sz;   //!
   TBranch        *b_seco_protons_prong_4p_py;   //!
   TBranch        *b_seco_protons_prong_4p_pz_sz;   //!
   TBranch        *b_seco_protons_prong_4p_pz;   //!
   TBranch        *b_slice_hit_energy_sz;   //!
   TBranch        *b_slice_hit_energy;   //!
   TBranch        *b_slice_hit_time_sz;   //!
   TBranch        *b_slice_hit_time;   //!
   TBranch        *b_visE_clusters_at_end_proton_prong_sz;   //!
   TBranch        *b_visE_clusters_at_end_proton_prong;   //!
   TBranch        *b_vtx_blob_radius;   //!
   TBranch        *b_vtx_blobs_iso_distance_in_prong_sz;   //!
   TBranch        *b_vtx_blobs_iso_distance_in_prong;   //!
   TBranch        *b_vtx_blobs_iso_energy_clusters_outside_radius_in_prong_sz;   //!
   TBranch        *b_vtx_blobs_iso_energy_clusters_outside_radius_in_prong;   //!
   TBranch        *b_vtx_blobs_iso_energy_in_prong_sz;   //!
   TBranch        *b_vtx_blobs_iso_energy_in_prong;   //!
   TBranch        *b_vtx_blobs_vtx_distance_in_prong_sz;   //!
   TBranch        *b_vtx_blobs_vtx_distance_in_prong;   //!
   TBranch        *b_vtx_blobs_vtx_energy_in_prong_sz;   //!
   TBranch        *b_vtx_blobs_vtx_energy_in_prong;   //!
   TBranch        *b_truth_has_physics_event;   //!
   TBranch        *b_truth_pass_MasterAnaDev;   //!
   TBranch        *b_truth_is_fiducial;   //!
   TBranch        *b_truth_reco_has_muon;   //!
   TBranch        *b_truth_reco_has_int_vtx;   //!
   //TBranch        *b_truth_;   //!
   TBranch        *b_truth_hadronReweightNPaths;   //!
   TBranch        *b_truth_hadronReweightNPoints;   //!
   TBranch        *b_truth_in_fiducial_area;   //!
   TBranch        *b_truth_reco_has_muon_charge;   //!
   TBranch        *b_truth_reco_has_single_proton;   //!
   TBranch        *b_truth_reco_is_fiducial;   //!
   TBranch        *b_truth_reco_is_minos_match;   //!
   TBranch        *b_truth_reco_muon_is_minos_match_stub;   //!
   TBranch        *b_truth_reco_muon_is_minos_match_track;   //!
   TBranch        *b_truth_reco_pass_MasterAnaDev_precuts;   //!
   TBranch        *b_truth_targetID;   //!
   TBranch        *b_truth_targetZ;   //!
   TBranch        *b_truth_target_code;   //!
   TBranch        *b_truth_vtx_module;   //!
   TBranch        *b_truth_vtx_plane;   //!
   //TBranch        *b_truth_;   //!
   TBranch        *b_truth_muon_theta;   //!
   TBranch        *b_truth_target_dist_to_division;   //!
   TBranch        *b_truth_target_zDist;   //!
   TBranch        *b_truth__sz;   //!
   //TBranch        *b_truth_;   //!
   TBranch        *b_truth_hadronReweightID_sz;   //!
   TBranch        *b_truth_hadronReweightID;   //!
   TBranch        *b_truth_hadronReweightIntCode_sz;   //!
   TBranch        *b_truth_hadronReweightIntCode;   //!
   TBranch        *b_truth_hadronReweightIntCodePerSegment_sz;   //!
   TBranch        *b_truth_hadronReweightIntCodePerSegment;   //!
   TBranch        *b_truth_hadronReweightNTrajPoints_sz;   //!
   TBranch        *b_truth_hadronReweightNTrajPoints;   //!
   TBranch        *b_truth_hadronReweightNTrajPointsSaved_sz;   //!
   TBranch        *b_truth_hadronReweightNTrajPointsSaved;   //!
   TBranch        *b_truth_hadronReweightNuke_sz;   //!
   TBranch        *b_truth_hadronReweightNuke;   //!
   TBranch        *b_truth_hadronReweightPDG_sz;   //!
   TBranch        *b_truth_hadronReweightPDG;   //!
   TBranch        *b_truth_hadronReweightParentID_sz;   //!
   TBranch        *b_truth_hadronReweightParentID;   //!
   TBranch        *b_truth_hadronReweightTrackID_sz;   //!
   TBranch        *b_truth_hadronReweightTrackID;   //!
   TBranch        *b_truth_hadronReweightTrajPointFlag_sz;   //!
   TBranch        *b_truth_hadronReweightTrajPointFlag;   //!
   //TBranch        *b_truth_;   //!
   TBranch        *b_genie_wgt_n_shifts;   //!
   TBranch        *b_truth_genie_wgt_AGKYxF1pi;   //!
   TBranch        *b_truth_genie_wgt_AhtBY;   //!
   TBranch        *b_truth_genie_wgt_BhtBY;   //!
   TBranch        *b_truth_genie_wgt_CCQEPauliSupViaKF;   //!
   TBranch        *b_truth_genie_wgt_CV1uBY;   //!
   TBranch        *b_truth_genie_wgt_CV2uBY;   //!
   TBranch        *b_truth_genie_wgt_EtaNCEL;   //!
   TBranch        *b_truth_genie_wgt_FrAbs_N;   //!
   TBranch        *b_truth_genie_wgt_FrAbs_pi;   //!
   TBranch        *b_truth_genie_wgt_FrCEx_N;   //!
   TBranch        *b_truth_genie_wgt_FrCEx_pi;   //!
   TBranch        *b_truth_genie_wgt_FrElas_N;   //!
   TBranch        *b_truth_genie_wgt_FrElas_pi;   //!
   TBranch        *b_truth_genie_wgt_FrInel_N;   //!
   TBranch        *b_truth_genie_wgt_FrInel_pi;   //!
   TBranch        *b_truth_genie_wgt_FrPiProd_N;   //!
   TBranch        *b_truth_genie_wgt_FrPiProd_pi;   //!
   TBranch        *b_truth_genie_wgt_MFP_N;   //!
   TBranch        *b_truth_genie_wgt_MFP_pi;   //!
   TBranch        *b_truth_genie_wgt_MaCCQE;   //!
   TBranch        *b_truth_genie_wgt_MaCCQEshape;   //!
   TBranch        *b_truth_genie_wgt_MaNCEL;   //!
   TBranch        *b_truth_genie_wgt_MaRES;   //!
   TBranch        *b_truth_genie_wgt_MvRES;   //!
   TBranch        *b_truth_genie_wgt_NormCCQE;   //!
   TBranch        *b_truth_genie_wgt_NormCCRES;   //!
   TBranch        *b_truth_genie_wgt_NormDISCC;   //!
   TBranch        *b_truth_genie_wgt_NormNCRES;   //!
   TBranch        *b_truth_genie_wgt_RDecBR1gamma;   //!
   TBranch        *b_truth_genie_wgt_Rvn1pi;   //!
   TBranch        *b_truth_genie_wgt_Rvn2pi;   //!
   TBranch        *b_truth_genie_wgt_Rvp1pi;   //!
   TBranch        *b_truth_genie_wgt_Rvp2pi;   //!
   TBranch        *b_truth_genie_wgt_Theta_Delta2Npi;   //!
   TBranch        *b_truth_genie_wgt_VecFFCCQEshape;   //!
   TBranch        *b_truth_genie_wgt_shifts;   //!
   TBranch        *b_truth_hadronReweightColumnarDensity_sz;   //!
   TBranch        *b_truth_hadronReweightColumnarDensity;   //!
   TBranch        *b_truth_hadronReweightFinalE_sz;   //!
   TBranch        *b_truth_hadronReweightFinalE;   //!
   TBranch        *b_truth_hadronReweightFinalSigmaE_sz;   //!
   TBranch        *b_truth_hadronReweightFinalSigmaE;   //!
   TBranch        *b_truth_hadronReweightInitialE_sz;   //!
   TBranch        *b_truth_hadronReweightInitialE;   //!
   TBranch        *b_truth_hadronReweightInitialSigmaE_sz;   //!
   TBranch        *b_truth_hadronReweightInitialSigmaE;   //!
   TBranch        *b_truth_hadronReweightPosX_sz;   //!
   TBranch        *b_truth_hadronReweightPosX;   //!
   TBranch        *b_truth_hadronReweightPosY_sz;   //!
   TBranch        *b_truth_hadronReweightPosY;   //!
   TBranch        *b_truth_hadronReweightPosZ_sz;   //!
   TBranch        *b_truth_hadronReweightPosZ;   //!
   TBranch        *b_truth_hadronReweightTimeDelta_sz;   //!
   TBranch        *b_truth_hadronReweightTimeDelta;   //!
   TBranch        *b_MasterAnaDev_nuFlavor;   //!
   TBranch        *b_MasterAnaDev_nuHelicity;   //!
   TBranch        *b_MasterAnaDev_intCurrent;   //!
   TBranch        *b_MasterAnaDev_intType;   //!
   TBranch        *b_MasterAnaDev_E;   //!
   TBranch        *b_MasterAnaDev_Q2;   //!
   TBranch        *b_MasterAnaDev_x;   //!
   TBranch        *b_MasterAnaDev_y;   //!
   TBranch        *b_MasterAnaDev_W;   //!
   TBranch        *b_MasterAnaDev_score;   //!
   TBranch        *b_MasterAnaDev_leptonE;   //!
   TBranch        *b_MasterAnaDev_vtx;   //!
   TBranch        *b_MasterAnaDev_minos_trk_is_contained;   //!
   TBranch        *b_MasterAnaDev_minos_trk_is_ok;   //!
   TBranch        *b_MasterAnaDev_minos_used_range;   //!
   TBranch        *b_MasterAnaDev_minos_used_curvature;   //!
   TBranch        *b_MasterAnaDev_EvtHasNBlobIncTracks;   //!
   TBranch        *b_MasterAnaDev_EvtHasNBlobTracks;   //!
   TBranch        *b_MasterAnaDev_in_fiducial_area;   //!
   TBranch        *b_MasterAnaDev_minos_trk_end_plane;   //!
   TBranch        *b_MasterAnaDev_minos_trk_quality;   //!
   TBranch        *b_MasterAnaDev_proton_patternRec;   //!
   TBranch        *b_MasterAnaDev_proton_prongType;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_vtx_plane;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_numFSMuons;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLeptonPDG;   //!
   TBranch        *b_MasterAnaDev_targetID;   //!
   TBranch        *b_MasterAnaDev_targetZ;   //!
   TBranch        *b_MasterAnaDev_target_code;   //!
   TBranch        *b_MasterAnaDev_vtx_module;   //!
   TBranch        *b_MasterAnaDev_vtx_plane;   //!
   TBranch        *b_MasterAnaDev_Q2_CCQE;   //!
   TBranch        *b_MasterAnaDev_Q2_Inclusive;   //!
   TBranch        *b_MasterAnaDev_Q2_wide_window;   //!
   TBranch        *b_MasterAnaDev_enu_muon;   //!
   TBranch        *b_MasterAnaDev_enu_proton;   //!
   TBranch        *b_MasterAnaDev_minos_trk_bave;   //!
   TBranch        *b_MasterAnaDev_minos_trk_chi2;   //!
   TBranch        *b_MasterAnaDev_minos_trk_end_u;   //!
   TBranch        *b_MasterAnaDev_minos_trk_end_v;   //!
   TBranch        *b_MasterAnaDev_minos_trk_end_x;   //!
   TBranch        *b_MasterAnaDev_minos_trk_end_y;   //!
   TBranch        *b_MasterAnaDev_minos_trk_end_z;   //!
   TBranch        *b_MasterAnaDev_minos_trk_eqp;   //!
   TBranch        *b_MasterAnaDev_minos_trk_eqp_qp;   //!
   TBranch        *b_MasterAnaDev_minos_trk_fit_pass;   //!
   TBranch        *b_MasterAnaDev_minos_trk_ndf;   //!
   TBranch        *b_MasterAnaDev_minos_trk_p;   //!
   TBranch        *b_MasterAnaDev_minos_trk_p_curvature;   //!
   TBranch        *b_MasterAnaDev_minos_trk_p_range;   //!
   TBranch        *b_MasterAnaDev_minos_trk_qp;   //!
   TBranch        *b_MasterAnaDev_minos_trk_vtx_x;   //!
   TBranch        *b_MasterAnaDev_minos_trk_vtx_y;   //!
   TBranch        *b_MasterAnaDev_minos_trk_vtx_z;   //!
   TBranch        *b_MasterAnaDev_muon_E;   //!
   TBranch        *b_MasterAnaDev_muon_P;   //!
   TBranch        *b_MasterAnaDev_muon_T;   //!
   TBranch        *b_MasterAnaDev_muon_score;   //!
   TBranch        *b_MasterAnaDev_muon_theta;   //!
   TBranch        *b_MasterAnaDev_pion_score;   //!
   TBranch        *b_MasterAnaDev_pion_score1;   //!
   TBranch        *b_MasterAnaDev_pion_score2;   //!
   TBranch        *b_MasterAnaDev_proton_E_BetheBloch_biasDown;   //!
   TBranch        *b_MasterAnaDev_proton_E_BetheBloch_biasUp;   //!
   TBranch        *b_MasterAnaDev_proton_E_Birks_bias;   //!
   TBranch        *b_MasterAnaDev_proton_E_MEU_biasDown;   //!
   TBranch        *b_MasterAnaDev_proton_E_MEU_biasUp;   //!
   TBranch        *b_MasterAnaDev_proton_E_Mass_biasDown;   //!
   TBranch        *b_MasterAnaDev_proton_E_Mass_biasUp;   //!
   TBranch        *b_MasterAnaDev_proton_E_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_proton_P_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_proton_Px_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_proton_Py_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_proton_Pz_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_proton_T_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_proton_calib_energy;   //!
   TBranch        *b_MasterAnaDev_proton_endPointX;   //!
   TBranch        *b_MasterAnaDev_proton_endPointY;   //!
   TBranch        *b_MasterAnaDev_proton_endPointZ;   //!
   TBranch        *b_MasterAnaDev_proton_phi;   //!
   TBranch        *b_MasterAnaDev_proton_score;   //!
   TBranch        *b_MasterAnaDev_proton_score1;   //!
   TBranch        *b_MasterAnaDev_proton_score1_BetheBloch_biasDown;   //!
   TBranch        *b_MasterAnaDev_proton_score1_BetheBloch_biasUp;   //!
   TBranch        *b_MasterAnaDev_proton_score1_Birks_bias;   //!
   TBranch        *b_MasterAnaDev_proton_score1_MEU_biasDown;   //!
   TBranch        *b_MasterAnaDev_proton_score1_MEU_biasUp;   //!
   TBranch        *b_MasterAnaDev_proton_score1_Mass_biasDown;   //!
   TBranch        *b_MasterAnaDev_proton_score1_Mass_biasUp;   //!
   TBranch        *b_MasterAnaDev_proton_score2;   //!
   TBranch        *b_MasterAnaDev_proton_startPointX;   //!
   TBranch        *b_MasterAnaDev_proton_startPointY;   //!
   TBranch        *b_MasterAnaDev_proton_startPointZ;   //!
   TBranch        *b_MasterAnaDev_proton_theta;   //!
   TBranch        *b_MasterAnaDev_proton_thetaX;   //!
   TBranch        *b_MasterAnaDev_proton_thetaY;   //!
   TBranch        *b_MasterAnaDev_proton_theta_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_bdL;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_end_dcosx;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_end_dcosy;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_end_dcosz;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_vtx_dcosx;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_vtx_dcosy;   //!
   TBranch        *b_MasterAnaDev_r_minos_trk_vtx_dcosz;   //!
   TBranch        *b_MasterAnaDev_recoil_E;   //!
   TBranch        *b_MasterAnaDev_recoil_E_wide_window;   //!
   TBranch        *b_MasterAnaDev_recoil_passivecorrected;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPx;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPy;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPz;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjX;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjY;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjZ;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalPx;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalPy;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalPz;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalX;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalY;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalZ;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvInitPx;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvInitPy;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvInitPz;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvInitX;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvInitY;   //!
   TBranch        *b_MasterAnaDev_t_minos_trk_primFSLepMnvInitZ;   //!
   TBranch        *b_MasterAnaDev_target_dist_to_division;   //!
   TBranch        *b_MasterAnaDev_target_zDist;   //!
   TBranch        *b_MasterAnaDev_visible_E;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDRho_order_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDRho_order;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDTheta_order_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDTheta_order;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDRho_order_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDRho_order;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDTheta_order_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDTheta_order;   //!
   TBranch        *b_MasterAnaDev_Blob2DView_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DView;   //!
   TBranch        *b_MasterAnaDev_BlobAvgE_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobAvgE_order;   //!
   TBranch        *b_MasterAnaDev_BlobClusID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobClusID;   //!
   TBranch        *b_MasterAnaDev_BlobClusterMaxE_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobClusterMaxE_order;   //!
   TBranch        *b_MasterAnaDev_BlobID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobID;   //!
   TBranch        *b_MasterAnaDev_BlobIs3D_sz;   //!
   TBranch        *b_MasterAnaDev_BlobIs3D;   //!
   TBranch        *b_MasterAnaDev_BlobIsFiducial_sz;   //!
   TBranch        *b_MasterAnaDev_BlobIsFiducial;   //!
   TBranch        *b_MasterAnaDev_BlobMCPID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCPID;   //!
   TBranch        *b_MasterAnaDev_BlobMCParentTrackID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCParentTrackID;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackID;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDRho_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDRho_order;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDTheta_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDTheta_order;   //!
   TBranch        *b_MasterAnaDev_BlobNClusters_sz;   //!
   TBranch        *b_MasterAnaDev_BlobNClusters;   //!
   TBranch        *b_MasterAnaDev_BlobNHeavyIonizingClusters_sz;   //!
   TBranch        *b_MasterAnaDev_BlobNHeavyIonizingClusters;   //!
   TBranch        *b_MasterAnaDev_BlobNTracks_sz;   //!
   TBranch        *b_MasterAnaDev_BlobNTracks;   //!
   TBranch        *b_MasterAnaDev_BlobPIDPerCluster_sz;   //!
   TBranch        *b_MasterAnaDev_BlobPIDPerCluster;   //!
   TBranch        *b_MasterAnaDev_BlobParentMCPID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobParentMCPID;   //!
   TBranch        *b_MasterAnaDev_BlobTopMCPID_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTopMCPID;   //!
   TBranch        *b_MasterAnaDev_BlobTotalE_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTotalE_order;   //!
   TBranch        *b_MasterAnaDev_BlobTrackNClus_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackNClus;   //!
   TBranch        *b_MasterAnaDev_BlobTrackNNode_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackNNode;   //!
   TBranch        *b_MasterAnaDev_BlobViewPerCluster_sz;   //!
   TBranch        *b_MasterAnaDev_BlobViewPerCluster;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDR_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDR_order;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDZ_order_sz;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDZ_order;   //!
   TBranch        *b_MasterAnaDev_RecoPattern_sz;   //!
   TBranch        *b_MasterAnaDev_RecoPattern;   //!
   TBranch        *b_MasterAnaDev_ref_targZ;   //!
   TBranch        *b_MasterAnaDev_sec_protons_nodes_index_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_nodes_index;   //!
   TBranch        *b_MasterAnaDev_sec_protons_patternRec_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_patternRec;   //!
   TBranch        *b_MasterAnaDev_sec_protons_prongType_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_prongType;   //!
   TBranch        *b_MasterAnaDev_Blob2DBeamDTPos_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DBeamDTPos;   //!
   TBranch        *b_MasterAnaDev_Blob2DBeamDZ_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DBeamDZ;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDRho_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDRho;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDTheta_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DMuonDTheta;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDRho_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDRho;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDTheta_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDTheta;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDZ_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DPartDZ;   //!
   TBranch        *b_MasterAnaDev_Blob2DVtxDR_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DVtxDR;   //!
   TBranch        *b_MasterAnaDev_Blob2DVtxDTPos_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DVtxDTPos;   //!
   TBranch        *b_MasterAnaDev_Blob2DVtxDZ_sz;   //!
   TBranch        *b_MasterAnaDev_Blob2DVtxDZ;   //!
   TBranch        *b_MasterAnaDev_BlobAvgE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobAvgE;   //!
   TBranch        *b_MasterAnaDev_BlobBeamDZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobBeamDZ;   //!
   TBranch        *b_MasterAnaDev_BlobBegT_sz;   //!
   TBranch        *b_MasterAnaDev_BlobBegT;   //!
   TBranch        *b_MasterAnaDev_BlobBegX_sz;   //!
   TBranch        *b_MasterAnaDev_BlobBegX;   //!
   TBranch        *b_MasterAnaDev_BlobBegY_sz;   //!
   TBranch        *b_MasterAnaDev_BlobBegY;   //!
   TBranch        *b_MasterAnaDev_BlobBegZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobBegZ;   //!
   TBranch        *b_MasterAnaDev_BlobClusterMaxE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobClusterMaxE;   //!
   TBranch        *b_MasterAnaDev_BlobClusterMinE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobClusterMinE;   //!
   TBranch        *b_MasterAnaDev_BlobCoplanarityAngle_sz;   //!
   TBranch        *b_MasterAnaDev_BlobCoplanarityAngle;   //!
   TBranch        *b_MasterAnaDev_BlobEndT_sz;   //!
   TBranch        *b_MasterAnaDev_BlobEndT;   //!
   TBranch        *b_MasterAnaDev_BlobEndX_sz;   //!
   TBranch        *b_MasterAnaDev_BlobEndX;   //!
   TBranch        *b_MasterAnaDev_BlobEndY_sz;   //!
   TBranch        *b_MasterAnaDev_BlobEndY;   //!
   TBranch        *b_MasterAnaDev_BlobEndZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobEndZ;   //!
   TBranch        *b_MasterAnaDev_BlobEnergyPerCluster_sz;   //!
   TBranch        *b_MasterAnaDev_BlobEnergyPerCluster;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackE;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackPx_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackPx;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackPy_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackPy;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackPz_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackPz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackT_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackT;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackX_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackX;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackY_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackY;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMCTrackZ;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDRho_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDRho;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDTheta_sz;   //!
   TBranch        *b_MasterAnaDev_BlobMuonDTheta;   //!
   TBranch        *b_MasterAnaDev_BlobReactionPlaneAngle_sz;   //!
   TBranch        *b_MasterAnaDev_BlobReactionPlaneAngle;   //!
   TBranch        *b_MasterAnaDev_BlobT_sz;   //!
   TBranch        *b_MasterAnaDev_BlobT;   //!
   TBranch        *b_MasterAnaDev_BlobTPos_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTPos;   //!
   TBranch        *b_MasterAnaDev_BlobTPosPerCluster_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTPosPerCluster;   //!
   TBranch        *b_MasterAnaDev_BlobTimePerCluster_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTimePerCluster;   //!
   TBranch        *b_MasterAnaDev_BlobTotalE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTotalE;   //!
   TBranch        *b_MasterAnaDev_BlobTrackAx_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackAx;   //!
   TBranch        *b_MasterAnaDev_BlobTrackAy_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackAy;   //!
   TBranch        *b_MasterAnaDev_BlobTrackE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackE;   //!
   TBranch        *b_MasterAnaDev_BlobTrackL_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackL;   //!
   TBranch        *b_MasterAnaDev_BlobTrackLLRPion_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackLLRPion;   //!
   TBranch        *b_MasterAnaDev_BlobTrackLLRProton_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackLLRProton;   //!
   TBranch        *b_MasterAnaDev_BlobTrackNodeEnergy_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackNodeEnergy;   //!
   TBranch        *b_MasterAnaDev_BlobTrackT_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackT;   //!
   TBranch        *b_MasterAnaDev_BlobTrackX_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackX;   //!
   TBranch        *b_MasterAnaDev_BlobTrackY_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackY;   //!
   TBranch        *b_MasterAnaDev_BlobTrackZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackZ;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectron_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectron;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronE;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronPx_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronPx;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronPy_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronPy;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronPz_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXElectronPz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPion_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPion;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionE;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionPx_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionPx;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionPy_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionPy;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionPz_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXPionPz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProton_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProton;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonE_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonE;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonPx_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonPx;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonPy_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonPy;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonPz_sz;   //!
   TBranch        *b_MasterAnaDev_BlobTrackdEdXProtonPz;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDR_sz;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDR;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDTPos_sz;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDTPos;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobVtxDZ;   //!
   TBranch        *b_MasterAnaDev_BlobX_sz;   //!
   TBranch        *b_MasterAnaDev_BlobX;   //!
   TBranch        *b_MasterAnaDev_BlobY_sz;   //!
   TBranch        *b_MasterAnaDev_BlobY;   //!
   TBranch        *b_MasterAnaDev_BlobZ_sz;   //!
   TBranch        *b_MasterAnaDev_BlobZ;   //!
   TBranch        *b_MasterAnaDev_BlobZPerCluster_sz;   //!
   TBranch        *b_MasterAnaDev_BlobZPerCluster;   //!
   TBranch        *b_MasterAnaDev_HadronE_sz;   //!
   TBranch        *b_MasterAnaDev_HadronE;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Election_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Election;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Muon_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Muon;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Neutron_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Neutron;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_NonParticle_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_NonParticle;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Others_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Others;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Photon_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Photon;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Pi0_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Pi0;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_PiMinus_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_PiMinus;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_PiPlus_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_PiPlus;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Proton_sz;   //!
   TBranch        *b_MasterAnaDev_MCEnergyFrac_Proton;   //!
   TBranch        *b_MasterAnaDev_ReconstructedHadronMass_sz;   //!
   TBranch        *b_MasterAnaDev_ReconstructedHadronMass;   //!
   TBranch        *b_MasterAnaDev_proton_nodes_E_sz;   //!
   TBranch        *b_MasterAnaDev_proton_nodes_E;   //!
   TBranch        *b_MasterAnaDev_proton_nodes_nodesNormE_sz;   //!
   TBranch        *b_MasterAnaDev_proton_nodes_nodesNormE;   //!
   TBranch        *b_MasterAnaDev_ref_dist_to_division;   //!
   TBranch        *b_MasterAnaDev_ref_dist_to_target;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_BetheBloch_biasDown_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_BetheBloch_biasDown;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_BetheBloch_biasUp_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_BetheBloch_biasUp;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_Birks_bias_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_Birks_bias;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_MEU_biasDown_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_MEU_biasDown;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_MEU_biasUp_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_MEU_biasUp;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_Mass_biasDown_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_Mass_biasDown;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_Mass_biasUp_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_Mass_biasUp;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_E_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sec_protons_P_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_P_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sec_protons_Px_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_Px_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sec_protons_Py_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_Py_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sec_protons_Pz_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_Pz_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sec_protons_T_fromCalo_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_T_fromCalo;   //!
   TBranch        *b_MasterAnaDev_sec_protons_T_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_T_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sec_protons_nodes_E_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_nodes_E;   //!
   TBranch        *b_MasterAnaDev_sec_protons_nodes_nodesNormE_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_nodes_nodesNormE;   //!
   TBranch        *b_MasterAnaDev_sec_protons_pion_scores_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_pion_scores;   //!
   TBranch        *b_MasterAnaDev_sec_protons_pion_scores1_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_pion_scores1;   //!
   TBranch        *b_MasterAnaDev_sec_protons_pion_scores2_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_pion_scores2;   //!
   TBranch        *b_MasterAnaDev_sec_protons_proton_scores_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_proton_scores;   //!
   TBranch        *b_MasterAnaDev_sec_protons_proton_scores1_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_proton_scores1;   //!
   TBranch        *b_MasterAnaDev_sec_protons_proton_scores2_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_proton_scores2;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_BetheBloch_biasDown_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_BetheBloch_biasDown;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_BetheBloch_biasUp_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_BetheBloch_biasUp;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_Birks_bias_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_Birks_bias;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_MEU_biasDown_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_MEU_biasDown;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_MEU_biasUp_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_MEU_biasUp;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_Mass_biasDown_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_Mass_biasDown;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_Mass_biasUp_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_score1_Mass_biasUp;   //!
   TBranch        *b_MasterAnaDev_sec_protons_theta_fromdEdx_sz;   //!
   TBranch        *b_MasterAnaDev_sec_protons_theta_fromdEdx;   //!
   TBranch        *b_MasterAnaDev_sys_muon_curve_energy_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_energy_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_minerva_energy_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_qSquared_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_range_energy_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_wSquared_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_xbj_shift;   //!
   TBranch        *b_MasterAnaDev_sys_muon_y_shift;   //!
   TBranch        *b_MasterAnaDev_sys_nu_energy_shift;   //!
   TBranch        *b_MasterAnaDev_sys_recoil_energy_shift;   //!
   TBranch        *b_MasterAnaDev_sys_recoil_qSquared_shift;   //!
   TBranch        *b_MasterAnaDev_sys_recoil_wSquared_shift;   //!
   TBranch        *b_MasterAnaDev_sys_recoil_xbj_shift;   //!
   TBranch        *b_MasterAnaDev_sys_recoil_y_shift;   //!
   TBranch        *b_MasterAnaDev_sys_total_qSquared_shift;   //!
   TBranch        *b_MasterAnaDev_sys_total_wSquared_shift;   //!
   TBranch        *b_MasterAnaDev_sys_total_xbj_shift;   //!
   TBranch        *b_MasterAnaDev_sys_total_y_shift;   //!
   TBranch        *b_n_prongs;   //!
   TBranch        *b_prong_nParticles;   //!
   TBranch        *b_prong_;   //!
   TBranch        *b_prong_BackMiddleRatio;   //!
   TBranch        *b_prong_CalCorrectedEnergy;   //!
   TBranch        *b_prong_ECALCalibE;   //!
   TBranch        *b_prong_ECALVisE;   //!
   TBranch        *b_prong_FirstFireFraction;   //!
   TBranch        *b_prong_HCALCalibE;   //!
   TBranch        *b_prong_HCALVisE;   //!
   TBranch        *b_prong_MedianPlaneShowerWidth;   //!
   TBranch        *b_prong_NonMIPClusFrac;   //!
   TBranch        *b_prong_ODVisE;   //!
   TBranch        *b_prong_SideECALVisE;   //!
   TBranch        *b_prong_TotalVisE;   //!
   TBranch        *b_prong_TrackerCalibE;   //!
   TBranch        *b_prong_TransverseGapScore;   //!
   TBranch        *b_prong_TrimmedCaloEnergy;   //!
   TBranch        *b_prong_TrimmedVisE;   //!
   TBranch        *b_prong_UViewE;   //!
   TBranch        *b_prong_VViewE;   //!
   TBranch        *b_prong_XViewE;   //!
   TBranch        *b_prong_dEdXMean;   //!
   TBranch        *b_prong_dEdXMeanFrontTracker;   //!
   TBranch        *b_prong_axis_vector;   //!
   TBranch        *b_prong_axis_vertex;   //!
   TBranch        *b_prong_dEdXs;   //!
   TBranch        *b_prong_dEdXs_dz;   //!
   TBranch        *b_prong_dEdXs_projection;   //!
   TBranch        *b_prong_source_vertex;   //!
   TBranch        *b_ev_run;   //!
   TBranch        *b_ev_subrun;   //!
   TBranch        *b_ev_detector;   //!
   TBranch        *b_ev_triggerType;   //!
   TBranch        *b_ev_gate;   //!
   TBranch        *b_ev_global_gate;   //!
   TBranch        *b_ev_gps_time_sec;   //!
   TBranch        *b_ev_gps_time_usec;   //!
   TBranch        *b_numi_x_pos;   //!
   TBranch        *b_numi_y_pos;   //!
   TBranch        *b_batch_structure;   //!
   TBranch        *b_numi_minos_time_sec;   //!
   TBranch        *b_numi_minos_time_nsec;   //!
   TBranch        *b_numi_database_sec;   //!
   TBranch        *b_numi_database_nsec;   //!
   TBranch        *b_numi_is_good_beam_spill;   //!
   TBranch        *b_numi_is_bad_pot_data_spill;   //!
   TBranch        *b_numi_is_no_beam_spill;   //!
   TBranch        *b_numi_is_bad_data_spill;   //!
   TBranch        *b_numi_is_bad_profile_x_width_data;   //!
   TBranch        *b_numi_is_bad_profile_y_width_data;   //!
   TBranch        *b_numi_is_bad_x_position_data;   //!
   TBranch        *b_numi_is_bad_y_position_data;   //!
   TBranch        *b_numi_is_bad_horn_curr_data;   //!
   TBranch        *b_numi_is_bad_nearest_time_spill;   //!
   TBranch        *b_numi_is_bad_beam_spill;   //!
   TBranch        *b_numi_is_bad_pot_spill;   //!
   TBranch        *b_numi_is_bad_x_pos;   //!
   TBranch        *b_numi_is_bad_y_pos;   //!
   TBranch        *b_numi_is_bad_beam_size;   //!
   TBranch        *b_numi_is_bad_profile_width_x;   //!
   TBranch        *b_numi_is_bad_profile_width_y;   //!
   TBranch        *b_numi_is_bad_horn_curr;   //!
   TBranch        *b_numi_is_target_out_spill;   //!
   TBranch        *b_numi_is_bad_beam_type_spill;   //!
   TBranch        *b_numi_is_bad_beam_frac_on_tgt_spill;   //!
   TBranch        *b_numi_is_good_position;   //!
   TBranch        *b_numi_is_good_width;   //!
   TBranch        *b_numi_is_good_toroids;   //!
   TBranch        *b_numi_is_good_delta_t;   //!
   TBranch        *b_numi_is_good_horn;   //!
   TBranch        *b_numi_time_to_nearest;   //!
   TBranch        *b_mc_run;   //!
   TBranch        *b_mc_subrun;   //!
   TBranch        *b_mc_nInteractions;   //!
   TBranch        *b_mc_MIState;   //!
   TBranch        *b_mc_pot;   //!
   TBranch        *b_mc_beamConfig;   //!
   TBranch        *b_mc_processType;   //!
   TBranch        *b_mc_nthEvtInSpill;   //!
   TBranch        *b_mc_nthEvtInFile;   //!
   TBranch        *b_mc_intType;   //!
   TBranch        *b_mc_current;   //!
   TBranch        *b_mc_charm;   //!
   TBranch        *b_mc_weight;   //!
   TBranch        *b_mc_XSec;   //!
   TBranch        *b_mc_diffXSec;   //!
   TBranch        *b_mc_incoming;   //!
   TBranch        *b_mc_fluxDriverProb;   //!
   TBranch        *b_mc_targetNucleus;   //!
   TBranch        *b_mc_targetZ;   //!
   TBranch        *b_mc_targetA;   //!
   TBranch        *b_mc_targetNucleon;   //!
   TBranch        *b_mc_struckQuark;   //!
   TBranch        *b_mc_seaQuark;   //!
   TBranch        *b_mc_resID;   //!
   TBranch        *b_mc_primaryLepton;   //!
   TBranch        *b_mc_incomingE;   //!
   TBranch        *b_mc_Bjorkenx;   //!
   TBranch        *b_mc_Bjorkeny;   //!
   TBranch        *b_mc_Q2;   //!
   TBranch        *b_mc_nuT;   //!
   TBranch        *b_mc_w;   //!
   TBranch        *b_mc_vtx;   //!
   TBranch        *b_mc_incomingPartVec;   //!
   TBranch        *b_mc_initNucVec;   //!
   TBranch        *b_mc_primFSLepton;   //!
   TBranch        *b_mc_nFSPart;   //!
   TBranch        *b_mc_FSPartPx;   //!
   TBranch        *b_mc_FSPartPy;   //!
   TBranch        *b_mc_FSPartPz;   //!
   TBranch        *b_mc_FSPartE;   //!
   TBranch        *b_mc_FSPartPDG;   //!
   TBranch        *b_mc_er_nPart;   //!
   TBranch        *b_mc_er_ID;   //!
   TBranch        *b_mc_er_status;   //!
   TBranch        *b_mc_er_posInNucX;   //!
   TBranch        *b_mc_er_posInNucY;   //!
   TBranch        *b_mc_er_posInNucZ;   //!
   TBranch        *b_mc_er_Px;   //!
   TBranch        *b_mc_er_Py;   //!
   TBranch        *b_mc_er_Pz;   //!
   TBranch        *b_mc_er_E;   //!
   TBranch        *b_mc_er_FD;   //!
   TBranch        *b_mc_er_LD;   //!
   TBranch        *b_mc_er_mother;   //!
   TBranch        *b_mc_fr_nNuAncestorIDs;   //!
   TBranch        *b_mc_fr_nuAncestorIDs;   //!
   TBranch        *b_mc_fr_nuParentID;   //!
   TBranch        *b_mc_fr_decMode;   //!
   TBranch        *b_mc_fr_primProtonVtx;   //!
   TBranch        *b_mc_fr_primProtonP;   //!
   TBranch        *b_mc_fr_nuParentDecVtx;   //!
   TBranch        *b_mc_fr_nuParentProdVtx;   //!
   TBranch        *b_mc_fr_nuParentProdP;   //!
   TBranch        *b_mc_cvweight_total;   //!
   TBranch        *b_wgt;   //!
   TBranch        *b_mc_cvweight_totalFlux;   //!
   TBranch        *b_mc_cvweight_totalXsec;   //!
   TBranch        *b_mc_ppfx1_cvweight;   //!
   TBranch        *b_mc_hornCurrent_cvweight;   //!
   TBranch        *b_mc_gen1_cvweight_total;   //!
   TBranch        *b_gen1_wgt;   //!
   TBranch        *b_mc_gen1_cvweight_totalFlux;   //!
   TBranch        *b_mc_gen1_cvweight_NA49;   //!
   TBranch        *b_mc_wgt_Flux_BeamFocus_sz;   //!
   TBranch        *b_mc_wgt_Flux_BeamFocus;   //!
   TBranch        *b_mc_wgt_gen1_Flux_Tertiary_sz;   //!
   TBranch        *b_mc_wgt_gen1_Flux_Tertiary;   //!
   TBranch        *b_mc_wgt_gen1_Flux_NA49_sz;   //!
   TBranch        *b_mc_wgt_gen1_Flux_NA49;   //!
   TBranch        *b_mc_wgt_Norm_sz;   //!
   TBranch        *b_mc_wgt_Norm;   //!
   TBranch        *b_mc_wgt_ppfx1_Total_sz;   //!
   TBranch        *b_mc_wgt_ppfx1_Total;   //!
   TBranch        *b_mc_vertex_batch;   //!
   TBranch        *b_prong_part_score;   //!
   TBranch        *b_prong_part_mass;   //!
   TBranch        *b_prong_part_charge;   //!
   TBranch        *b_prong_part_pid;   //!
   TBranch        *b_prong_part_E;   //!
   TBranch        *b_prong_part_pos;   //!

   MasterAnaDev(TTree *tree =0);
   virtual ~MasterAnaDev();
   virtual Int_t   Cut(Long64_t entry);
   //virtual Int_t   GetEntry(Long64_t entry, Int_t getall);// { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void    Init(TTree *tree);
   virtual void    Loop();
   virtual Bool_t  Notify();
   virtual void     Show(Long64_t entry = -1);
   /*
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(MasterAnaDev,0);
   */
};
} //end of name space
#endif

#ifdef MasterAnaDev_cxx
RECOTRACKS_ANA::MasterAnaDev:: MasterAnaDev(TTree *tree) : fChain(0)
{
    // if parameter tree is not specified (or zero), connect the file
    // used to generate this class and read the Tree.
    if (tree == 0) {
        TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("SIM_minerva_00112000_Subruns_0001_MasterAnaDev_Ana_Tuple_v22r1p1.root");
        if (!f || !f->IsOpen()) {
            f = new TFile("SIM_minerva_00112000_Subruns_0001_MasterAnaDev_Ana_Tuple_v22r1p1.root");
        }
        f->GetObject("MasterAnaDev",tree);

     }
     Init(tree);
}
RECOTRACKS_ANA::MasterAnaDev::~MasterAnaDev()
{
    if (!fChain) return;
    delete fChain->GetCurrentFile();
}
Int_t RECOTRACKS_ANA::MasterAnaDev::GetEntry(Long64_t entry)
{
    //return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0;
    //return fChain ? fChain->GetTree()->GetEntry(entry) : 0;
    // Read contents of entry.
    if (!fChain) return 0;
    return fChain->GetEntry(entry);
}
Long64_t RECOTRACKS_ANA::MasterAnaDev::LoadTree(Long64_t entry)
{
    // Set the environment to read one entry
    if (!fChain) return -5;
    Long64_t centry = fChain->LoadTree(entry);
    if (centry < 0) return centry;
    if (fChain->GetTreeNumber() != fCurrent) {
        fCurrent = fChain->GetTreeNumber();
        Notify();
    }
    return centry;
}
void RECOTRACKS_ANA::MasterAnaDev::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   prong_axis_vector = 0;
   prong_axis_vertex = 0;
   prong_dEdXs = 0;
   prong_dEdXs_dz = 0;
   prong_dEdXs_projection = 0;
   prong_source_vertex = 0;
   prong_part_E = 0;
   prong_part_pos = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("eventID", &eventID, &b_eventID);
   fChain->SetBranchAddress("physEvtNum", &physEvtNum, &b_physEvtNum);
   fChain->SetBranchAddress("n_hyps", &n_hyps, &b_n_hyps);
   fChain->SetBranchAddress("processType", &processType, &b_processType);
   fChain->SetBranchAddress("primaryPart", &primaryPart, &b_primaryPart);
   fChain->SetBranchAddress("n_slices", &n_slices, &b_n_slices);
   fChain->SetBranchAddress("slice_numbers", slice_numbers, &b_slice_numbers);
   fChain->SetBranchAddress("shared_slice", &shared_slice, &b_shared_slice);
   fChain->SetBranchAddress("vtx", vtx, &b_vtx);
   fChain->SetBranchAddress("vtxErr", vtxErr, &b_vtxErr);
   fChain->SetBranchAddress("E", E, &b_E);
   fChain->SetBranchAddress("reco_vertex_batch", &reco_vertex_batch, &b_reco_vertex_batch);
   fChain->SetBranchAddress("found_truth", &found_truth, &b_found_truth);
   fChain->SetBranchAddress("phys_front_activity", &phys_front_activity, &b_phys_front_activity);
   fChain->SetBranchAddress("phys_energy_in_road_upstream_is_rockmuon_consistent", &phys_energy_in_road_upstream_is_rockmuon_consistent, &b_phys_energy_in_road_upstream_is_rockmuon_consistent);
   fChain->SetBranchAddress("rock_muons_removed", &rock_muons_removed, &b_rock_muons_removed);
   fChain->SetBranchAddress("minos_track_match", &minos_track_match, &b_minos_track_match);
   fChain->SetBranchAddress("minos_stub_match", &minos_stub_match, &b_minos_stub_match);
   fChain->SetBranchAddress("unknown_helicity", &unknown_helicity, &b_unknown_helicity);
   fChain->SetBranchAddress("minos_track_inside_partial_plane", &minos_track_inside_partial_plane, &b_minos_track_inside_partial_plane);
   fChain->SetBranchAddress("prim_vtx_has_misassigned_track_direction", &prim_vtx_has_misassigned_track_direction, &b_prim_vtx_has_misassigned_track_direction);
   fChain->SetBranchAddress("prim_vtx_has_broken_track", &prim_vtx_has_broken_track, &b_prim_vtx_has_broken_track);
   fChain->SetBranchAddress("pass_MasterAnaDev", &pass_MasterAnaDev, &b_pass_MasterAnaDev);
   fChain->SetBranchAddress("VetoWall_extrapnowalls", &VetoWall_extrapnowalls, &b_VetoWall_extrapnowalls);
   fChain->SetBranchAddress("VetoWall_extrapwall1", &VetoWall_extrapwall1, &b_VetoWall_extrapwall1);
   fChain->SetBranchAddress("VetoWall_extrapwall2", &VetoWall_extrapwall2, &b_VetoWall_extrapwall2);
   fChain->SetBranchAddress("VetoWall_extrapbothwalls", &VetoWall_extrapbothwalls, &b_VetoWall_extrapbothwalls);
   fChain->SetBranchAddress("VetoWall_MuonTrkMatchToVETOwalloff", &VetoWall_MuonTrkMatchToVETOwalloff, &b_VetoWall_MuonTrkMatchToVETOwalloff);
   fChain->SetBranchAddress("EMLikeTrackMultiplicity", &EMLikeTrackMultiplicity, &b_EMLikeTrackMultiplicity);
   fChain->SetBranchAddress("HasNoBackExitingTracks", &HasNoBackExitingTracks, &b_HasNoBackExitingTracks);
   fChain->SetBranchAddress("HasNoVertexMismatch", &HasNoVertexMismatch, &b_HasNoVertexMismatch);
   fChain->SetBranchAddress("HasTracks", &HasTracks, &b_HasTracks);
   fChain->SetBranchAddress("ID_Hits_Post_Long", &ID_Hits_Post_Long, &b_ID_Hits_Post_Long);
   fChain->SetBranchAddress("NeutronMaxClusters", &NeutronMaxClusters, &b_NeutronMaxClusters);
   fChain->SetBranchAddress("NneutronClusters0", &NneutronClusters0, &b_NneutronClusters0);
   fChain->SetBranchAddress("NneutronClusters1", &NneutronClusters1, &b_NneutronClusters1);
   fChain->SetBranchAddress("NneutronClusters2", &NneutronClusters2, &b_NneutronClusters2);
   fChain->SetBranchAddress("NneutronClusters3", &NneutronClusters3, &b_NneutronClusters3);
   fChain->SetBranchAddress("PassNeutronMaxClusterCut", &PassNeutronMaxClusterCut, &b_PassNeutronMaxClusterCut);
   fChain->SetBranchAddress("StartPointVertexMultiplicity", &StartPointVertexMultiplicity, &b_StartPointVertexMultiplicity);
   fChain->SetBranchAddress("UpstreamInlineNClusters", &UpstreamInlineNClusters, &b_UpstreamInlineNClusters);
   fChain->SetBranchAddress("UpstreamInlineNDigits", &UpstreamInlineNDigits, &b_UpstreamInlineNDigits);
   fChain->SetBranchAddress("VertexTrackMultiplicity", &VertexTrackMultiplicity, &b_VertexTrackMultiplicity);
   fChain->SetBranchAddress("VetoWall_NumberMatchToVeto", &VetoWall_NumberMatchToVeto, &b_VetoWall_NumberMatchToVeto);
   fChain->SetBranchAddress("VetoWall_event_IsVeto", &VetoWall_event_IsVeto, &b_VetoWall_event_IsVeto);
   fChain->SetBranchAddress("VetoWall_sixPush", &VetoWall_sixPush, &b_VetoWall_sixPush);
   fChain->SetBranchAddress("blob_disp_nBlobs", &blob_disp_nBlobs, &b_blob_disp_nBlobs);
   fChain->SetBranchAddress("blob_disp_nClus", &blob_disp_nClus, &b_blob_disp_nClus);
   fChain->SetBranchAddress("blob_disp_nClus_ecal", &blob_disp_nClus_ecal, &b_blob_disp_nClus_ecal);
   fChain->SetBranchAddress("blob_disp_nClus_hcal", &blob_disp_nClus_hcal, &b_blob_disp_nClus_hcal);
   fChain->SetBranchAddress("blob_disp_nClus_nucl", &blob_disp_nClus_nucl, &b_blob_disp_nClus_nucl);
   fChain->SetBranchAddress("blob_disp_nClus_od", &blob_disp_nClus_od, &b_blob_disp_nClus_od);
   fChain->SetBranchAddress("blob_disp_nClus_tracker", &blob_disp_nClus_tracker, &b_blob_disp_nClus_tracker);
   fChain->SetBranchAddress("blob_iso_nBlobs", &blob_iso_nBlobs, &b_blob_iso_nBlobs);
   fChain->SetBranchAddress("blob_iso_nClus", &blob_iso_nClus, &b_blob_iso_nClus);
   fChain->SetBranchAddress("blob_iso_nClus_ecal", &blob_iso_nClus_ecal, &b_blob_iso_nClus_ecal);
   fChain->SetBranchAddress("blob_iso_nClus_hcal", &blob_iso_nClus_hcal, &b_blob_iso_nClus_hcal);
   fChain->SetBranchAddress("blob_iso_nClus_nucl", &blob_iso_nClus_nucl, &b_blob_iso_nClus_nucl);
   fChain->SetBranchAddress("blob_iso_nClus_od", &blob_iso_nClus_od, &b_blob_iso_nClus_od);
   fChain->SetBranchAddress("blob_iso_nClus_tracker", &blob_iso_nClus_tracker, &b_blob_iso_nClus_tracker);
   fChain->SetBranchAddress("blob_mufuzz_nBlobs", &blob_mufuzz_nBlobs, &b_blob_mufuzz_nBlobs);
   fChain->SetBranchAddress("blob_mufuzz_nClus", &blob_mufuzz_nClus, &b_blob_mufuzz_nClus);
   fChain->SetBranchAddress("blob_mufuzz_nClus_ecal", &blob_mufuzz_nClus_ecal, &b_blob_mufuzz_nClus_ecal);
   fChain->SetBranchAddress("blob_mufuzz_nClus_hcal", &blob_mufuzz_nClus_hcal, &b_blob_mufuzz_nClus_hcal);
   fChain->SetBranchAddress("blob_mufuzz_nClus_nucl", &blob_mufuzz_nClus_nucl, &b_blob_mufuzz_nClus_nucl);
   fChain->SetBranchAddress("blob_mufuzz_nClus_od", &blob_mufuzz_nClus_od, &b_blob_mufuzz_nClus_od);
   fChain->SetBranchAddress("blob_mufuzz_nClus_tracker", &blob_mufuzz_nClus_tracker, &b_blob_mufuzz_nClus_tracker);
   fChain->SetBranchAddress("blob_recoil_nBlobs", &blob_recoil_nBlobs, &b_blob_recoil_nBlobs);
   fChain->SetBranchAddress("blob_recoil_nClus", &blob_recoil_nClus, &b_blob_recoil_nClus);
   fChain->SetBranchAddress("blob_recoil_nClus_ecal", &blob_recoil_nClus_ecal, &b_blob_recoil_nClus_ecal);
   fChain->SetBranchAddress("blob_recoil_nClus_hcal", &blob_recoil_nClus_hcal, &b_blob_recoil_nClus_hcal);
   fChain->SetBranchAddress("blob_recoil_nClus_nucl", &blob_recoil_nClus_nucl, &b_blob_recoil_nClus_nucl);
   fChain->SetBranchAddress("blob_recoil_nClus_od", &blob_recoil_nClus_od, &b_blob_recoil_nClus_od);
   fChain->SetBranchAddress("blob_recoil_nClus_tracker", &blob_recoil_nClus_tracker, &b_blob_recoil_nClus_tracker);
   fChain->SetBranchAddress("blob_vtx_nBlobs", &blob_vtx_nBlobs, &b_blob_vtx_nBlobs);
   fChain->SetBranchAddress("blob_vtx_nClus", &blob_vtx_nClus, &b_blob_vtx_nClus);
   fChain->SetBranchAddress("blob_vtx_nClus_ecal", &blob_vtx_nClus_ecal, &b_blob_vtx_nClus_ecal);
   fChain->SetBranchAddress("blob_vtx_nClus_hcal", &blob_vtx_nClus_hcal, &b_blob_vtx_nClus_hcal);
   fChain->SetBranchAddress("blob_vtx_nClus_nucl", &blob_vtx_nClus_nucl, &b_blob_vtx_nClus_nucl);
   fChain->SetBranchAddress("blob_vtx_nClus_od", &blob_vtx_nClus_od, &b_blob_vtx_nClus_od);
   fChain->SetBranchAddress("blob_vtx_nClus_tracker", &blob_vtx_nClus_tracker, &b_blob_vtx_nClus_tracker);
   fChain->SetBranchAddress("broken_track_most_us_plane", &broken_track_most_us_plane, &b_broken_track_most_us_plane);
   fChain->SetBranchAddress("event_unused_start_vertices", &event_unused_start_vertices, &b_event_unused_start_vertices);
   fChain->SetBranchAddress("event_used_start_vertices", &event_used_start_vertices, &b_event_used_start_vertices);
   fChain->SetBranchAddress("has_interaction_vertex", &has_interaction_vertex, &b_has_interaction_vertex);
   fChain->SetBranchAddress("has_single_proton", &has_single_proton, &b_has_single_proton);
   fChain->SetBranchAddress("improved_nmichel", &improved_nmichel, &b_improved_nmichel);
   fChain->SetBranchAddress("isMinosMatchStub", &isMinosMatchStub, &b_isMinosMatchStub);
   fChain->SetBranchAddress("isMinosMatchTrack", &isMinosMatchTrack, &b_isMinosMatchTrack);
   fChain->SetBranchAddress("multiplicity", &multiplicity, &b_multiplicity);
   fChain->SetBranchAddress("muon_fuzz_energy", &muon_fuzz_energy, &b_muon_fuzz_energy);
   fChain->SetBranchAddress("muon_is_minos_match_stub", &muon_is_minos_match_stub, &b_muon_is_minos_match_stub);
   fChain->SetBranchAddress("muon_is_minos_match_track", &muon_is_minos_match_track, &b_muon_is_minos_match_track);
   fChain->SetBranchAddress("n_anchored_long_trk_prongs", &n_anchored_long_trk_prongs, &b_n_anchored_long_trk_prongs);
   fChain->SetBranchAddress("n_anchored_short_trk_prongs", &n_anchored_short_trk_prongs, &b_n_anchored_short_trk_prongs);
   fChain->SetBranchAddress("n_indices", &n_indices, &b_n_indices);
   fChain->SetBranchAddress("n_iso_trk_prongs", &n_iso_trk_prongs, &b_n_iso_trk_prongs);
   fChain->SetBranchAddress("n_minos_matches", &n_minos_matches, &b_n_minos_matches);
   fChain->SetBranchAddress("n_muon_iso_blobs", &n_muon_iso_blobs, &b_n_muon_iso_blobs);
   fChain->SetBranchAddress("n_nonvtx_iso_blobs", &n_nonvtx_iso_blobs, &b_n_nonvtx_iso_blobs);
   fChain->SetBranchAddress("n_nonvtx_iso_blobs_all", &n_nonvtx_iso_blobs_all, &b_n_nonvtx_iso_blobs_all);
   fChain->SetBranchAddress("part_response_recoil_nClus", &part_response_recoil_nClus, &b_part_response_recoil_nClus);
   fChain->SetBranchAddress("pass_MasterAnaDev_precuts", &pass_MasterAnaDev_precuts, &b_pass_MasterAnaDev_precuts);
   fChain->SetBranchAddress("phys_energy_in_road_downstream_nplanes", &phys_energy_in_road_downstream_nplanes, &b_phys_energy_in_road_downstream_nplanes);
   fChain->SetBranchAddress("phys_energy_in_road_upstream_nplanes", &phys_energy_in_road_upstream_nplanes, &b_phys_energy_in_road_upstream_nplanes);
   fChain->SetBranchAddress("phys_n_dead_discr_pair", &phys_n_dead_discr_pair, &b_phys_n_dead_discr_pair);
   fChain->SetBranchAddress("phys_n_dead_discr_pair_in_prim_track_region", &phys_n_dead_discr_pair_in_prim_track_region, &b_phys_n_dead_discr_pair_in_prim_track_region);
   fChain->SetBranchAddress("phys_n_dead_discr_pair_two_mod_downstream_prim_track", &phys_n_dead_discr_pair_two_mod_downstream_prim_track, &b_phys_n_dead_discr_pair_two_mod_downstream_prim_track);
   fChain->SetBranchAddress("phys_n_dead_discr_pair_two_mod_upstream_prim_vtx", &phys_n_dead_discr_pair_two_mod_upstream_prim_vtx, &b_phys_n_dead_discr_pair_two_mod_upstream_prim_vtx);
   fChain->SetBranchAddress("phys_n_dead_discr_pair_upstream_prim_track_proj", &phys_n_dead_discr_pair_upstream_prim_track_proj, &b_phys_n_dead_discr_pair_upstream_prim_track_proj);
   fChain->SetBranchAddress("phys_vertex_is_fiducial", &phys_vertex_is_fiducial, &b_phys_vertex_is_fiducial);
   fChain->SetBranchAddress("proton_prong_PDG", &proton_prong_PDG, &b_proton_prong_PDG);
   fChain->SetBranchAddress("proton_prong_traj_ID", &proton_prong_traj_ID, &b_proton_prong_traj_ID);
   fChain->SetBranchAddress("recoil_EInc", &recoil_EInc, &b_recoil_EInc);
   fChain->SetBranchAddress("slice_n_hits", &slice_n_hits, &b_slice_n_hits);
   fChain->SetBranchAddress("truth_improved_michel_electron", &truth_improved_michel_electron, &b_truth_improved_michel_electron);
   fChain->SetBranchAddress("ConeEnergyVis", &ConeEnergyVis, &b_ConeEnergyVis);
   fChain->SetBranchAddress("ExtraEnergyVis", &ExtraEnergyVis, &b_ExtraEnergyVis);
   fChain->SetBranchAddress("Psi", &Psi, &b_Psi);
   fChain->SetBranchAddress("UpstreamInlineEnergy", &UpstreamInlineEnergy, &b_UpstreamInlineEnergy);
   fChain->SetBranchAddress("UpstreamInlineEnergyWgtdPosMean", &UpstreamInlineEnergyWgtdPosMean, &b_UpstreamInlineEnergyWgtdPosMean);
   fChain->SetBranchAddress("UpstreamInlineEnergyWgtdPosRMS", &UpstreamInlineEnergyWgtdPosRMS, &b_UpstreamInlineEnergyWgtdPosRMS);
   fChain->SetBranchAddress("blob_ccqe_recoil_E", &blob_ccqe_recoil_E, &b_blob_ccqe_recoil_E);
   fChain->SetBranchAddress("blob_disp_E", &blob_disp_E, &b_blob_disp_E);
   fChain->SetBranchAddress("blob_disp_E_ecal", &blob_disp_E_ecal, &b_blob_disp_E_ecal);
   fChain->SetBranchAddress("blob_disp_E_ecal_em", &blob_disp_E_ecal_em, &b_blob_disp_E_ecal_em);
   fChain->SetBranchAddress("blob_disp_E_ecal_highn", &blob_disp_E_ecal_highn, &b_blob_disp_E_ecal_highn);
   fChain->SetBranchAddress("blob_disp_E_ecal_lown", &blob_disp_E_ecal_lown, &b_blob_disp_E_ecal_lown);
   fChain->SetBranchAddress("blob_disp_E_ecal_meson", &blob_disp_E_ecal_meson, &b_blob_disp_E_ecal_meson);
   fChain->SetBranchAddress("blob_disp_E_ecal_midn", &blob_disp_E_ecal_midn, &b_blob_disp_E_ecal_midn);
   fChain->SetBranchAddress("blob_disp_E_ecal_mu", &blob_disp_E_ecal_mu, &b_blob_disp_E_ecal_mu);
   fChain->SetBranchAddress("blob_disp_E_ecal_other", &blob_disp_E_ecal_other, &b_blob_disp_E_ecal_other);
   fChain->SetBranchAddress("blob_disp_E_ecal_p", &blob_disp_E_ecal_p, &b_blob_disp_E_ecal_p);
   fChain->SetBranchAddress("blob_disp_E_ecal_xtalk", &blob_disp_E_ecal_xtalk, &b_blob_disp_E_ecal_xtalk);
   fChain->SetBranchAddress("blob_disp_E_em", &blob_disp_E_em, &b_blob_disp_E_em);
   fChain->SetBranchAddress("blob_disp_E_hcal", &blob_disp_E_hcal, &b_blob_disp_E_hcal);
   fChain->SetBranchAddress("blob_disp_E_hcal_em", &blob_disp_E_hcal_em, &b_blob_disp_E_hcal_em);
   fChain->SetBranchAddress("blob_disp_E_hcal_highn", &blob_disp_E_hcal_highn, &b_blob_disp_E_hcal_highn);
   fChain->SetBranchAddress("blob_disp_E_hcal_lown", &blob_disp_E_hcal_lown, &b_blob_disp_E_hcal_lown);
   fChain->SetBranchAddress("blob_disp_E_hcal_meson", &blob_disp_E_hcal_meson, &b_blob_disp_E_hcal_meson);
   fChain->SetBranchAddress("blob_disp_E_hcal_midn", &blob_disp_E_hcal_midn, &b_blob_disp_E_hcal_midn);
   fChain->SetBranchAddress("blob_disp_E_hcal_mu", &blob_disp_E_hcal_mu, &b_blob_disp_E_hcal_mu);
   fChain->SetBranchAddress("blob_disp_E_hcal_other", &blob_disp_E_hcal_other, &b_blob_disp_E_hcal_other);
   fChain->SetBranchAddress("blob_disp_E_hcal_p", &blob_disp_E_hcal_p, &b_blob_disp_E_hcal_p);
   fChain->SetBranchAddress("blob_disp_E_hcal_xtalk", &blob_disp_E_hcal_xtalk, &b_blob_disp_E_hcal_xtalk);
   fChain->SetBranchAddress("blob_disp_E_highn", &blob_disp_E_highn, &b_blob_disp_E_highn);
   fChain->SetBranchAddress("blob_disp_E_lown", &blob_disp_E_lown, &b_blob_disp_E_lown);
   fChain->SetBranchAddress("blob_disp_E_meson", &blob_disp_E_meson, &b_blob_disp_E_meson);
   fChain->SetBranchAddress("blob_disp_E_midn", &blob_disp_E_midn, &b_blob_disp_E_midn);
   fChain->SetBranchAddress("blob_disp_E_mu", &blob_disp_E_mu, &b_blob_disp_E_mu);
   fChain->SetBranchAddress("blob_disp_E_nucl", &blob_disp_E_nucl, &b_blob_disp_E_nucl);
   fChain->SetBranchAddress("blob_disp_E_nucl_em", &blob_disp_E_nucl_em, &b_blob_disp_E_nucl_em);
   fChain->SetBranchAddress("blob_disp_E_nucl_highn", &blob_disp_E_nucl_highn, &b_blob_disp_E_nucl_highn);
   fChain->SetBranchAddress("blob_disp_E_nucl_lown", &blob_disp_E_nucl_lown, &b_blob_disp_E_nucl_lown);
   fChain->SetBranchAddress("blob_disp_E_nucl_meson", &blob_disp_E_nucl_meson, &b_blob_disp_E_nucl_meson);
   fChain->SetBranchAddress("blob_disp_E_nucl_midn", &blob_disp_E_nucl_midn, &b_blob_disp_E_nucl_midn);
   fChain->SetBranchAddress("blob_disp_E_nucl_mu", &blob_disp_E_nucl_mu, &b_blob_disp_E_nucl_mu);
   fChain->SetBranchAddress("blob_disp_E_nucl_other", &blob_disp_E_nucl_other, &b_blob_disp_E_nucl_other);
   fChain->SetBranchAddress("blob_disp_E_nucl_p", &blob_disp_E_nucl_p, &b_blob_disp_E_nucl_p);
   fChain->SetBranchAddress("blob_disp_E_nucl_xtalk", &blob_disp_E_nucl_xtalk, &b_blob_disp_E_nucl_xtalk);
   fChain->SetBranchAddress("blob_disp_E_od", &blob_disp_E_od, &b_blob_disp_E_od);
   fChain->SetBranchAddress("blob_disp_E_od_em", &blob_disp_E_od_em, &b_blob_disp_E_od_em);
   fChain->SetBranchAddress("blob_disp_E_od_highn", &blob_disp_E_od_highn, &b_blob_disp_E_od_highn);
   fChain->SetBranchAddress("blob_disp_E_od_lown", &blob_disp_E_od_lown, &b_blob_disp_E_od_lown);
   fChain->SetBranchAddress("blob_disp_E_od_meson", &blob_disp_E_od_meson, &b_blob_disp_E_od_meson);
   fChain->SetBranchAddress("blob_disp_E_od_midn", &blob_disp_E_od_midn, &b_blob_disp_E_od_midn);
   fChain->SetBranchAddress("blob_disp_E_od_mu", &blob_disp_E_od_mu, &b_blob_disp_E_od_mu);
   fChain->SetBranchAddress("blob_disp_E_od_other", &blob_disp_E_od_other, &b_blob_disp_E_od_other);
   fChain->SetBranchAddress("blob_disp_E_od_p", &blob_disp_E_od_p, &b_blob_disp_E_od_p);
   fChain->SetBranchAddress("blob_disp_E_od_xtalk", &blob_disp_E_od_xtalk, &b_blob_disp_E_od_xtalk);
   fChain->SetBranchAddress("blob_disp_E_other", &blob_disp_E_other, &b_blob_disp_E_other);
   fChain->SetBranchAddress("blob_disp_E_p", &blob_disp_E_p, &b_blob_disp_E_p);
   fChain->SetBranchAddress("blob_disp_E_tracker", &blob_disp_E_tracker, &b_blob_disp_E_tracker);
   fChain->SetBranchAddress("blob_disp_E_tracker_em", &blob_disp_E_tracker_em, &b_blob_disp_E_tracker_em);
   fChain->SetBranchAddress("blob_disp_E_tracker_highn", &blob_disp_E_tracker_highn, &b_blob_disp_E_tracker_highn);
   fChain->SetBranchAddress("blob_disp_E_tracker_lown", &blob_disp_E_tracker_lown, &b_blob_disp_E_tracker_lown);
   fChain->SetBranchAddress("blob_disp_E_tracker_meson", &blob_disp_E_tracker_meson, &b_blob_disp_E_tracker_meson);
   fChain->SetBranchAddress("blob_disp_E_tracker_midn", &blob_disp_E_tracker_midn, &b_blob_disp_E_tracker_midn);
   fChain->SetBranchAddress("blob_disp_E_tracker_mu", &blob_disp_E_tracker_mu, &b_blob_disp_E_tracker_mu);
   fChain->SetBranchAddress("blob_disp_E_tracker_other", &blob_disp_E_tracker_other, &b_blob_disp_E_tracker_other);
   fChain->SetBranchAddress("blob_disp_E_tracker_p", &blob_disp_E_tracker_p, &b_blob_disp_E_tracker_p);
   fChain->SetBranchAddress("blob_disp_E_tracker_xtalk", &blob_disp_E_tracker_xtalk, &b_blob_disp_E_tracker_xtalk);
   fChain->SetBranchAddress("blob_disp_E_xtalk", &blob_disp_E_xtalk, &b_blob_disp_E_xtalk);
   fChain->SetBranchAddress("blob_iso_E", &blob_iso_E, &b_blob_iso_E);
   fChain->SetBranchAddress("blob_iso_E_ecal", &blob_iso_E_ecal, &b_blob_iso_E_ecal);
   fChain->SetBranchAddress("blob_iso_E_ecal_em", &blob_iso_E_ecal_em, &b_blob_iso_E_ecal_em);
   fChain->SetBranchAddress("blob_iso_E_ecal_highn", &blob_iso_E_ecal_highn, &b_blob_iso_E_ecal_highn);
   fChain->SetBranchAddress("blob_iso_E_ecal_lown", &blob_iso_E_ecal_lown, &b_blob_iso_E_ecal_lown);
   fChain->SetBranchAddress("blob_iso_E_ecal_meson", &blob_iso_E_ecal_meson, &b_blob_iso_E_ecal_meson);
   fChain->SetBranchAddress("blob_iso_E_ecal_midn", &blob_iso_E_ecal_midn, &b_blob_iso_E_ecal_midn);
   fChain->SetBranchAddress("blob_iso_E_ecal_mu", &blob_iso_E_ecal_mu, &b_blob_iso_E_ecal_mu);
   fChain->SetBranchAddress("blob_iso_E_ecal_other", &blob_iso_E_ecal_other, &b_blob_iso_E_ecal_other);
   fChain->SetBranchAddress("blob_iso_E_ecal_p", &blob_iso_E_ecal_p, &b_blob_iso_E_ecal_p);
   fChain->SetBranchAddress("blob_iso_E_ecal_xtalk", &blob_iso_E_ecal_xtalk, &b_blob_iso_E_ecal_xtalk);
   fChain->SetBranchAddress("blob_iso_E_em", &blob_iso_E_em, &b_blob_iso_E_em);
   fChain->SetBranchAddress("blob_iso_E_hcal", &blob_iso_E_hcal, &b_blob_iso_E_hcal);
   fChain->SetBranchAddress("blob_iso_E_hcal_em", &blob_iso_E_hcal_em, &b_blob_iso_E_hcal_em);
   fChain->SetBranchAddress("blob_iso_E_hcal_highn", &blob_iso_E_hcal_highn, &b_blob_iso_E_hcal_highn);
   fChain->SetBranchAddress("blob_iso_E_hcal_lown", &blob_iso_E_hcal_lown, &b_blob_iso_E_hcal_lown);
   fChain->SetBranchAddress("blob_iso_E_hcal_meson", &blob_iso_E_hcal_meson, &b_blob_iso_E_hcal_meson);
   fChain->SetBranchAddress("blob_iso_E_hcal_midn", &blob_iso_E_hcal_midn, &b_blob_iso_E_hcal_midn);
   fChain->SetBranchAddress("blob_iso_E_hcal_mu", &blob_iso_E_hcal_mu, &b_blob_iso_E_hcal_mu);
   fChain->SetBranchAddress("blob_iso_E_hcal_other", &blob_iso_E_hcal_other, &b_blob_iso_E_hcal_other);
   fChain->SetBranchAddress("blob_iso_E_hcal_p", &blob_iso_E_hcal_p, &b_blob_iso_E_hcal_p);
   fChain->SetBranchAddress("blob_iso_E_hcal_xtalk", &blob_iso_E_hcal_xtalk, &b_blob_iso_E_hcal_xtalk);
   fChain->SetBranchAddress("blob_iso_E_highn", &blob_iso_E_highn, &b_blob_iso_E_highn);
   fChain->SetBranchAddress("blob_iso_E_lown", &blob_iso_E_lown, &b_blob_iso_E_lown);
   fChain->SetBranchAddress("blob_iso_E_meson", &blob_iso_E_meson, &b_blob_iso_E_meson);
   fChain->SetBranchAddress("blob_iso_E_midn", &blob_iso_E_midn, &b_blob_iso_E_midn);
   fChain->SetBranchAddress("blob_iso_E_mu", &blob_iso_E_mu, &b_blob_iso_E_mu);
   fChain->SetBranchAddress("blob_iso_E_nucl", &blob_iso_E_nucl, &b_blob_iso_E_nucl);
   fChain->SetBranchAddress("blob_iso_E_nucl_em", &blob_iso_E_nucl_em, &b_blob_iso_E_nucl_em);
   fChain->SetBranchAddress("blob_iso_E_nucl_highn", &blob_iso_E_nucl_highn, &b_blob_iso_E_nucl_highn);
   fChain->SetBranchAddress("blob_iso_E_nucl_lown", &blob_iso_E_nucl_lown, &b_blob_iso_E_nucl_lown);
   fChain->SetBranchAddress("blob_iso_E_nucl_meson", &blob_iso_E_nucl_meson, &b_blob_iso_E_nucl_meson);
   fChain->SetBranchAddress("blob_iso_E_nucl_midn", &blob_iso_E_nucl_midn, &b_blob_iso_E_nucl_midn);
   fChain->SetBranchAddress("blob_iso_E_nucl_mu", &blob_iso_E_nucl_mu, &b_blob_iso_E_nucl_mu);
   fChain->SetBranchAddress("blob_iso_E_nucl_other", &blob_iso_E_nucl_other, &b_blob_iso_E_nucl_other);
   fChain->SetBranchAddress("blob_iso_E_nucl_p", &blob_iso_E_nucl_p, &b_blob_iso_E_nucl_p);
   fChain->SetBranchAddress("blob_iso_E_nucl_xtalk", &blob_iso_E_nucl_xtalk, &b_blob_iso_E_nucl_xtalk);
   fChain->SetBranchAddress("blob_iso_E_od", &blob_iso_E_od, &b_blob_iso_E_od);
   fChain->SetBranchAddress("blob_iso_E_od_em", &blob_iso_E_od_em, &b_blob_iso_E_od_em);
   fChain->SetBranchAddress("blob_iso_E_od_highn", &blob_iso_E_od_highn, &b_blob_iso_E_od_highn);
   fChain->SetBranchAddress("blob_iso_E_od_lown", &blob_iso_E_od_lown, &b_blob_iso_E_od_lown);
   fChain->SetBranchAddress("blob_iso_E_od_meson", &blob_iso_E_od_meson, &b_blob_iso_E_od_meson);
   fChain->SetBranchAddress("blob_iso_E_od_midn", &blob_iso_E_od_midn, &b_blob_iso_E_od_midn);
   fChain->SetBranchAddress("blob_iso_E_od_mu", &blob_iso_E_od_mu, &b_blob_iso_E_od_mu);
   fChain->SetBranchAddress("blob_iso_E_od_other", &blob_iso_E_od_other, &b_blob_iso_E_od_other);
   fChain->SetBranchAddress("blob_iso_E_od_p", &blob_iso_E_od_p, &b_blob_iso_E_od_p);
   fChain->SetBranchAddress("blob_iso_E_od_xtalk", &blob_iso_E_od_xtalk, &b_blob_iso_E_od_xtalk);
   fChain->SetBranchAddress("blob_iso_E_other", &blob_iso_E_other, &b_blob_iso_E_other);
   fChain->SetBranchAddress("blob_iso_E_p", &blob_iso_E_p, &b_blob_iso_E_p);
   fChain->SetBranchAddress("blob_iso_E_tracker", &blob_iso_E_tracker, &b_blob_iso_E_tracker);
   fChain->SetBranchAddress("blob_iso_E_tracker_em", &blob_iso_E_tracker_em, &b_blob_iso_E_tracker_em);
   fChain->SetBranchAddress("blob_iso_E_tracker_highn", &blob_iso_E_tracker_highn, &b_blob_iso_E_tracker_highn);
   fChain->SetBranchAddress("blob_iso_E_tracker_lown", &blob_iso_E_tracker_lown, &b_blob_iso_E_tracker_lown);
   fChain->SetBranchAddress("blob_iso_E_tracker_meson", &blob_iso_E_tracker_meson, &b_blob_iso_E_tracker_meson);
   fChain->SetBranchAddress("blob_iso_E_tracker_midn", &blob_iso_E_tracker_midn, &b_blob_iso_E_tracker_midn);
   fChain->SetBranchAddress("blob_iso_E_tracker_mu", &blob_iso_E_tracker_mu, &b_blob_iso_E_tracker_mu);
   fChain->SetBranchAddress("blob_iso_E_tracker_other", &blob_iso_E_tracker_other, &b_blob_iso_E_tracker_other);
   fChain->SetBranchAddress("blob_iso_E_tracker_p", &blob_iso_E_tracker_p, &b_blob_iso_E_tracker_p);
   fChain->SetBranchAddress("blob_iso_E_tracker_xtalk", &blob_iso_E_tracker_xtalk, &b_blob_iso_E_tracker_xtalk);
   fChain->SetBranchAddress("blob_iso_E_xtalk", &blob_iso_E_xtalk, &b_blob_iso_E_xtalk);
   fChain->SetBranchAddress("blob_mufuzz_E", &blob_mufuzz_E, &b_blob_mufuzz_E);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal", &blob_mufuzz_E_ecal, &b_blob_mufuzz_E_ecal);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_em", &blob_mufuzz_E_ecal_em, &b_blob_mufuzz_E_ecal_em);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_highn", &blob_mufuzz_E_ecal_highn, &b_blob_mufuzz_E_ecal_highn);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_lown", &blob_mufuzz_E_ecal_lown, &b_blob_mufuzz_E_ecal_lown);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_meson", &blob_mufuzz_E_ecal_meson, &b_blob_mufuzz_E_ecal_meson);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_midn", &blob_mufuzz_E_ecal_midn, &b_blob_mufuzz_E_ecal_midn);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_mu", &blob_mufuzz_E_ecal_mu, &b_blob_mufuzz_E_ecal_mu);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_other", &blob_mufuzz_E_ecal_other, &b_blob_mufuzz_E_ecal_other);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_p", &blob_mufuzz_E_ecal_p, &b_blob_mufuzz_E_ecal_p);
   fChain->SetBranchAddress("blob_mufuzz_E_ecal_xtalk", &blob_mufuzz_E_ecal_xtalk, &b_blob_mufuzz_E_ecal_xtalk);
   fChain->SetBranchAddress("blob_mufuzz_E_em", &blob_mufuzz_E_em, &b_blob_mufuzz_E_em);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal", &blob_mufuzz_E_hcal, &b_blob_mufuzz_E_hcal);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_em", &blob_mufuzz_E_hcal_em, &b_blob_mufuzz_E_hcal_em);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_highn", &blob_mufuzz_E_hcal_highn, &b_blob_mufuzz_E_hcal_highn);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_lown", &blob_mufuzz_E_hcal_lown, &b_blob_mufuzz_E_hcal_lown);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_meson", &blob_mufuzz_E_hcal_meson, &b_blob_mufuzz_E_hcal_meson);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_midn", &blob_mufuzz_E_hcal_midn, &b_blob_mufuzz_E_hcal_midn);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_mu", &blob_mufuzz_E_hcal_mu, &b_blob_mufuzz_E_hcal_mu);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_other", &blob_mufuzz_E_hcal_other, &b_blob_mufuzz_E_hcal_other);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_p", &blob_mufuzz_E_hcal_p, &b_blob_mufuzz_E_hcal_p);
   fChain->SetBranchAddress("blob_mufuzz_E_hcal_xtalk", &blob_mufuzz_E_hcal_xtalk, &b_blob_mufuzz_E_hcal_xtalk);
   fChain->SetBranchAddress("blob_mufuzz_E_highn", &blob_mufuzz_E_highn, &b_blob_mufuzz_E_highn);
   fChain->SetBranchAddress("blob_mufuzz_E_lown", &blob_mufuzz_E_lown, &b_blob_mufuzz_E_lown);
   fChain->SetBranchAddress("blob_mufuzz_E_meson", &blob_mufuzz_E_meson, &b_blob_mufuzz_E_meson);
   fChain->SetBranchAddress("blob_mufuzz_E_midn", &blob_mufuzz_E_midn, &b_blob_mufuzz_E_midn);
   fChain->SetBranchAddress("blob_mufuzz_E_mu", &blob_mufuzz_E_mu, &b_blob_mufuzz_E_mu);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl", &blob_mufuzz_E_nucl, &b_blob_mufuzz_E_nucl);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_em", &blob_mufuzz_E_nucl_em, &b_blob_mufuzz_E_nucl_em);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_highn", &blob_mufuzz_E_nucl_highn, &b_blob_mufuzz_E_nucl_highn);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_lown", &blob_mufuzz_E_nucl_lown, &b_blob_mufuzz_E_nucl_lown);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_meson", &blob_mufuzz_E_nucl_meson, &b_blob_mufuzz_E_nucl_meson);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_midn", &blob_mufuzz_E_nucl_midn, &b_blob_mufuzz_E_nucl_midn);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_mu", &blob_mufuzz_E_nucl_mu, &b_blob_mufuzz_E_nucl_mu);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_other", &blob_mufuzz_E_nucl_other, &b_blob_mufuzz_E_nucl_other);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_p", &blob_mufuzz_E_nucl_p, &b_blob_mufuzz_E_nucl_p);
   fChain->SetBranchAddress("blob_mufuzz_E_nucl_xtalk", &blob_mufuzz_E_nucl_xtalk, &b_blob_mufuzz_E_nucl_xtalk);
   fChain->SetBranchAddress("blob_mufuzz_E_od", &blob_mufuzz_E_od, &b_blob_mufuzz_E_od);
   fChain->SetBranchAddress("blob_mufuzz_E_od_em", &blob_mufuzz_E_od_em, &b_blob_mufuzz_E_od_em);
   fChain->SetBranchAddress("blob_mufuzz_E_od_highn", &blob_mufuzz_E_od_highn, &b_blob_mufuzz_E_od_highn);
   fChain->SetBranchAddress("blob_mufuzz_E_od_lown", &blob_mufuzz_E_od_lown, &b_blob_mufuzz_E_od_lown);
   fChain->SetBranchAddress("blob_mufuzz_E_od_meson", &blob_mufuzz_E_od_meson, &b_blob_mufuzz_E_od_meson);
   fChain->SetBranchAddress("blob_mufuzz_E_od_midn", &blob_mufuzz_E_od_midn, &b_blob_mufuzz_E_od_midn);
   fChain->SetBranchAddress("blob_mufuzz_E_od_mu", &blob_mufuzz_E_od_mu, &b_blob_mufuzz_E_od_mu);
   fChain->SetBranchAddress("blob_mufuzz_E_od_other", &blob_mufuzz_E_od_other, &b_blob_mufuzz_E_od_other);
   fChain->SetBranchAddress("blob_mufuzz_E_od_p", &blob_mufuzz_E_od_p, &b_blob_mufuzz_E_od_p);
   fChain->SetBranchAddress("blob_mufuzz_E_od_xtalk", &blob_mufuzz_E_od_xtalk, &b_blob_mufuzz_E_od_xtalk);
   fChain->SetBranchAddress("blob_mufuzz_E_other", &blob_mufuzz_E_other, &b_blob_mufuzz_E_other);
   fChain->SetBranchAddress("blob_mufuzz_E_p", &blob_mufuzz_E_p, &b_blob_mufuzz_E_p);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker", &blob_mufuzz_E_tracker, &b_blob_mufuzz_E_tracker);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_em", &blob_mufuzz_E_tracker_em, &b_blob_mufuzz_E_tracker_em);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_highn", &blob_mufuzz_E_tracker_highn, &b_blob_mufuzz_E_tracker_highn);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_lown", &blob_mufuzz_E_tracker_lown, &b_blob_mufuzz_E_tracker_lown);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_meson", &blob_mufuzz_E_tracker_meson, &b_blob_mufuzz_E_tracker_meson);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_midn", &blob_mufuzz_E_tracker_midn, &b_blob_mufuzz_E_tracker_midn);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_mu", &blob_mufuzz_E_tracker_mu, &b_blob_mufuzz_E_tracker_mu);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_other", &blob_mufuzz_E_tracker_other, &b_blob_mufuzz_E_tracker_other);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_p", &blob_mufuzz_E_tracker_p, &b_blob_mufuzz_E_tracker_p);
   fChain->SetBranchAddress("blob_mufuzz_E_tracker_xtalk", &blob_mufuzz_E_tracker_xtalk, &b_blob_mufuzz_E_tracker_xtalk);
   fChain->SetBranchAddress("blob_mufuzz_E_xtalk", &blob_mufuzz_E_xtalk, &b_blob_mufuzz_E_xtalk);
   fChain->SetBranchAddress("blob_recoil_E", &blob_recoil_E, &b_blob_recoil_E);
   fChain->SetBranchAddress("blob_recoil_E_ecal", &blob_recoil_E_ecal, &b_blob_recoil_E_ecal);
   fChain->SetBranchAddress("blob_recoil_E_ecal_em", &blob_recoil_E_ecal_em, &b_blob_recoil_E_ecal_em);
   fChain->SetBranchAddress("blob_recoil_E_ecal_highn", &blob_recoil_E_ecal_highn, &b_blob_recoil_E_ecal_highn);
   fChain->SetBranchAddress("blob_recoil_E_ecal_lown", &blob_recoil_E_ecal_lown, &b_blob_recoil_E_ecal_lown);
   fChain->SetBranchAddress("blob_recoil_E_ecal_meson", &blob_recoil_E_ecal_meson, &b_blob_recoil_E_ecal_meson);
   fChain->SetBranchAddress("blob_recoil_E_ecal_midn", &blob_recoil_E_ecal_midn, &b_blob_recoil_E_ecal_midn);
   fChain->SetBranchAddress("blob_recoil_E_ecal_mu", &blob_recoil_E_ecal_mu, &b_blob_recoil_E_ecal_mu);
   fChain->SetBranchAddress("blob_recoil_E_ecal_other", &blob_recoil_E_ecal_other, &b_blob_recoil_E_ecal_other);
   fChain->SetBranchAddress("blob_recoil_E_ecal_p", &blob_recoil_E_ecal_p, &b_blob_recoil_E_ecal_p);
   fChain->SetBranchAddress("blob_recoil_E_ecal_xtalk", &blob_recoil_E_ecal_xtalk, &b_blob_recoil_E_ecal_xtalk);
   fChain->SetBranchAddress("blob_recoil_E_em", &blob_recoil_E_em, &b_blob_recoil_E_em);
   fChain->SetBranchAddress("blob_recoil_E_hcal", &blob_recoil_E_hcal, &b_blob_recoil_E_hcal);
   fChain->SetBranchAddress("blob_recoil_E_hcal_em", &blob_recoil_E_hcal_em, &b_blob_recoil_E_hcal_em);
   fChain->SetBranchAddress("blob_recoil_E_hcal_highn", &blob_recoil_E_hcal_highn, &b_blob_recoil_E_hcal_highn);
   fChain->SetBranchAddress("blob_recoil_E_hcal_lown", &blob_recoil_E_hcal_lown, &b_blob_recoil_E_hcal_lown);
   fChain->SetBranchAddress("blob_recoil_E_hcal_meson", &blob_recoil_E_hcal_meson, &b_blob_recoil_E_hcal_meson);
   fChain->SetBranchAddress("blob_recoil_E_hcal_midn", &blob_recoil_E_hcal_midn, &b_blob_recoil_E_hcal_midn);
   fChain->SetBranchAddress("blob_recoil_E_hcal_mu", &blob_recoil_E_hcal_mu, &b_blob_recoil_E_hcal_mu);
   fChain->SetBranchAddress("blob_recoil_E_hcal_other", &blob_recoil_E_hcal_other, &b_blob_recoil_E_hcal_other);
   fChain->SetBranchAddress("blob_recoil_E_hcal_p", &blob_recoil_E_hcal_p, &b_blob_recoil_E_hcal_p);
   fChain->SetBranchAddress("blob_recoil_E_hcal_xtalk", &blob_recoil_E_hcal_xtalk, &b_blob_recoil_E_hcal_xtalk);
   fChain->SetBranchAddress("blob_recoil_E_highn", &blob_recoil_E_highn, &b_blob_recoil_E_highn);
   fChain->SetBranchAddress("blob_recoil_E_lown", &blob_recoil_E_lown, &b_blob_recoil_E_lown);
   fChain->SetBranchAddress("blob_recoil_E_meson", &blob_recoil_E_meson, &b_blob_recoil_E_meson);
   fChain->SetBranchAddress("blob_recoil_E_midn", &blob_recoil_E_midn, &b_blob_recoil_E_midn);
   fChain->SetBranchAddress("blob_recoil_E_mu", &blob_recoil_E_mu, &b_blob_recoil_E_mu);
   fChain->SetBranchAddress("blob_recoil_E_nucl", &blob_recoil_E_nucl, &b_blob_recoil_E_nucl);
   fChain->SetBranchAddress("blob_recoil_E_nucl_em", &blob_recoil_E_nucl_em, &b_blob_recoil_E_nucl_em);
   fChain->SetBranchAddress("blob_recoil_E_nucl_highn", &blob_recoil_E_nucl_highn, &b_blob_recoil_E_nucl_highn);
   fChain->SetBranchAddress("blob_recoil_E_nucl_lown", &blob_recoil_E_nucl_lown, &b_blob_recoil_E_nucl_lown);
   fChain->SetBranchAddress("blob_recoil_E_nucl_meson", &blob_recoil_E_nucl_meson, &b_blob_recoil_E_nucl_meson);
   fChain->SetBranchAddress("blob_recoil_E_nucl_midn", &blob_recoil_E_nucl_midn, &b_blob_recoil_E_nucl_midn);
   fChain->SetBranchAddress("blob_recoil_E_nucl_mu", &blob_recoil_E_nucl_mu, &b_blob_recoil_E_nucl_mu);
   fChain->SetBranchAddress("blob_recoil_E_nucl_other", &blob_recoil_E_nucl_other, &b_blob_recoil_E_nucl_other);
   fChain->SetBranchAddress("blob_recoil_E_nucl_p", &blob_recoil_E_nucl_p, &b_blob_recoil_E_nucl_p);
   fChain->SetBranchAddress("blob_recoil_E_nucl_xtalk", &blob_recoil_E_nucl_xtalk, &b_blob_recoil_E_nucl_xtalk);
   fChain->SetBranchAddress("blob_recoil_E_od", &blob_recoil_E_od, &b_blob_recoil_E_od);
   fChain->SetBranchAddress("blob_recoil_E_od_em", &blob_recoil_E_od_em, &b_blob_recoil_E_od_em);
   fChain->SetBranchAddress("blob_recoil_E_od_highn", &blob_recoil_E_od_highn, &b_blob_recoil_E_od_highn);
   fChain->SetBranchAddress("blob_recoil_E_od_lown", &blob_recoil_E_od_lown, &b_blob_recoil_E_od_lown);
   fChain->SetBranchAddress("blob_recoil_E_od_meson", &blob_recoil_E_od_meson, &b_blob_recoil_E_od_meson);
   fChain->SetBranchAddress("blob_recoil_E_od_midn", &blob_recoil_E_od_midn, &b_blob_recoil_E_od_midn);
   fChain->SetBranchAddress("blob_recoil_E_od_mu", &blob_recoil_E_od_mu, &b_blob_recoil_E_od_mu);
   fChain->SetBranchAddress("blob_recoil_E_od_other", &blob_recoil_E_od_other, &b_blob_recoil_E_od_other);
   fChain->SetBranchAddress("blob_recoil_E_od_p", &blob_recoil_E_od_p, &b_blob_recoil_E_od_p);
   fChain->SetBranchAddress("blob_recoil_E_od_xtalk", &blob_recoil_E_od_xtalk, &b_blob_recoil_E_od_xtalk);
   fChain->SetBranchAddress("blob_recoil_E_other", &blob_recoil_E_other, &b_blob_recoil_E_other);
   fChain->SetBranchAddress("blob_recoil_E_p", &blob_recoil_E_p, &b_blob_recoil_E_p);
   fChain->SetBranchAddress("blob_recoil_E_tracker", &blob_recoil_E_tracker, &b_blob_recoil_E_tracker);
   fChain->SetBranchAddress("blob_recoil_E_tracker_em", &blob_recoil_E_tracker_em, &b_blob_recoil_E_tracker_em);
   fChain->SetBranchAddress("blob_recoil_E_tracker_highn", &blob_recoil_E_tracker_highn, &b_blob_recoil_E_tracker_highn);
   fChain->SetBranchAddress("blob_recoil_E_tracker_lown", &blob_recoil_E_tracker_lown, &b_blob_recoil_E_tracker_lown);
   fChain->SetBranchAddress("blob_recoil_E_tracker_meson", &blob_recoil_E_tracker_meson, &b_blob_recoil_E_tracker_meson);
   fChain->SetBranchAddress("blob_recoil_E_tracker_midn", &blob_recoil_E_tracker_midn, &b_blob_recoil_E_tracker_midn);
   fChain->SetBranchAddress("blob_recoil_E_tracker_mu", &blob_recoil_E_tracker_mu, &b_blob_recoil_E_tracker_mu);
   fChain->SetBranchAddress("blob_recoil_E_tracker_other", &blob_recoil_E_tracker_other, &b_blob_recoil_E_tracker_other);
   fChain->SetBranchAddress("blob_recoil_E_tracker_p", &blob_recoil_E_tracker_p, &b_blob_recoil_E_tracker_p);
   fChain->SetBranchAddress("blob_recoil_E_tracker_xtalk", &blob_recoil_E_tracker_xtalk, &b_blob_recoil_E_tracker_xtalk);
   fChain->SetBranchAddress("blob_recoil_E_xtalk", &blob_recoil_E_xtalk, &b_blob_recoil_E_xtalk);
   fChain->SetBranchAddress("blob_vtx_E", &blob_vtx_E, &b_blob_vtx_E);
   fChain->SetBranchAddress("blob_vtx_E_ecal", &blob_vtx_E_ecal, &b_blob_vtx_E_ecal);
   fChain->SetBranchAddress("blob_vtx_E_ecal_em", &blob_vtx_E_ecal_em, &b_blob_vtx_E_ecal_em);
   fChain->SetBranchAddress("blob_vtx_E_ecal_highn", &blob_vtx_E_ecal_highn, &b_blob_vtx_E_ecal_highn);
   fChain->SetBranchAddress("blob_vtx_E_ecal_lown", &blob_vtx_E_ecal_lown, &b_blob_vtx_E_ecal_lown);
   fChain->SetBranchAddress("blob_vtx_E_ecal_meson", &blob_vtx_E_ecal_meson, &b_blob_vtx_E_ecal_meson);
   fChain->SetBranchAddress("blob_vtx_E_ecal_midn", &blob_vtx_E_ecal_midn, &b_blob_vtx_E_ecal_midn);
   fChain->SetBranchAddress("blob_vtx_E_ecal_mu", &blob_vtx_E_ecal_mu, &b_blob_vtx_E_ecal_mu);
   fChain->SetBranchAddress("blob_vtx_E_ecal_other", &blob_vtx_E_ecal_other, &b_blob_vtx_E_ecal_other);
   fChain->SetBranchAddress("blob_vtx_E_ecal_p", &blob_vtx_E_ecal_p, &b_blob_vtx_E_ecal_p);
   fChain->SetBranchAddress("blob_vtx_E_ecal_xtalk", &blob_vtx_E_ecal_xtalk, &b_blob_vtx_E_ecal_xtalk);
   fChain->SetBranchAddress("blob_vtx_E_em", &blob_vtx_E_em, &b_blob_vtx_E_em);
   fChain->SetBranchAddress("blob_vtx_E_hcal", &blob_vtx_E_hcal, &b_blob_vtx_E_hcal);
   fChain->SetBranchAddress("blob_vtx_E_hcal_em", &blob_vtx_E_hcal_em, &b_blob_vtx_E_hcal_em);
   fChain->SetBranchAddress("blob_vtx_E_hcal_highn", &blob_vtx_E_hcal_highn, &b_blob_vtx_E_hcal_highn);
   fChain->SetBranchAddress("blob_vtx_E_hcal_lown", &blob_vtx_E_hcal_lown, &b_blob_vtx_E_hcal_lown);
   fChain->SetBranchAddress("blob_vtx_E_hcal_meson", &blob_vtx_E_hcal_meson, &b_blob_vtx_E_hcal_meson);
   fChain->SetBranchAddress("blob_vtx_E_hcal_midn", &blob_vtx_E_hcal_midn, &b_blob_vtx_E_hcal_midn);
   fChain->SetBranchAddress("blob_vtx_E_hcal_mu", &blob_vtx_E_hcal_mu, &b_blob_vtx_E_hcal_mu);
   fChain->SetBranchAddress("blob_vtx_E_hcal_other", &blob_vtx_E_hcal_other, &b_blob_vtx_E_hcal_other);
   fChain->SetBranchAddress("blob_vtx_E_hcal_p", &blob_vtx_E_hcal_p, &b_blob_vtx_E_hcal_p);
   fChain->SetBranchAddress("blob_vtx_E_hcal_xtalk", &blob_vtx_E_hcal_xtalk, &b_blob_vtx_E_hcal_xtalk);
   fChain->SetBranchAddress("blob_vtx_E_highn", &blob_vtx_E_highn, &b_blob_vtx_E_highn);
   fChain->SetBranchAddress("blob_vtx_E_lown", &blob_vtx_E_lown, &b_blob_vtx_E_lown);
   fChain->SetBranchAddress("blob_vtx_E_meson", &blob_vtx_E_meson, &b_blob_vtx_E_meson);
   fChain->SetBranchAddress("blob_vtx_E_midn", &blob_vtx_E_midn, &b_blob_vtx_E_midn);
   fChain->SetBranchAddress("blob_vtx_E_mu", &blob_vtx_E_mu, &b_blob_vtx_E_mu);
   fChain->SetBranchAddress("blob_vtx_E_nucl", &blob_vtx_E_nucl, &b_blob_vtx_E_nucl);
   fChain->SetBranchAddress("blob_vtx_E_nucl_em", &blob_vtx_E_nucl_em, &b_blob_vtx_E_nucl_em);
   fChain->SetBranchAddress("blob_vtx_E_nucl_highn", &blob_vtx_E_nucl_highn, &b_blob_vtx_E_nucl_highn);
   fChain->SetBranchAddress("blob_vtx_E_nucl_lown", &blob_vtx_E_nucl_lown, &b_blob_vtx_E_nucl_lown);
   fChain->SetBranchAddress("blob_vtx_E_nucl_meson", &blob_vtx_E_nucl_meson, &b_blob_vtx_E_nucl_meson);
   fChain->SetBranchAddress("blob_vtx_E_nucl_midn", &blob_vtx_E_nucl_midn, &b_blob_vtx_E_nucl_midn);
   fChain->SetBranchAddress("blob_vtx_E_nucl_mu", &blob_vtx_E_nucl_mu, &b_blob_vtx_E_nucl_mu);
   fChain->SetBranchAddress("blob_vtx_E_nucl_other", &blob_vtx_E_nucl_other, &b_blob_vtx_E_nucl_other);
   fChain->SetBranchAddress("blob_vtx_E_nucl_p", &blob_vtx_E_nucl_p, &b_blob_vtx_E_nucl_p);
   fChain->SetBranchAddress("blob_vtx_E_nucl_xtalk", &blob_vtx_E_nucl_xtalk, &b_blob_vtx_E_nucl_xtalk);
   fChain->SetBranchAddress("blob_vtx_E_od", &blob_vtx_E_od, &b_blob_vtx_E_od);
   fChain->SetBranchAddress("blob_vtx_E_od_em", &blob_vtx_E_od_em, &b_blob_vtx_E_od_em);
   fChain->SetBranchAddress("blob_vtx_E_od_highn", &blob_vtx_E_od_highn, &b_blob_vtx_E_od_highn);
   fChain->SetBranchAddress("blob_vtx_E_od_lown", &blob_vtx_E_od_lown, &b_blob_vtx_E_od_lown);
   fChain->SetBranchAddress("blob_vtx_E_od_meson", &blob_vtx_E_od_meson, &b_blob_vtx_E_od_meson);
   fChain->SetBranchAddress("blob_vtx_E_od_midn", &blob_vtx_E_od_midn, &b_blob_vtx_E_od_midn);
   fChain->SetBranchAddress("blob_vtx_E_od_mu", &blob_vtx_E_od_mu, &b_blob_vtx_E_od_mu);
   fChain->SetBranchAddress("blob_vtx_E_od_other", &blob_vtx_E_od_other, &b_blob_vtx_E_od_other);
   fChain->SetBranchAddress("blob_vtx_E_od_p", &blob_vtx_E_od_p, &b_blob_vtx_E_od_p);
   fChain->SetBranchAddress("blob_vtx_E_od_xtalk", &blob_vtx_E_od_xtalk, &b_blob_vtx_E_od_xtalk);
   fChain->SetBranchAddress("blob_vtx_E_other", &blob_vtx_E_other, &b_blob_vtx_E_other);
   fChain->SetBranchAddress("blob_vtx_E_p", &blob_vtx_E_p, &b_blob_vtx_E_p);
   fChain->SetBranchAddress("blob_vtx_E_tracker", &blob_vtx_E_tracker, &b_blob_vtx_E_tracker);
   fChain->SetBranchAddress("blob_vtx_E_tracker_em", &blob_vtx_E_tracker_em, &b_blob_vtx_E_tracker_em);
   fChain->SetBranchAddress("blob_vtx_E_tracker_highn", &blob_vtx_E_tracker_highn, &b_blob_vtx_E_tracker_highn);
   fChain->SetBranchAddress("blob_vtx_E_tracker_lown", &blob_vtx_E_tracker_lown, &b_blob_vtx_E_tracker_lown);
   fChain->SetBranchAddress("blob_vtx_E_tracker_meson", &blob_vtx_E_tracker_meson, &b_blob_vtx_E_tracker_meson);
   fChain->SetBranchAddress("blob_vtx_E_tracker_midn", &blob_vtx_E_tracker_midn, &b_blob_vtx_E_tracker_midn);
   fChain->SetBranchAddress("blob_vtx_E_tracker_mu", &blob_vtx_E_tracker_mu, &b_blob_vtx_E_tracker_mu);
   fChain->SetBranchAddress("blob_vtx_E_tracker_other", &blob_vtx_E_tracker_other, &b_blob_vtx_E_tracker_other);
   fChain->SetBranchAddress("blob_vtx_E_tracker_p", &blob_vtx_E_tracker_p, &b_blob_vtx_E_tracker_p);
   fChain->SetBranchAddress("blob_vtx_E_tracker_xtalk", &blob_vtx_E_tracker_xtalk, &b_blob_vtx_E_tracker_xtalk);
   fChain->SetBranchAddress("blob_vtx_E_xtalk", &blob_vtx_E_xtalk, &b_blob_vtx_E_xtalk);
   fChain->SetBranchAddress("dis_id_energy", &dis_id_energy, &b_dis_id_energy);
   fChain->SetBranchAddress("energy_from_mc", &energy_from_mc, &b_energy_from_mc);
   fChain->SetBranchAddress("energy_from_mc_fraction", &energy_from_mc_fraction, &b_energy_from_mc_fraction);
   fChain->SetBranchAddress("energy_from_mc_fraction_of_highest", &energy_from_mc_fraction_of_highest, &b_energy_from_mc_fraction_of_highest);
   fChain->SetBranchAddress("muon_iso_blobs_energy", &muon_iso_blobs_energy, &b_muon_iso_blobs_energy);
   fChain->SetBranchAddress("muon_minerva_trk_chi2PerDoF", &muon_minerva_trk_chi2PerDoF, &b_muon_minerva_trk_chi2PerDoF);
   fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_theta", &muon_theta, &b_muon_theta);
   fChain->SetBranchAddress("muon_thetaX", &muon_thetaX, &b_muon_thetaX);
   fChain->SetBranchAddress("muon_thetaY", &muon_thetaY, &b_muon_thetaY);
   fChain->SetBranchAddress("muon_trackVertexTime", &muon_trackVertexTime, &b_muon_trackVertexTime);
   fChain->SetBranchAddress("nonvtx_iso_blobs_energy", &nonvtx_iso_blobs_energy, &b_nonvtx_iso_blobs_energy);
   fChain->SetBranchAddress("nonvtx_iso_blobs_energy_all", &nonvtx_iso_blobs_energy_all, &b_nonvtx_iso_blobs_energy_all);
   fChain->SetBranchAddress("numi_bpm1", &numi_bpm1, &b_numi_bpm1);
   fChain->SetBranchAddress("numi_bpm2", &numi_bpm2, &b_numi_bpm2);
   fChain->SetBranchAddress("numi_bpm3", &numi_bpm3, &b_numi_bpm3);
   fChain->SetBranchAddress("numi_bpm4", &numi_bpm4, &b_numi_bpm4);
   fChain->SetBranchAddress("numi_bpm5", &numi_bpm5, &b_numi_bpm5);
   fChain->SetBranchAddress("numi_bpm6", &numi_bpm6, &b_numi_bpm6);
   fChain->SetBranchAddress("numi_horn_curr", &numi_horn_curr, &b_numi_horn_curr);
   fChain->SetBranchAddress("numi_pot", &numi_pot, &b_numi_pot);
   fChain->SetBranchAddress("numi_tor101", &numi_tor101, &b_numi_tor101);
   fChain->SetBranchAddress("numi_tortgt", &numi_tortgt, &b_numi_tortgt);
   fChain->SetBranchAddress("numi_tr101d", &numi_tr101d, &b_numi_tr101d);
   fChain->SetBranchAddress("numi_trtgtd", &numi_trtgtd, &b_numi_trtgtd);
   fChain->SetBranchAddress("numi_x", &numi_x, &b_numi_x);
   fChain->SetBranchAddress("numi_x_width", &numi_x_width, &b_numi_x_width);
   fChain->SetBranchAddress("numi_y", &numi_y, &b_numi_y);
   fChain->SetBranchAddress("numi_y_width", &numi_y_width, &b_numi_y_width);
   fChain->SetBranchAddress("part_response_recoil_em_id", &part_response_recoil_em_id, &b_part_response_recoil_em_id);
   fChain->SetBranchAddress("part_response_recoil_em_id_err", &part_response_recoil_em_id_err, &b_part_response_recoil_em_id_err);
   fChain->SetBranchAddress("part_response_recoil_em_od", &part_response_recoil_em_od, &b_part_response_recoil_em_od);
   fChain->SetBranchAddress("part_response_recoil_em_od_err", &part_response_recoil_em_od_err, &b_part_response_recoil_em_od_err);
   fChain->SetBranchAddress("part_response_recoil_high_neutron_id", &part_response_recoil_high_neutron_id, &b_part_response_recoil_high_neutron_id);
   fChain->SetBranchAddress("part_response_recoil_high_neutron_id_err", &part_response_recoil_high_neutron_id_err, &b_part_response_recoil_high_neutron_id_err);
   fChain->SetBranchAddress("part_response_recoil_high_neutron_od", &part_response_recoil_high_neutron_od, &b_part_response_recoil_high_neutron_od);
   fChain->SetBranchAddress("part_response_recoil_high_neutron_od_err", &part_response_recoil_high_neutron_od_err, &b_part_response_recoil_high_neutron_od_err);
   fChain->SetBranchAddress("part_response_recoil_high_proton_id", &part_response_recoil_high_proton_id, &b_part_response_recoil_high_proton_id);
   fChain->SetBranchAddress("part_response_recoil_high_proton_id_err", &part_response_recoil_high_proton_id_err, &b_part_response_recoil_high_proton_id_err);
   fChain->SetBranchAddress("part_response_recoil_high_proton_od", &part_response_recoil_high_proton_od, &b_part_response_recoil_high_proton_od);
   fChain->SetBranchAddress("part_response_recoil_high_proton_od_err", &part_response_recoil_high_proton_od_err, &b_part_response_recoil_high_proton_od_err);
   fChain->SetBranchAddress("part_response_recoil_low_neutron_id", &part_response_recoil_low_neutron_id, &b_part_response_recoil_low_neutron_id);
   fChain->SetBranchAddress("part_response_recoil_low_neutron_id_err", &part_response_recoil_low_neutron_id_err, &b_part_response_recoil_low_neutron_id_err);
   fChain->SetBranchAddress("part_response_recoil_low_neutron_od", &part_response_recoil_low_neutron_od, &b_part_response_recoil_low_neutron_od);
   fChain->SetBranchAddress("part_response_recoil_low_neutron_od_err", &part_response_recoil_low_neutron_od_err, &b_part_response_recoil_low_neutron_od_err);
   fChain->SetBranchAddress("part_response_recoil_low_proton_id", &part_response_recoil_low_proton_id, &b_part_response_recoil_low_proton_id);
   fChain->SetBranchAddress("part_response_recoil_low_proton_id_err", &part_response_recoil_low_proton_id_err, &b_part_response_recoil_low_proton_id_err);
   fChain->SetBranchAddress("part_response_recoil_low_proton_od", &part_response_recoil_low_proton_od, &b_part_response_recoil_low_proton_od);
   fChain->SetBranchAddress("part_response_recoil_low_proton_od_err", &part_response_recoil_low_proton_od_err, &b_part_response_recoil_low_proton_od_err);
   fChain->SetBranchAddress("part_response_recoil_meson_id", &part_response_recoil_meson_id, &b_part_response_recoil_meson_id);
   fChain->SetBranchAddress("part_response_recoil_meson_id_err", &part_response_recoil_meson_id_err, &b_part_response_recoil_meson_id_err);
   fChain->SetBranchAddress("part_response_recoil_meson_od", &part_response_recoil_meson_od, &b_part_response_recoil_meson_od);
   fChain->SetBranchAddress("part_response_recoil_meson_od_err", &part_response_recoil_meson_od_err, &b_part_response_recoil_meson_od_err);
   fChain->SetBranchAddress("part_response_recoil_mid_neutron_id", &part_response_recoil_mid_neutron_id, &b_part_response_recoil_mid_neutron_id);
   fChain->SetBranchAddress("part_response_recoil_mid_neutron_id_err", &part_response_recoil_mid_neutron_id_err, &b_part_response_recoil_mid_neutron_id_err);
   fChain->SetBranchAddress("part_response_recoil_mid_neutron_od", &part_response_recoil_mid_neutron_od, &b_part_response_recoil_mid_neutron_od);
   fChain->SetBranchAddress("part_response_recoil_mid_neutron_od_err", &part_response_recoil_mid_neutron_od_err, &b_part_response_recoil_mid_neutron_od_err);
   fChain->SetBranchAddress("part_response_recoil_mid_proton_id", &part_response_recoil_mid_proton_id, &b_part_response_recoil_mid_proton_id);
   fChain->SetBranchAddress("part_response_recoil_mid_proton_id_err", &part_response_recoil_mid_proton_id_err, &b_part_response_recoil_mid_proton_id_err);
   fChain->SetBranchAddress("part_response_recoil_mid_proton_od", &part_response_recoil_mid_proton_od, &b_part_response_recoil_mid_proton_od);
   fChain->SetBranchAddress("part_response_recoil_mid_proton_od_err", &part_response_recoil_mid_proton_od_err, &b_part_response_recoil_mid_proton_od_err);
   fChain->SetBranchAddress("part_response_recoil_muon_id", &part_response_recoil_muon_id, &b_part_response_recoil_muon_id);
   fChain->SetBranchAddress("part_response_recoil_muon_id_err", &part_response_recoil_muon_id_err, &b_part_response_recoil_muon_id_err);
   fChain->SetBranchAddress("part_response_recoil_muon_od", &part_response_recoil_muon_od, &b_part_response_recoil_muon_od);
   fChain->SetBranchAddress("part_response_recoil_muon_od_err", &part_response_recoil_muon_od_err, &b_part_response_recoil_muon_od_err);
   fChain->SetBranchAddress("part_response_recoil_other_id", &part_response_recoil_other_id, &b_part_response_recoil_other_id);
   fChain->SetBranchAddress("part_response_recoil_other_id_err", &part_response_recoil_other_id_err, &b_part_response_recoil_other_id_err);
   fChain->SetBranchAddress("part_response_recoil_other_od", &part_response_recoil_other_od, &b_part_response_recoil_other_od);
   fChain->SetBranchAddress("part_response_recoil_other_od_err", &part_response_recoil_other_od_err, &b_part_response_recoil_other_od_err);
   fChain->SetBranchAddress("part_response_recoil_proton_id", &part_response_recoil_proton_id, &b_part_response_recoil_proton_id);
   fChain->SetBranchAddress("part_response_recoil_proton_id_err", &part_response_recoil_proton_id_err, &b_part_response_recoil_proton_id_err);
   fChain->SetBranchAddress("part_response_recoil_proton_od", &part_response_recoil_proton_od, &b_part_response_recoil_proton_od);
   fChain->SetBranchAddress("part_response_recoil_proton_od_err", &part_response_recoil_proton_od_err, &b_part_response_recoil_proton_od_err);
   fChain->SetBranchAddress("part_response_recoil_xtalk_id", &part_response_recoil_xtalk_id, &b_part_response_recoil_xtalk_id);
   fChain->SetBranchAddress("part_response_recoil_xtalk_id_err", &part_response_recoil_xtalk_id_err, &b_part_response_recoil_xtalk_id_err);
   fChain->SetBranchAddress("part_response_recoil_xtalk_od", &part_response_recoil_xtalk_od, &b_part_response_recoil_xtalk_od);
   fChain->SetBranchAddress("part_response_recoil_xtalk_od_err", &part_response_recoil_xtalk_od_err, &b_part_response_recoil_xtalk_od_err);
   fChain->SetBranchAddress("phys_energy_dispersed", &phys_energy_dispersed, &b_phys_energy_dispersed);
   fChain->SetBranchAddress("phys_energy_in_road_downstream", &phys_energy_in_road_downstream, &b_phys_energy_in_road_downstream);
   fChain->SetBranchAddress("phys_energy_in_road_upstream", &phys_energy_in_road_upstream, &b_phys_energy_in_road_upstream);
   fChain->SetBranchAddress("phys_energy_unattached", &phys_energy_unattached, &b_phys_energy_unattached);
   fChain->SetBranchAddress("prim_vtx_smallest_opening_angle", &prim_vtx_smallest_opening_angle, &b_prim_vtx_smallest_opening_angle);
   fChain->SetBranchAddress("proton_track_endx", &proton_track_endx, &b_proton_track_endx);
   fChain->SetBranchAddress("proton_track_endy", &proton_track_endy, &b_proton_track_endy);
   fChain->SetBranchAddress("proton_track_endz", &proton_track_endz, &b_proton_track_endz);
   fChain->SetBranchAddress("proton_track_length", &proton_track_length, &b_proton_track_length);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx0mm", &recoil_energy_nonmuon_nonvtx0mm, &b_recoil_energy_nonmuon_nonvtx0mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx100mm", &recoil_energy_nonmuon_nonvtx100mm, &b_recoil_energy_nonmuon_nonvtx100mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx150mm", &recoil_energy_nonmuon_nonvtx150mm, &b_recoil_energy_nonmuon_nonvtx150mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx200mm", &recoil_energy_nonmuon_nonvtx200mm, &b_recoil_energy_nonmuon_nonvtx200mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx250mm", &recoil_energy_nonmuon_nonvtx250mm, &b_recoil_energy_nonmuon_nonvtx250mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx300mm", &recoil_energy_nonmuon_nonvtx300mm, &b_recoil_energy_nonmuon_nonvtx300mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_nonvtx50mm", &recoil_energy_nonmuon_nonvtx50mm, &b_recoil_energy_nonmuon_nonvtx50mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx0mm", &recoil_energy_nonmuon_vtx0mm, &b_recoil_energy_nonmuon_vtx0mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx100mm", &recoil_energy_nonmuon_vtx100mm, &b_recoil_energy_nonmuon_vtx100mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx150mm", &recoil_energy_nonmuon_vtx150mm, &b_recoil_energy_nonmuon_vtx150mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx200mm", &recoil_energy_nonmuon_vtx200mm, &b_recoil_energy_nonmuon_vtx200mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx250mm", &recoil_energy_nonmuon_vtx250mm, &b_recoil_energy_nonmuon_vtx250mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx300mm", &recoil_energy_nonmuon_vtx300mm, &b_recoil_energy_nonmuon_vtx300mm);
   fChain->SetBranchAddress("recoil_energy_nonmuon_vtx50mm", &recoil_energy_nonmuon_vtx50mm, &b_recoil_energy_nonmuon_vtx50mm);
   fChain->SetBranchAddress("vtx_blobs_energy", &vtx_blobs_energy, &b_vtx_blobs_energy);
   fChain->SetBranchAddress("vtx_iso_blobs_energy_outside_radius", &vtx_iso_blobs_energy_outside_radius, &b_vtx_iso_blobs_energy_outside_radius);
   fChain->SetBranchAddress("_sz", &_sz, &b__sz);
   //fChain->SetBranchAddress("", &, &b_);
   fChain->SetBranchAddress("ANN_segments", ANN_segments, &b_ANN_segments);
   fChain->SetBranchAddress("ANN_vtx_modules_sz", &ANN_vtx_modules_sz, &b_ANN_vtx_modules_sz);
   fChain->SetBranchAddress("ANN_vtx_modules", &ANN_vtx_modules, &b_ANN_vtx_modules);
   fChain->SetBranchAddress("ANN_vtx_planes_sz", &ANN_vtx_planes_sz, &b_ANN_vtx_planes_sz);
   fChain->SetBranchAddress("ANN_vtx_planes", &ANN_vtx_planes, &b_ANN_vtx_planes);
   fChain->SetBranchAddress("VetoWall_PMTStatusMAP", VetoWall_PMTStatusMAP, &b_VetoWall_PMTStatusMAP);
   fChain->SetBranchAddress("VetoWall_sixPush_paddle_wall1_sz", &VetoWall_sixPush_paddle_wall1_sz, &b_VetoWall_sixPush_paddle_wall1_sz);
   fChain->SetBranchAddress("VetoWall_sixPush_paddle_wall1", VetoWall_sixPush_paddle_wall1, &b_VetoWall_sixPush_paddle_wall1);
   fChain->SetBranchAddress("VetoWall_sixPush_paddle_wall2_sz", &VetoWall_sixPush_paddle_wall2_sz, &b_VetoWall_sixPush_paddle_wall2_sz);
   fChain->SetBranchAddress("VetoWall_sixPush_paddle_wall2", VetoWall_sixPush_paddle_wall2, &b_VetoWall_sixPush_paddle_wall2);
   fChain->SetBranchAddress("all_event_start_vertex_fv_minos_match_sz", &all_event_start_vertex_fv_minos_match_sz, &b_all_event_start_vertex_fv_minos_match_sz);
   fChain->SetBranchAddress("all_event_start_vertex_fv_minos_match", all_event_start_vertex_fv_minos_match, &b_all_event_start_vertex_fv_minos_match);
   fChain->SetBranchAddress("clusters_found_at_end_proton_prong_sz", &clusters_found_at_end_proton_prong_sz, &b_clusters_found_at_end_proton_prong_sz);
   fChain->SetBranchAddress("clusters_found_at_end_proton_prong", clusters_found_at_end_proton_prong, &b_clusters_found_at_end_proton_prong);
   fChain->SetBranchAddress("event_in_time_vertex_types_sz", &event_in_time_vertex_types_sz, &b_event_in_time_vertex_types_sz);
   fChain->SetBranchAddress("event_in_time_vertex_types", event_in_time_vertex_types, &b_event_in_time_vertex_types);
   fChain->SetBranchAddress("event_track_nhits_sz", &event_track_nhits_sz, &b_event_track_nhits_sz);
   fChain->SetBranchAddress("event_track_nhits", event_track_nhits, &b_event_track_nhits);
   fChain->SetBranchAddress("event_vertex_types_sz", &event_vertex_types_sz, &b_event_vertex_types_sz);
   fChain->SetBranchAddress("event_vertex_types", event_vertex_types, &b_event_vertex_types);
   fChain->SetBranchAddress("improved_michel_in_vertex_point_sz", &improved_michel_in_vertex_point_sz, &b_improved_michel_in_vertex_point_sz);
   fChain->SetBranchAddress("improved_michel_in_vertex_point", improved_michel_in_vertex_point, &b_improved_michel_in_vertex_point);
   fChain->SetBranchAddress("improved_michel_match_vec_sz", &improved_michel_match_vec_sz, &b_improved_michel_match_vec_sz);
   fChain->SetBranchAddress("improved_michel_match_vec", improved_michel_match_vec, &b_improved_michel_match_vec);
   fChain->SetBranchAddress("improved_michel_matched_pdg_sz", &improved_michel_matched_pdg_sz, &b_improved_michel_matched_pdg_sz);
   fChain->SetBranchAddress("improved_michel_matched_pdg", improved_michel_matched_pdg, &b_improved_michel_matched_pdg);
   fChain->SetBranchAddress("improved_michel_matched_primary_pdg_sz", &improved_michel_matched_primary_pdg_sz, &b_improved_michel_matched_primary_pdg_sz);
   fChain->SetBranchAddress("improved_michel_matched_primary_pdg", improved_michel_matched_primary_pdg, &b_improved_michel_matched_primary_pdg);
   fChain->SetBranchAddress("improved_michel_ndigits_sz", &improved_michel_ndigits_sz, &b_improved_michel_ndigits_sz);
   fChain->SetBranchAddress("improved_michel_ndigits", improved_michel_ndigits, &b_improved_michel_ndigits);
   fChain->SetBranchAddress("improved_michel_vertex_type_sz", &improved_michel_vertex_type_sz, &b_improved_michel_vertex_type_sz);
   fChain->SetBranchAddress("improved_michel_vertex_type", improved_michel_vertex_type, &b_improved_michel_vertex_type);
   fChain->SetBranchAddress("improved_michel_view_vec_sz", &improved_michel_view_vec_sz, &b_improved_michel_view_vec_sz);
   fChain->SetBranchAddress("improved_michel_view_vec", improved_michel_view_vec, &b_improved_michel_view_vec);
   fChain->SetBranchAddress("latticeEnergyIndices", latticeEnergyIndices, &b_latticeEnergyIndices);
//   fChain->SetBranchAddress("latticeEnergyIndices_new", latticeEnergyIndices_new, &b_latticeEnergyIndices_new);
   fChain->SetBranchAddress("nonvtx_iso_blobs_n_hits_in_prong_sz", &nonvtx_iso_blobs_n_hits_in_prong_sz, &b_nonvtx_iso_blobs_n_hits_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_n_hits_in_prong", nonvtx_iso_blobs_n_hits_in_prong, &b_nonvtx_iso_blobs_n_hits_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_particle_pdg_in_prong_sz", &nonvtx_iso_blobs_particle_pdg_in_prong_sz, &b_nonvtx_iso_blobs_particle_pdg_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_particle_pdg_in_prong", nonvtx_iso_blobs_particle_pdg_in_prong, &b_nonvtx_iso_blobs_particle_pdg_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_primary_particle_pdg_in_prong_sz", &nonvtx_iso_blobs_primary_particle_pdg_in_prong_sz, &b_nonvtx_iso_blobs_primary_particle_pdg_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_primary_particle_pdg_in_prong", nonvtx_iso_blobs_primary_particle_pdg_in_prong, &b_nonvtx_iso_blobs_primary_particle_pdg_in_prong);
   fChain->SetBranchAddress("number_clusters_at_end_proton_prong_sz", &number_clusters_at_end_proton_prong_sz, &b_number_clusters_at_end_proton_prong_sz);
   fChain->SetBranchAddress("number_clusters_at_end_proton_prong", number_clusters_at_end_proton_prong, &b_number_clusters_at_end_proton_prong);
   fChain->SetBranchAddress("recoil_lower_time_limit_sz", &recoil_lower_time_limit_sz, &b_recoil_lower_time_limit_sz);
   fChain->SetBranchAddress("recoil_lower_time_limit", recoil_lower_time_limit, &b_recoil_lower_time_limit);
   fChain->SetBranchAddress("recoil_upper_time_limit_sz", &recoil_upper_time_limit_sz, &b_recoil_upper_time_limit_sz);
   fChain->SetBranchAddress("recoil_upper_time_limit", recoil_upper_time_limit, &b_recoil_upper_time_limit);
   fChain->SetBranchAddress("sec_protons_prong_PDG_sz", &sec_protons_prong_PDG_sz, &b_sec_protons_prong_PDG_sz);
   fChain->SetBranchAddress("sec_protons_prong_PDG", sec_protons_prong_PDG, &b_sec_protons_prong_PDG);
   fChain->SetBranchAddress("sec_protons_prong_traj_ID_sz", &sec_protons_prong_traj_ID_sz, &b_sec_protons_prong_traj_ID_sz);
   fChain->SetBranchAddress("sec_protons_prong_traj_ID", sec_protons_prong_traj_ID, &b_sec_protons_prong_traj_ID);
//    fChain->SetBranchAddress("", &, &b_);
   fChain->SetBranchAddress("ANN_plane_probs", ANN_plane_probs, &b_ANN_plane_probs);
   fChain->SetBranchAddress("VetoWall_muon_extrapVetoXY", VetoWall_muon_extrapVetoXY, &b_VetoWall_muon_extrapVetoXY);
   fChain->SetBranchAddress("all_event_start_vertex_time_sz", &all_event_start_vertex_time_sz, &b_all_event_start_vertex_time_sz);
   fChain->SetBranchAddress("all_event_start_vertex_time", all_event_start_vertex_time, &b_all_event_start_vertex_time);
   fChain->SetBranchAddress("all_event_start_vertex_time_minos_match_sz", &all_event_start_vertex_time_minos_match_sz, &b_all_event_start_vertex_time_minos_match_sz);
   fChain->SetBranchAddress("all_event_start_vertex_time_minos_match", all_event_start_vertex_time_minos_match, &b_all_event_start_vertex_time_minos_match);
   fChain->SetBranchAddress("calibE_clusters_at_end_proton_prong_sz", &calibE_clusters_at_end_proton_prong_sz, &b_calibE_clusters_at_end_proton_prong_sz);
   fChain->SetBranchAddress("calibE_clusters_at_end_proton_prong", calibE_clusters_at_end_proton_prong, &b_calibE_clusters_at_end_proton_prong);
   fChain->SetBranchAddress("clusters_found_at_end_proton_prong_max_distance_sz", &clusters_found_at_end_proton_prong_max_distance_sz, &b_clusters_found_at_end_proton_prong_max_distance_sz);
   fChain->SetBranchAddress("clusters_found_at_end_proton_prong_max_distance", clusters_found_at_end_proton_prong_max_distance, &b_clusters_found_at_end_proton_prong_max_distance);
   fChain->SetBranchAddress("event_extra_track_PID_sz", &event_extra_track_PID_sz, &b_event_extra_track_PID_sz);
   fChain->SetBranchAddress("event_extra_track_PID", event_extra_track_PID, &b_event_extra_track_PID);
   fChain->SetBranchAddress("event_in_time_tracks_energy_sz", &event_in_time_tracks_energy_sz, &b_event_in_time_tracks_energy_sz);
   fChain->SetBranchAddress("event_in_time_tracks_energy", event_in_time_tracks_energy, &b_event_in_time_tracks_energy);
   fChain->SetBranchAddress("event_track_hit_energy_sz", &event_track_hit_energy_sz, &b_event_track_hit_energy_sz);
   fChain->SetBranchAddress("event_track_hit_energy", event_track_hit_energy, &b_event_track_hit_energy);
   fChain->SetBranchAddress("event_track_hit_time_sz", &event_track_hit_time_sz, &b_event_track_hit_time_sz);
   fChain->SetBranchAddress("event_track_hit_time", event_track_hit_time, &b_event_track_hit_time);
   fChain->SetBranchAddress("event_track_time_diff_sz", &event_track_time_diff_sz, &b_event_track_time_diff_sz);
   fChain->SetBranchAddress("event_track_time_diff", event_track_time_diff, &b_event_track_time_diff);
   fChain->SetBranchAddress("event_tracks_energy_sz", &event_tracks_energy_sz, &b_event_tracks_energy_sz);
   fChain->SetBranchAddress("event_tracks_energy", event_tracks_energy, &b_event_tracks_energy);
   fChain->SetBranchAddress("event_vertex_time_diff_sz", &event_vertex_time_diff_sz, &b_event_vertex_time_diff_sz);
   fChain->SetBranchAddress("event_vertex_time_diff", event_vertex_time_diff, &b_event_vertex_time_diff);
   fChain->SetBranchAddress("improved_michel_data_energy_fraction_sz", &improved_michel_data_energy_fraction_sz, &b_improved_michel_data_energy_fraction_sz);
   fChain->SetBranchAddress("improved_michel_data_energy_fraction", improved_michel_data_energy_fraction, &b_improved_michel_data_energy_fraction);
   fChain->SetBranchAddress("improved_michel_dist_vec_sz", &improved_michel_dist_vec_sz, &b_improved_michel_dist_vec_sz);
   fChain->SetBranchAddress("improved_michel_dist_vec", improved_michel_dist_vec, &b_improved_michel_dist_vec);
   fChain->SetBranchAddress("improved_michel_ecalo_vec_sz", &improved_michel_ecalo_vec_sz, &b_improved_michel_ecalo_vec_sz);
   fChain->SetBranchAddress("improved_michel_ecalo_vec", improved_michel_ecalo_vec, &b_improved_michel_ecalo_vec);
   fChain->SetBranchAddress("improved_michel_evis_vec_sz", &improved_michel_evis_vec_sz, &b_improved_michel_evis_vec_sz);
   fChain->SetBranchAddress("improved_michel_evis_vec", improved_michel_evis_vec, &b_improved_michel_evis_vec);
   fChain->SetBranchAddress("improved_michel_hit_charges_sz", &improved_michel_hit_charges_sz, &b_improved_michel_hit_charges_sz);
   fChain->SetBranchAddress("improved_michel_hit_charges", improved_michel_hit_charges, &b_improved_michel_hit_charges);
   fChain->SetBranchAddress("improved_michel_hit_time_diff_cluster_sz", &improved_michel_hit_time_diff_cluster_sz, &b_improved_michel_hit_time_diff_cluster_sz);
   fChain->SetBranchAddress("improved_michel_hit_time_diff_cluster", improved_michel_hit_time_diff_cluster, &b_improved_michel_hit_time_diff_cluster);
   fChain->SetBranchAddress("improved_michel_hit_time_diff_vtx_sz", &improved_michel_hit_time_diff_vtx_sz, &b_improved_michel_hit_time_diff_vtx_sz);
   fChain->SetBranchAddress("improved_michel_hit_time_diff_vtx", improved_michel_hit_time_diff_vtx, &b_improved_michel_hit_time_diff_vtx);
   fChain->SetBranchAddress("improved_michel_hit_times_sz", &improved_michel_hit_times_sz, &b_improved_michel_hit_times_sz);
   fChain->SetBranchAddress("improved_michel_hit_times", improved_michel_hit_times, &b_improved_michel_hit_times);
   fChain->SetBranchAddress("improved_michel_matched_energy_fraction_sz", &improved_michel_matched_energy_fraction_sz, &b_improved_michel_matched_energy_fraction_sz);
   fChain->SetBranchAddress("improved_michel_matched_energy_fraction", improved_michel_matched_energy_fraction, &b_improved_michel_matched_energy_fraction);
   fChain->SetBranchAddress("improved_michel_tdiff_vec_sz", &improved_michel_tdiff_vec_sz, &b_improved_michel_tdiff_vec_sz);
   fChain->SetBranchAddress("improved_michel_tdiff_vec", improved_michel_tdiff_vec, &b_improved_michel_tdiff_vec);
   fChain->SetBranchAddress("improved_michel_tvec_sz", &improved_michel_tvec_sz, &b_improved_michel_tvec_sz);
   fChain->SetBranchAddress("improved_michel_tvec", improved_michel_tvec, &b_improved_michel_tvec);
   fChain->SetBranchAddress("improved_michel_uvec_sz", &improved_michel_uvec_sz, &b_improved_michel_uvec_sz);
   fChain->SetBranchAddress("improved_michel_uvec", improved_michel_uvec, &b_improved_michel_uvec);
   fChain->SetBranchAddress("improved_michel_vvec_sz", &improved_michel_vvec_sz, &b_improved_michel_vvec_sz);
   fChain->SetBranchAddress("improved_michel_vvec", improved_michel_vvec, &b_improved_michel_vvec);
   fChain->SetBranchAddress("improved_michel_xvec_sz", &improved_michel_xvec_sz, &b_improved_michel_xvec_sz);
   fChain->SetBranchAddress("improved_michel_xvec", improved_michel_xvec, &b_improved_michel_xvec);
   fChain->SetBranchAddress("improved_michel_yvec_sz", &improved_michel_yvec_sz, &b_improved_michel_yvec_sz);
   fChain->SetBranchAddress("improved_michel_yvec", improved_michel_yvec, &b_improved_michel_yvec);
   fChain->SetBranchAddress("improved_michel_zvec_sz", &improved_michel_zvec_sz, &b_improved_michel_zvec_sz);
   fChain->SetBranchAddress("improved_michel_zvec", improved_michel_zvec, &b_improved_michel_zvec);
   fChain->SetBranchAddress("latticeNormEnergySums", latticeNormEnergySums, &b_latticeNormEnergySums);
   fChain->SetBranchAddress("latticeRelativeTimes", latticeRelativeTimes, &b_latticeRelativeTimes);
//   fChain->SetBranchAddress("latticeNormEnergySums_new", latticeNormEnergySums_new, &b_latticeNormEnergySums_new);
//   fChain->SetBranchAddress("latticeRelativeTimes_new", latticeRelativeTimes_new, &b_latticeRelativeTimes_new);
   fChain->SetBranchAddress("muon_thetaX_allNodes_sz", &muon_thetaX_allNodes_sz, &b_muon_thetaX_allNodes_sz);
   fChain->SetBranchAddress("muon_thetaX_allNodes", muon_thetaX_allNodes, &b_muon_thetaX_allNodes);
   fChain->SetBranchAddress("muon_thetaY_allNodes_sz", &muon_thetaY_allNodes_sz, &b_muon_thetaY_allNodes_sz);
   fChain->SetBranchAddress("muon_thetaY_allNodes", muon_thetaY_allNodes, &b_muon_thetaY_allNodes);
   fChain->SetBranchAddress("muon_theta_allNodes_sz", &muon_theta_allNodes_sz, &b_muon_theta_allNodes_sz);
   fChain->SetBranchAddress("muon_theta_allNodes", muon_theta_allNodes, &b_muon_theta_allNodes);
   fChain->SetBranchAddress("nonvtx_iso_blobs_data_energy_fraction_in_prong_sz", &nonvtx_iso_blobs_data_energy_fraction_in_prong_sz, &b_nonvtx_iso_blobs_data_energy_fraction_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_data_energy_fraction_in_prong", nonvtx_iso_blobs_data_energy_fraction_in_prong, &b_nonvtx_iso_blobs_data_energy_fraction_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_distance_in_prong_sz", &nonvtx_iso_blobs_distance_in_prong_sz, &b_nonvtx_iso_blobs_distance_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_distance_in_prong", nonvtx_iso_blobs_distance_in_prong, &b_nonvtx_iso_blobs_distance_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_earliest_hit_time_in_prong_sz", &nonvtx_iso_blobs_earliest_hit_time_in_prong_sz, &b_nonvtx_iso_blobs_earliest_hit_time_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_earliest_hit_time_in_prong", nonvtx_iso_blobs_earliest_hit_time_in_prong, &b_nonvtx_iso_blobs_earliest_hit_time_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_energy_in_prong_sz", &nonvtx_iso_blobs_energy_in_prong_sz, &b_nonvtx_iso_blobs_energy_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_energy_in_prong", nonvtx_iso_blobs_energy_in_prong, &b_nonvtx_iso_blobs_energy_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_hit_energy_in_prong_sz", &nonvtx_iso_blobs_highest_hit_energy_in_prong_sz, &b_nonvtx_iso_blobs_highest_hit_energy_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_hit_energy_in_prong", nonvtx_iso_blobs_highest_hit_energy_in_prong, &b_nonvtx_iso_blobs_highest_hit_energy_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_module_u_in_prong_sz", &nonvtx_iso_blobs_highest_module_u_in_prong_sz, &b_nonvtx_iso_blobs_highest_module_u_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_module_u_in_prong", nonvtx_iso_blobs_highest_module_u_in_prong, &b_nonvtx_iso_blobs_highest_module_u_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_module_v_in_prong_sz", &nonvtx_iso_blobs_highest_module_v_in_prong_sz, &b_nonvtx_iso_blobs_highest_module_v_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_module_v_in_prong", nonvtx_iso_blobs_highest_module_v_in_prong, &b_nonvtx_iso_blobs_highest_module_v_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_module_x_in_prong_sz", &nonvtx_iso_blobs_highest_module_x_in_prong_sz, &b_nonvtx_iso_blobs_highest_module_x_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_highest_module_x_in_prong", nonvtx_iso_blobs_highest_module_x_in_prong, &b_nonvtx_iso_blobs_highest_module_x_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_latest_hit_time_in_prong_sz", &nonvtx_iso_blobs_latest_hit_time_in_prong_sz, &b_nonvtx_iso_blobs_latest_hit_time_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_latest_hit_time_in_prong", nonvtx_iso_blobs_latest_hit_time_in_prong, &b_nonvtx_iso_blobs_latest_hit_time_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_lowest_module_u_in_prong_sz", &nonvtx_iso_blobs_lowest_module_u_in_prong_sz, &b_nonvtx_iso_blobs_lowest_module_u_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_lowest_module_u_in_prong", nonvtx_iso_blobs_lowest_module_u_in_prong, &b_nonvtx_iso_blobs_lowest_module_u_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_lowest_module_v_in_prong_sz", &nonvtx_iso_blobs_lowest_module_v_in_prong_sz, &b_nonvtx_iso_blobs_lowest_module_v_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_lowest_module_v_in_prong", nonvtx_iso_blobs_lowest_module_v_in_prong, &b_nonvtx_iso_blobs_lowest_module_v_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_lowest_module_x_in_prong_sz", &nonvtx_iso_blobs_lowest_module_x_in_prong_sz, &b_nonvtx_iso_blobs_lowest_module_x_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_lowest_module_x_in_prong", nonvtx_iso_blobs_lowest_module_x_in_prong, &b_nonvtx_iso_blobs_lowest_module_x_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_matched_energy_fraction_in_prong_sz", &nonvtx_iso_blobs_matched_energy_fraction_in_prong_sz, &b_nonvtx_iso_blobs_matched_energy_fraction_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_matched_energy_fraction_in_prong", nonvtx_iso_blobs_matched_energy_fraction_in_prong, &b_nonvtx_iso_blobs_matched_energy_fraction_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_start_position_x_in_prong_sz", &nonvtx_iso_blobs_start_position_x_in_prong_sz, &b_nonvtx_iso_blobs_start_position_x_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_start_position_x_in_prong", nonvtx_iso_blobs_start_position_x_in_prong, &b_nonvtx_iso_blobs_start_position_x_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_start_position_y_in_prong_sz", &nonvtx_iso_blobs_start_position_y_in_prong_sz, &b_nonvtx_iso_blobs_start_position_y_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_start_position_y_in_prong", nonvtx_iso_blobs_start_position_y_in_prong, &b_nonvtx_iso_blobs_start_position_y_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_start_position_z_in_prong_sz", &nonvtx_iso_blobs_start_position_z_in_prong_sz, &b_nonvtx_iso_blobs_start_position_z_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_start_position_z_in_prong", nonvtx_iso_blobs_start_position_z_in_prong, &b_nonvtx_iso_blobs_start_position_z_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_time_difference_in_prong_sz", &nonvtx_iso_blobs_time_difference_in_prong_sz, &b_nonvtx_iso_blobs_time_difference_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_time_difference_in_prong", nonvtx_iso_blobs_time_difference_in_prong, &b_nonvtx_iso_blobs_time_difference_in_prong);
   fChain->SetBranchAddress("nonvtx_iso_blobs_time_in_prong_sz", &nonvtx_iso_blobs_time_in_prong_sz, &b_nonvtx_iso_blobs_time_in_prong_sz);
   fChain->SetBranchAddress("nonvtx_iso_blobs_time_in_prong", nonvtx_iso_blobs_time_in_prong, &b_nonvtx_iso_blobs_time_in_prong);
   fChain->SetBranchAddress("proton_prong_4p", proton_prong_4p, &b_proton_prong_4p);
   fChain->SetBranchAddress("proton_prong_tpos", proton_prong_tpos, &b_proton_prong_tpos);
   fChain->SetBranchAddress("proton_prong_tpos_t_sz", &proton_prong_tpos_t_sz, &b_proton_prong_tpos_t_sz);
   fChain->SetBranchAddress("proton_prong_tpos_t", proton_prong_tpos_t, &b_proton_prong_tpos_t);
   fChain->SetBranchAddress("proton_prong_tpos_x_sz", &proton_prong_tpos_x_sz, &b_proton_prong_tpos_x_sz);
   fChain->SetBranchAddress("proton_prong_tpos_x", proton_prong_tpos_x, &b_proton_prong_tpos_x);
   fChain->SetBranchAddress("proton_prong_tpos_y_sz", &proton_prong_tpos_y_sz, &b_proton_prong_tpos_y_sz);
   fChain->SetBranchAddress("proton_prong_tpos_y", proton_prong_tpos_y, &b_proton_prong_tpos_y);
   fChain->SetBranchAddress("proton_prong_tpos_z_sz", &proton_prong_tpos_z_sz, &b_proton_prong_tpos_z_sz);
   fChain->SetBranchAddress("proton_prong_tpos_z", proton_prong_tpos_z, &b_proton_prong_tpos_z);
   fChain->SetBranchAddress("recoil_data_fraction_sz", &recoil_data_fraction_sz, &b_recoil_data_fraction_sz);
   fChain->SetBranchAddress("recoil_data_fraction", recoil_data_fraction, &b_recoil_data_fraction);
   fChain->SetBranchAddress("recoil_summed_energy_sz", &recoil_summed_energy_sz, &b_recoil_summed_energy_sz);
   fChain->SetBranchAddress("recoil_summed_energy", recoil_summed_energy, &b_recoil_summed_energy);
   fChain->SetBranchAddress("recoil_summed_energy_edge_sz", &recoil_summed_energy_edge_sz, &b_recoil_summed_energy_edge_sz);
   fChain->SetBranchAddress("recoil_summed_energy_edge", recoil_summed_energy_edge, &b_recoil_summed_energy_edge);
   fChain->SetBranchAddress("seco_protons_prong_4p_E_sz", &seco_protons_prong_4p_E_sz, &b_seco_protons_prong_4p_E_sz);
   fChain->SetBranchAddress("seco_protons_prong_4p_E", seco_protons_prong_4p_E, &b_seco_protons_prong_4p_E);
   fChain->SetBranchAddress("seco_protons_prong_4p_px_sz", &seco_protons_prong_4p_px_sz, &b_seco_protons_prong_4p_px_sz);
   fChain->SetBranchAddress("seco_protons_prong_4p_px", seco_protons_prong_4p_px, &b_seco_protons_prong_4p_px);
   fChain->SetBranchAddress("seco_protons_prong_4p_py_sz", &seco_protons_prong_4p_py_sz, &b_seco_protons_prong_4p_py_sz);
   fChain->SetBranchAddress("seco_protons_prong_4p_py", seco_protons_prong_4p_py, &b_seco_protons_prong_4p_py);
   fChain->SetBranchAddress("seco_protons_prong_4p_pz_sz", &seco_protons_prong_4p_pz_sz, &b_seco_protons_prong_4p_pz_sz);
   fChain->SetBranchAddress("seco_protons_prong_4p_pz", seco_protons_prong_4p_pz, &b_seco_protons_prong_4p_pz);
   fChain->SetBranchAddress("slice_hit_energy_sz", &slice_hit_energy_sz, &b_slice_hit_energy_sz);
   fChain->SetBranchAddress("slice_hit_energy", slice_hit_energy, &b_slice_hit_energy);
   fChain->SetBranchAddress("slice_hit_time_sz", &slice_hit_time_sz, &b_slice_hit_time_sz);
   fChain->SetBranchAddress("slice_hit_time", slice_hit_time, &b_slice_hit_time);
   fChain->SetBranchAddress("visE_clusters_at_end_proton_prong_sz", &visE_clusters_at_end_proton_prong_sz, &b_visE_clusters_at_end_proton_prong_sz);
   fChain->SetBranchAddress("visE_clusters_at_end_proton_prong", visE_clusters_at_end_proton_prong, &b_visE_clusters_at_end_proton_prong);
   fChain->SetBranchAddress("vtx_blob_radius", &vtx_blob_radius, &b_vtx_blob_radius);
   fChain->SetBranchAddress("vtx_blobs_iso_distance_in_prong_sz", &vtx_blobs_iso_distance_in_prong_sz, &b_vtx_blobs_iso_distance_in_prong_sz);
   fChain->SetBranchAddress("vtx_blobs_iso_distance_in_prong", &vtx_blobs_iso_distance_in_prong, &b_vtx_blobs_iso_distance_in_prong);
   fChain->SetBranchAddress("vtx_blobs_iso_energy_clusters_outside_radius_in_prong_sz", &vtx_blobs_iso_energy_clusters_outside_radius_in_prong_sz, &b_vtx_blobs_iso_energy_clusters_outside_radius_in_prong_sz);
   fChain->SetBranchAddress("vtx_blobs_iso_energy_clusters_outside_radius_in_prong", &vtx_blobs_iso_energy_clusters_outside_radius_in_prong, &b_vtx_blobs_iso_energy_clusters_outside_radius_in_prong);
   fChain->SetBranchAddress("vtx_blobs_iso_energy_in_prong_sz", &vtx_blobs_iso_energy_in_prong_sz, &b_vtx_blobs_iso_energy_in_prong_sz);
   fChain->SetBranchAddress("vtx_blobs_iso_energy_in_prong", &vtx_blobs_iso_energy_in_prong, &b_vtx_blobs_iso_energy_in_prong);
   fChain->SetBranchAddress("vtx_blobs_vtx_distance_in_prong_sz", &vtx_blobs_vtx_distance_in_prong_sz, &b_vtx_blobs_vtx_distance_in_prong_sz);
   fChain->SetBranchAddress("vtx_blobs_vtx_distance_in_prong", &vtx_blobs_vtx_distance_in_prong, &b_vtx_blobs_vtx_distance_in_prong);
   fChain->SetBranchAddress("vtx_blobs_vtx_energy_in_prong_sz", &vtx_blobs_vtx_energy_in_prong_sz, &b_vtx_blobs_vtx_energy_in_prong_sz);
   fChain->SetBranchAddress("vtx_blobs_vtx_energy_in_prong", vtx_blobs_vtx_energy_in_prong, &b_vtx_blobs_vtx_energy_in_prong);
   fChain->SetBranchAddress("truth_has_physics_event", &truth_has_physics_event, &b_truth_has_physics_event);
   fChain->SetBranchAddress("truth_pass_MasterAnaDev", &truth_pass_MasterAnaDev, &b_truth_pass_MasterAnaDev);
   fChain->SetBranchAddress("truth_is_fiducial", &truth_is_fiducial, &b_truth_is_fiducial);
   fChain->SetBranchAddress("truth_reco_has_muon", &truth_reco_has_muon, &b_truth_reco_has_muon);
   fChain->SetBranchAddress("truth_reco_has_int_vtx", &truth_reco_has_int_vtx, &b_truth_reco_has_int_vtx);
   //fChain->SetBranchAddress("truth_", &truth_, &b_truth_);
   fChain->SetBranchAddress("truth_hadronReweightNPaths", &truth_hadronReweightNPaths, &b_truth_hadronReweightNPaths);
   fChain->SetBranchAddress("truth_hadronReweightNPoints", &truth_hadronReweightNPoints, &b_truth_hadronReweightNPoints);
   fChain->SetBranchAddress("truth_in_fiducial_area", &truth_in_fiducial_area, &b_truth_in_fiducial_area);
   fChain->SetBranchAddress("truth_reco_has_muon_charge", &truth_reco_has_muon_charge, &b_truth_reco_has_muon_charge);
   fChain->SetBranchAddress("truth_reco_has_single_proton", &truth_reco_has_single_proton, &b_truth_reco_has_single_proton);
   fChain->SetBranchAddress("truth_reco_is_fiducial", &truth_reco_is_fiducial, &b_truth_reco_is_fiducial);
   fChain->SetBranchAddress("truth_reco_is_minos_match", &truth_reco_is_minos_match, &b_truth_reco_is_minos_match);
   fChain->SetBranchAddress("truth_reco_muon_is_minos_match_stub", &truth_reco_muon_is_minos_match_stub, &b_truth_reco_muon_is_minos_match_stub);
   fChain->SetBranchAddress("truth_reco_muon_is_minos_match_track", &truth_reco_muon_is_minos_match_track, &b_truth_reco_muon_is_minos_match_track);
   fChain->SetBranchAddress("truth_reco_pass_MasterAnaDev_precuts", &truth_reco_pass_MasterAnaDev_precuts, &b_truth_reco_pass_MasterAnaDev_precuts);
   fChain->SetBranchAddress("truth_targetID", &truth_targetID, &b_truth_targetID);
   fChain->SetBranchAddress("truth_targetZ", &truth_targetZ, &b_truth_targetZ);
   fChain->SetBranchAddress("truth_target_code", &truth_target_code, &b_truth_target_code);
   fChain->SetBranchAddress("truth_vtx_module", &truth_vtx_module, &b_truth_vtx_module);
   fChain->SetBranchAddress("truth_vtx_plane", &truth_vtx_plane, &b_truth_vtx_plane);
//    fChain->SetBranchAddress("truth_", &truth_, &b_truth_);
   fChain->SetBranchAddress("truth_muon_theta", &truth_muon_theta, &b_truth_muon_theta);
   fChain->SetBranchAddress("truth_target_dist_to_division", &truth_target_dist_to_division, &b_truth_target_dist_to_division);
   fChain->SetBranchAddress("truth_target_zDist", &truth_target_zDist, &b_truth_target_zDist);
   fChain->SetBranchAddress("truth__sz", &truth__sz, &b_truth__sz);
//    fChain->SetBranchAddress("truth_", &truth_, &b_truth_);
   fChain->SetBranchAddress("truth_hadronReweightID_sz", &truth_hadronReweightID_sz, &b_truth_hadronReweightID_sz);
   fChain->SetBranchAddress("truth_hadronReweightID", truth_hadronReweightID, &b_truth_hadronReweightID);
   fChain->SetBranchAddress("truth_hadronReweightIntCode_sz", &truth_hadronReweightIntCode_sz, &b_truth_hadronReweightIntCode_sz);
   fChain->SetBranchAddress("truth_hadronReweightIntCode", truth_hadronReweightIntCode, &b_truth_hadronReweightIntCode);
   fChain->SetBranchAddress("truth_hadronReweightIntCodePerSegment_sz", &truth_hadronReweightIntCodePerSegment_sz, &b_truth_hadronReweightIntCodePerSegment_sz);
   fChain->SetBranchAddress("truth_hadronReweightIntCodePerSegment", truth_hadronReweightIntCodePerSegment, &b_truth_hadronReweightIntCodePerSegment);
   fChain->SetBranchAddress("truth_hadronReweightNTrajPoints_sz", &truth_hadronReweightNTrajPoints_sz, &b_truth_hadronReweightNTrajPoints_sz);
   fChain->SetBranchAddress("truth_hadronReweightNTrajPoints", truth_hadronReweightNTrajPoints, &b_truth_hadronReweightNTrajPoints);
   fChain->SetBranchAddress("truth_hadronReweightNTrajPointsSaved_sz", &truth_hadronReweightNTrajPointsSaved_sz, &b_truth_hadronReweightNTrajPointsSaved_sz);
   fChain->SetBranchAddress("truth_hadronReweightNTrajPointsSaved", truth_hadronReweightNTrajPointsSaved, &b_truth_hadronReweightNTrajPointsSaved);
   fChain->SetBranchAddress("truth_hadronReweightNuke_sz", &truth_hadronReweightNuke_sz, &b_truth_hadronReweightNuke_sz);
   fChain->SetBranchAddress("truth_hadronReweightNuke", truth_hadronReweightNuke, &b_truth_hadronReweightNuke);
   fChain->SetBranchAddress("truth_hadronReweightPDG_sz", &truth_hadronReweightPDG_sz, &b_truth_hadronReweightPDG_sz);
   fChain->SetBranchAddress("truth_hadronReweightPDG", truth_hadronReweightPDG, &b_truth_hadronReweightPDG);
   fChain->SetBranchAddress("truth_hadronReweightParentID_sz", &truth_hadronReweightParentID_sz, &b_truth_hadronReweightParentID_sz);
   fChain->SetBranchAddress("truth_hadronReweightParentID", truth_hadronReweightParentID, &b_truth_hadronReweightParentID);
   fChain->SetBranchAddress("truth_hadronReweightTrackID_sz", &truth_hadronReweightTrackID_sz, &b_truth_hadronReweightTrackID_sz);
   fChain->SetBranchAddress("truth_hadronReweightTrackID", truth_hadronReweightTrackID, &b_truth_hadronReweightTrackID);
   fChain->SetBranchAddress("truth_hadronReweightTrajPointFlag_sz", &truth_hadronReweightTrajPointFlag_sz, &b_truth_hadronReweightTrajPointFlag_sz);
   fChain->SetBranchAddress("truth_hadronReweightTrajPointFlag", truth_hadronReweightTrajPointFlag, &b_truth_hadronReweightTrajPointFlag);
//    fChain->SetBranchAddress("truth_", &truth_, &b_truth_);
   fChain->SetBranchAddress("genie_wgt_n_shifts", &genie_wgt_n_shifts, &b_genie_wgt_n_shifts);
   fChain->SetBranchAddress("truth_genie_wgt_AGKYxF1pi", truth_genie_wgt_AGKYxF1pi, &b_truth_genie_wgt_AGKYxF1pi);
   fChain->SetBranchAddress("truth_genie_wgt_AhtBY", truth_genie_wgt_AhtBY, &b_truth_genie_wgt_AhtBY);
   fChain->SetBranchAddress("truth_genie_wgt_BhtBY", truth_genie_wgt_BhtBY, &b_truth_genie_wgt_BhtBY);
   fChain->SetBranchAddress("truth_genie_wgt_CCQEPauliSupViaKF", truth_genie_wgt_CCQEPauliSupViaKF, &b_truth_genie_wgt_CCQEPauliSupViaKF);
   fChain->SetBranchAddress("truth_genie_wgt_CV1uBY", truth_genie_wgt_CV1uBY, &b_truth_genie_wgt_CV1uBY);
   fChain->SetBranchAddress("truth_genie_wgt_CV2uBY", truth_genie_wgt_CV2uBY, &b_truth_genie_wgt_CV2uBY);
   fChain->SetBranchAddress("truth_genie_wgt_EtaNCEL", truth_genie_wgt_EtaNCEL, &b_truth_genie_wgt_EtaNCEL);
   fChain->SetBranchAddress("truth_genie_wgt_FrAbs_N", truth_genie_wgt_FrAbs_N, &b_truth_genie_wgt_FrAbs_N);
   fChain->SetBranchAddress("truth_genie_wgt_FrAbs_pi", truth_genie_wgt_FrAbs_pi, &b_truth_genie_wgt_FrAbs_pi);
   fChain->SetBranchAddress("truth_genie_wgt_FrCEx_N", truth_genie_wgt_FrCEx_N, &b_truth_genie_wgt_FrCEx_N);
   fChain->SetBranchAddress("truth_genie_wgt_FrCEx_pi", truth_genie_wgt_FrCEx_pi, &b_truth_genie_wgt_FrCEx_pi);
   fChain->SetBranchAddress("truth_genie_wgt_FrElas_N", truth_genie_wgt_FrElas_N, &b_truth_genie_wgt_FrElas_N);
   fChain->SetBranchAddress("truth_genie_wgt_FrElas_pi", truth_genie_wgt_FrElas_pi, &b_truth_genie_wgt_FrElas_pi);
   fChain->SetBranchAddress("truth_genie_wgt_FrInel_N", truth_genie_wgt_FrInel_N, &b_truth_genie_wgt_FrInel_N);
   fChain->SetBranchAddress("truth_genie_wgt_FrInel_pi", truth_genie_wgt_FrInel_pi, &b_truth_genie_wgt_FrInel_pi);
   fChain->SetBranchAddress("truth_genie_wgt_FrPiProd_N", truth_genie_wgt_FrPiProd_N, &b_truth_genie_wgt_FrPiProd_N);
   fChain->SetBranchAddress("truth_genie_wgt_FrPiProd_pi", truth_genie_wgt_FrPiProd_pi, &b_truth_genie_wgt_FrPiProd_pi);
   fChain->SetBranchAddress("truth_genie_wgt_MFP_N", truth_genie_wgt_MFP_N, &b_truth_genie_wgt_MFP_N);
   fChain->SetBranchAddress("truth_genie_wgt_MFP_pi", truth_genie_wgt_MFP_pi, &b_truth_genie_wgt_MFP_pi);
   fChain->SetBranchAddress("truth_genie_wgt_MaCCQE", truth_genie_wgt_MaCCQE, &b_truth_genie_wgt_MaCCQE);
   fChain->SetBranchAddress("truth_genie_wgt_MaCCQEshape", truth_genie_wgt_MaCCQEshape, &b_truth_genie_wgt_MaCCQEshape);
   fChain->SetBranchAddress("truth_genie_wgt_MaNCEL", truth_genie_wgt_MaNCEL, &b_truth_genie_wgt_MaNCEL);
   fChain->SetBranchAddress("truth_genie_wgt_MaRES", truth_genie_wgt_MaRES, &b_truth_genie_wgt_MaRES);
   fChain->SetBranchAddress("truth_genie_wgt_MvRES", truth_genie_wgt_MvRES, &b_truth_genie_wgt_MvRES);
   fChain->SetBranchAddress("truth_genie_wgt_NormCCQE", truth_genie_wgt_NormCCQE, &b_truth_genie_wgt_NormCCQE);
   fChain->SetBranchAddress("truth_genie_wgt_NormCCRES", truth_genie_wgt_NormCCRES, &b_truth_genie_wgt_NormCCRES);
   fChain->SetBranchAddress("truth_genie_wgt_NormDISCC", truth_genie_wgt_NormDISCC, &b_truth_genie_wgt_NormDISCC);
   fChain->SetBranchAddress("truth_genie_wgt_NormNCRES", truth_genie_wgt_NormNCRES, &b_truth_genie_wgt_NormNCRES);
   fChain->SetBranchAddress("truth_genie_wgt_RDecBR1gamma", truth_genie_wgt_RDecBR1gamma, &b_truth_genie_wgt_RDecBR1gamma);
   fChain->SetBranchAddress("truth_genie_wgt_Rvn1pi", truth_genie_wgt_Rvn1pi, &b_truth_genie_wgt_Rvn1pi);
   fChain->SetBranchAddress("truth_genie_wgt_Rvn2pi", truth_genie_wgt_Rvn2pi, &b_truth_genie_wgt_Rvn2pi);
   fChain->SetBranchAddress("truth_genie_wgt_Rvp1pi", truth_genie_wgt_Rvp1pi, &b_truth_genie_wgt_Rvp1pi);
   fChain->SetBranchAddress("truth_genie_wgt_Rvp2pi", truth_genie_wgt_Rvp2pi, &b_truth_genie_wgt_Rvp2pi);
   fChain->SetBranchAddress("truth_genie_wgt_Theta_Delta2Npi", truth_genie_wgt_Theta_Delta2Npi, &b_truth_genie_wgt_Theta_Delta2Npi);
   fChain->SetBranchAddress("truth_genie_wgt_VecFFCCQEshape", truth_genie_wgt_VecFFCCQEshape, &b_truth_genie_wgt_VecFFCCQEshape);
   fChain->SetBranchAddress("truth_genie_wgt_shifts", truth_genie_wgt_shifts, &b_truth_genie_wgt_shifts);
   fChain->SetBranchAddress("truth_hadronReweightColumnarDensity_sz", &truth_hadronReweightColumnarDensity_sz, &b_truth_hadronReweightColumnarDensity_sz);
   fChain->SetBranchAddress("truth_hadronReweightColumnarDensity", truth_hadronReweightColumnarDensity, &b_truth_hadronReweightColumnarDensity);
   fChain->SetBranchAddress("truth_hadronReweightFinalE_sz", &truth_hadronReweightFinalE_sz, &b_truth_hadronReweightFinalE_sz);
   fChain->SetBranchAddress("truth_hadronReweightFinalE", truth_hadronReweightFinalE, &b_truth_hadronReweightFinalE);
   fChain->SetBranchAddress("truth_hadronReweightFinalSigmaE_sz", &truth_hadronReweightFinalSigmaE_sz, &b_truth_hadronReweightFinalSigmaE_sz);
   fChain->SetBranchAddress("truth_hadronReweightFinalSigmaE", truth_hadronReweightFinalSigmaE, &b_truth_hadronReweightFinalSigmaE);
   fChain->SetBranchAddress("truth_hadronReweightInitialE_sz", &truth_hadronReweightInitialE_sz, &b_truth_hadronReweightInitialE_sz);
   fChain->SetBranchAddress("truth_hadronReweightInitialE", truth_hadronReweightInitialE, &b_truth_hadronReweightInitialE);
   fChain->SetBranchAddress("truth_hadronReweightInitialSigmaE_sz", &truth_hadronReweightInitialSigmaE_sz, &b_truth_hadronReweightInitialSigmaE_sz);
   fChain->SetBranchAddress("truth_hadronReweightInitialSigmaE", truth_hadronReweightInitialSigmaE, &b_truth_hadronReweightInitialSigmaE);
   fChain->SetBranchAddress("truth_hadronReweightPosX_sz", &truth_hadronReweightPosX_sz, &b_truth_hadronReweightPosX_sz);
   fChain->SetBranchAddress("truth_hadronReweightPosX", truth_hadronReweightPosX, &b_truth_hadronReweightPosX);
   fChain->SetBranchAddress("truth_hadronReweightPosY_sz", &truth_hadronReweightPosY_sz, &b_truth_hadronReweightPosY_sz);
   fChain->SetBranchAddress("truth_hadronReweightPosY", truth_hadronReweightPosY, &b_truth_hadronReweightPosY);
   fChain->SetBranchAddress("truth_hadronReweightPosZ_sz", &truth_hadronReweightPosZ_sz, &b_truth_hadronReweightPosZ_sz);
   fChain->SetBranchAddress("truth_hadronReweightPosZ", truth_hadronReweightPosZ, &b_truth_hadronReweightPosZ);
   fChain->SetBranchAddress("truth_hadronReweightTimeDelta_sz", &truth_hadronReweightTimeDelta_sz, &b_truth_hadronReweightTimeDelta_sz);
   fChain->SetBranchAddress("truth_hadronReweightTimeDelta", truth_hadronReweightTimeDelta, &b_truth_hadronReweightTimeDelta);
   fChain->SetBranchAddress("MasterAnaDev_nuFlavor", &MasterAnaDev_nuFlavor, &b_MasterAnaDev_nuFlavor);
   fChain->SetBranchAddress("MasterAnaDev_nuHelicity", &MasterAnaDev_nuHelicity, &b_MasterAnaDev_nuHelicity);
   fChain->SetBranchAddress("MasterAnaDev_intCurrent", &MasterAnaDev_intCurrent, &b_MasterAnaDev_intCurrent);
   fChain->SetBranchAddress("MasterAnaDev_intType", &MasterAnaDev_intType, &b_MasterAnaDev_intType);
   fChain->SetBranchAddress("MasterAnaDev_E", &MasterAnaDev_E, &b_MasterAnaDev_E);
   fChain->SetBranchAddress("MasterAnaDev_Q2", &MasterAnaDev_Q2, &b_MasterAnaDev_Q2);
   fChain->SetBranchAddress("MasterAnaDev_x", &MasterAnaDev_x, &b_MasterAnaDev_x);
   fChain->SetBranchAddress("MasterAnaDev_y", &MasterAnaDev_y, &b_MasterAnaDev_y);
   fChain->SetBranchAddress("MasterAnaDev_W", &MasterAnaDev_W, &b_MasterAnaDev_W);
   fChain->SetBranchAddress("MasterAnaDev_score", &MasterAnaDev_score, &b_MasterAnaDev_score);
   fChain->SetBranchAddress("MasterAnaDev_leptonE", MasterAnaDev_leptonE, &b_MasterAnaDev_leptonE);
   fChain->SetBranchAddress("MasterAnaDev_vtx", MasterAnaDev_vtx, &b_MasterAnaDev_vtx);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_is_contained", &MasterAnaDev_minos_trk_is_contained, &b_MasterAnaDev_minos_trk_is_contained);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_is_ok", &MasterAnaDev_minos_trk_is_ok, &b_MasterAnaDev_minos_trk_is_ok);
   fChain->SetBranchAddress("MasterAnaDev_minos_used_range", &MasterAnaDev_minos_used_range, &b_MasterAnaDev_minos_used_range);
   fChain->SetBranchAddress("MasterAnaDev_minos_used_curvature", &MasterAnaDev_minos_used_curvature, &b_MasterAnaDev_minos_used_curvature);
   fChain->SetBranchAddress("MasterAnaDev_EvtHasNBlobIncTracks", &MasterAnaDev_EvtHasNBlobIncTracks, &b_MasterAnaDev_EvtHasNBlobIncTracks);
   fChain->SetBranchAddress("MasterAnaDev_EvtHasNBlobTracks", &MasterAnaDev_EvtHasNBlobTracks, &b_MasterAnaDev_EvtHasNBlobTracks);
   fChain->SetBranchAddress("MasterAnaDev_in_fiducial_area", &MasterAnaDev_in_fiducial_area, &b_MasterAnaDev_in_fiducial_area);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_end_plane", &MasterAnaDev_minos_trk_end_plane, &b_MasterAnaDev_minos_trk_end_plane);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_quality", &MasterAnaDev_minos_trk_quality, &b_MasterAnaDev_minos_trk_quality);
   fChain->SetBranchAddress("MasterAnaDev_proton_patternRec", &MasterAnaDev_proton_patternRec, &b_MasterAnaDev_proton_patternRec);
   fChain->SetBranchAddress("MasterAnaDev_proton_prongType", &MasterAnaDev_proton_prongType, &b_MasterAnaDev_proton_prongType);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_vtx_plane", &MasterAnaDev_r_minos_trk_vtx_plane, &b_MasterAnaDev_r_minos_trk_vtx_plane);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_numFSMuons", &MasterAnaDev_t_minos_trk_numFSMuons, &b_MasterAnaDev_t_minos_trk_numFSMuons);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLeptonPDG", &MasterAnaDev_t_minos_trk_primFSLeptonPDG, &b_MasterAnaDev_t_minos_trk_primFSLeptonPDG);
   fChain->SetBranchAddress("MasterAnaDev_targetID", &MasterAnaDev_targetID, &b_MasterAnaDev_targetID);
   fChain->SetBranchAddress("MasterAnaDev_targetZ", &MasterAnaDev_targetZ, &b_MasterAnaDev_targetZ);
   fChain->SetBranchAddress("MasterAnaDev_target_code", &MasterAnaDev_target_code, &b_MasterAnaDev_target_code);
   fChain->SetBranchAddress("MasterAnaDev_vtx_module", &MasterAnaDev_vtx_module, &b_MasterAnaDev_vtx_module);
   fChain->SetBranchAddress("MasterAnaDev_vtx_plane", &MasterAnaDev_vtx_plane, &b_MasterAnaDev_vtx_plane);
   fChain->SetBranchAddress("MasterAnaDev_Q2_CCQE", &MasterAnaDev_Q2_CCQE, &b_MasterAnaDev_Q2_CCQE);
   fChain->SetBranchAddress("MasterAnaDev_Q2_Inclusive", &MasterAnaDev_Q2_Inclusive, &b_MasterAnaDev_Q2_Inclusive);
   fChain->SetBranchAddress("MasterAnaDev_Q2_wide_window", &MasterAnaDev_Q2_wide_window, &b_MasterAnaDev_Q2_wide_window);
   fChain->SetBranchAddress("MasterAnaDev_enu_muon", &MasterAnaDev_enu_muon, &b_MasterAnaDev_enu_muon);
   fChain->SetBranchAddress("MasterAnaDev_enu_proton", &MasterAnaDev_enu_proton, &b_MasterAnaDev_enu_proton);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_bave", &MasterAnaDev_minos_trk_bave, &b_MasterAnaDev_minos_trk_bave);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_chi2", &MasterAnaDev_minos_trk_chi2, &b_MasterAnaDev_minos_trk_chi2);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_end_u", &MasterAnaDev_minos_trk_end_u, &b_MasterAnaDev_minos_trk_end_u);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_end_v", &MasterAnaDev_minos_trk_end_v, &b_MasterAnaDev_minos_trk_end_v);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_end_x", &MasterAnaDev_minos_trk_end_x, &b_MasterAnaDev_minos_trk_end_x);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_end_y", &MasterAnaDev_minos_trk_end_y, &b_MasterAnaDev_minos_trk_end_y);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_end_z", &MasterAnaDev_minos_trk_end_z, &b_MasterAnaDev_minos_trk_end_z);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_eqp", &MasterAnaDev_minos_trk_eqp, &b_MasterAnaDev_minos_trk_eqp);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_eqp_qp", &MasterAnaDev_minos_trk_eqp_qp, &b_MasterAnaDev_minos_trk_eqp_qp);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_fit_pass", &MasterAnaDev_minos_trk_fit_pass, &b_MasterAnaDev_minos_trk_fit_pass);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_ndf", &MasterAnaDev_minos_trk_ndf, &b_MasterAnaDev_minos_trk_ndf);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_p", &MasterAnaDev_minos_trk_p, &b_MasterAnaDev_minos_trk_p);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_p_curvature", &MasterAnaDev_minos_trk_p_curvature, &b_MasterAnaDev_minos_trk_p_curvature);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_p_range", &MasterAnaDev_minos_trk_p_range, &b_MasterAnaDev_minos_trk_p_range);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_qp", &MasterAnaDev_minos_trk_qp, &b_MasterAnaDev_minos_trk_qp);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_vtx_x", &MasterAnaDev_minos_trk_vtx_x, &b_MasterAnaDev_minos_trk_vtx_x);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_vtx_y", &MasterAnaDev_minos_trk_vtx_y, &b_MasterAnaDev_minos_trk_vtx_y);
   fChain->SetBranchAddress("MasterAnaDev_minos_trk_vtx_z", &MasterAnaDev_minos_trk_vtx_z, &b_MasterAnaDev_minos_trk_vtx_z);
   fChain->SetBranchAddress("MasterAnaDev_muon_E", &MasterAnaDev_muon_E, &b_MasterAnaDev_muon_E);
   fChain->SetBranchAddress("MasterAnaDev_muon_P", &MasterAnaDev_muon_P, &b_MasterAnaDev_muon_P);
   fChain->SetBranchAddress("MasterAnaDev_muon_T", &MasterAnaDev_muon_T, &b_MasterAnaDev_muon_T);
   fChain->SetBranchAddress("MasterAnaDev_muon_score", &MasterAnaDev_muon_score, &b_MasterAnaDev_muon_score);
   fChain->SetBranchAddress("MasterAnaDev_muon_theta", &MasterAnaDev_muon_theta, &b_MasterAnaDev_muon_theta);
   fChain->SetBranchAddress("MasterAnaDev_pion_score", &MasterAnaDev_pion_score, &b_MasterAnaDev_pion_score);
   fChain->SetBranchAddress("MasterAnaDev_pion_score1", &MasterAnaDev_pion_score1, &b_MasterAnaDev_pion_score1);
   fChain->SetBranchAddress("MasterAnaDev_pion_score2", &MasterAnaDev_pion_score2, &b_MasterAnaDev_pion_score2);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_BetheBloch_biasDown", &MasterAnaDev_proton_E_BetheBloch_biasDown, &b_MasterAnaDev_proton_E_BetheBloch_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_BetheBloch_biasUp", &MasterAnaDev_proton_E_BetheBloch_biasUp, &b_MasterAnaDev_proton_E_BetheBloch_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_Birks_bias", &MasterAnaDev_proton_E_Birks_bias, &b_MasterAnaDev_proton_E_Birks_bias);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_MEU_biasDown", &MasterAnaDev_proton_E_MEU_biasDown, &b_MasterAnaDev_proton_E_MEU_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_MEU_biasUp", &MasterAnaDev_proton_E_MEU_biasUp, &b_MasterAnaDev_proton_E_MEU_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_Mass_biasDown", &MasterAnaDev_proton_E_Mass_biasDown, &b_MasterAnaDev_proton_E_Mass_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_Mass_biasUp", &MasterAnaDev_proton_E_Mass_biasUp, &b_MasterAnaDev_proton_E_Mass_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_proton_E_fromdEdx", &MasterAnaDev_proton_E_fromdEdx, &b_MasterAnaDev_proton_E_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_proton_P_fromdEdx", &MasterAnaDev_proton_P_fromdEdx, &b_MasterAnaDev_proton_P_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_proton_Px_fromdEdx", &MasterAnaDev_proton_Px_fromdEdx, &b_MasterAnaDev_proton_Px_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_proton_Py_fromdEdx", &MasterAnaDev_proton_Py_fromdEdx, &b_MasterAnaDev_proton_Py_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_proton_Pz_fromdEdx", &MasterAnaDev_proton_Pz_fromdEdx, &b_MasterAnaDev_proton_Pz_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_proton_T_fromdEdx", &MasterAnaDev_proton_T_fromdEdx, &b_MasterAnaDev_proton_T_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_proton_calib_energy", &MasterAnaDev_proton_calib_energy, &b_MasterAnaDev_proton_calib_energy);
   fChain->SetBranchAddress("MasterAnaDev_proton_endPointX", &MasterAnaDev_proton_endPointX, &b_MasterAnaDev_proton_endPointX);
   fChain->SetBranchAddress("MasterAnaDev_proton_endPointY", &MasterAnaDev_proton_endPointY, &b_MasterAnaDev_proton_endPointY);
   fChain->SetBranchAddress("MasterAnaDev_proton_endPointZ", &MasterAnaDev_proton_endPointZ, &b_MasterAnaDev_proton_endPointZ);
   fChain->SetBranchAddress("MasterAnaDev_proton_phi", &MasterAnaDev_proton_phi, &b_MasterAnaDev_proton_phi);
   fChain->SetBranchAddress("MasterAnaDev_proton_score", &MasterAnaDev_proton_score, &b_MasterAnaDev_proton_score);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1", &MasterAnaDev_proton_score1, &b_MasterAnaDev_proton_score1);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_BetheBloch_biasDown", &MasterAnaDev_proton_score1_BetheBloch_biasDown, &b_MasterAnaDev_proton_score1_BetheBloch_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_BetheBloch_biasUp", &MasterAnaDev_proton_score1_BetheBloch_biasUp, &b_MasterAnaDev_proton_score1_BetheBloch_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_Birks_bias", &MasterAnaDev_proton_score1_Birks_bias, &b_MasterAnaDev_proton_score1_Birks_bias);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_MEU_biasDown", &MasterAnaDev_proton_score1_MEU_biasDown, &b_MasterAnaDev_proton_score1_MEU_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_MEU_biasUp", &MasterAnaDev_proton_score1_MEU_biasUp, &b_MasterAnaDev_proton_score1_MEU_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_Mass_biasDown", &MasterAnaDev_proton_score1_Mass_biasDown, &b_MasterAnaDev_proton_score1_Mass_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_proton_score1_Mass_biasUp", &MasterAnaDev_proton_score1_Mass_biasUp, &b_MasterAnaDev_proton_score1_Mass_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_proton_score2", &MasterAnaDev_proton_score2, &b_MasterAnaDev_proton_score2);
   fChain->SetBranchAddress("MasterAnaDev_proton_startPointX", &MasterAnaDev_proton_startPointX, &b_MasterAnaDev_proton_startPointX);
   fChain->SetBranchAddress("MasterAnaDev_proton_startPointY", &MasterAnaDev_proton_startPointY, &b_MasterAnaDev_proton_startPointY);
   fChain->SetBranchAddress("MasterAnaDev_proton_startPointZ", &MasterAnaDev_proton_startPointZ, &b_MasterAnaDev_proton_startPointZ);
   fChain->SetBranchAddress("MasterAnaDev_proton_theta", &MasterAnaDev_proton_theta, &b_MasterAnaDev_proton_theta);
   fChain->SetBranchAddress("MasterAnaDev_proton_thetaX", &MasterAnaDev_proton_thetaX, &b_MasterAnaDev_proton_thetaX);
   fChain->SetBranchAddress("MasterAnaDev_proton_thetaY", &MasterAnaDev_proton_thetaY, &b_MasterAnaDev_proton_thetaY);
   fChain->SetBranchAddress("MasterAnaDev_proton_theta_fromdEdx", &MasterAnaDev_proton_theta_fromdEdx, &b_MasterAnaDev_proton_theta_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_bdL", &MasterAnaDev_r_minos_trk_bdL, &b_MasterAnaDev_r_minos_trk_bdL);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_end_dcosx", &MasterAnaDev_r_minos_trk_end_dcosx, &b_MasterAnaDev_r_minos_trk_end_dcosx);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_end_dcosy", &MasterAnaDev_r_minos_trk_end_dcosy, &b_MasterAnaDev_r_minos_trk_end_dcosy);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_end_dcosz", &MasterAnaDev_r_minos_trk_end_dcosz, &b_MasterAnaDev_r_minos_trk_end_dcosz);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_vtx_dcosx", &MasterAnaDev_r_minos_trk_vtx_dcosx, &b_MasterAnaDev_r_minos_trk_vtx_dcosx);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_vtx_dcosy", &MasterAnaDev_r_minos_trk_vtx_dcosy, &b_MasterAnaDev_r_minos_trk_vtx_dcosy);
   fChain->SetBranchAddress("MasterAnaDev_r_minos_trk_vtx_dcosz", &MasterAnaDev_r_minos_trk_vtx_dcosz, &b_MasterAnaDev_r_minos_trk_vtx_dcosz);
   fChain->SetBranchAddress("MasterAnaDev_recoil_E", &MasterAnaDev_recoil_E, &b_MasterAnaDev_recoil_E);
   fChain->SetBranchAddress("MasterAnaDev_recoil_E_wide_window", &MasterAnaDev_recoil_E_wide_window, &b_MasterAnaDev_recoil_E_wide_window);
   fChain->SetBranchAddress("MasterAnaDev_recoil_passivecorrected", &MasterAnaDev_recoil_passivecorrected, &b_MasterAnaDev_recoil_passivecorrected);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPx", &MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPx, &b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPx);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPy", &MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPy, &b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPy);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPz", &MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPz, &b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjPz);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMinosInitProjX", &MasterAnaDev_t_minos_trk_primFSLepMinosInitProjX, &b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjX);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMinosInitProjY", &MasterAnaDev_t_minos_trk_primFSLepMinosInitProjY, &b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjY);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMinosInitProjZ", &MasterAnaDev_t_minos_trk_primFSLepMinosInitProjZ, &b_MasterAnaDev_t_minos_trk_primFSLepMinosInitProjZ);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvFinalPx", &MasterAnaDev_t_minos_trk_primFSLepMnvFinalPx, &b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalPx);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvFinalPy", &MasterAnaDev_t_minos_trk_primFSLepMnvFinalPy, &b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalPy);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvFinalPz", &MasterAnaDev_t_minos_trk_primFSLepMnvFinalPz, &b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalPz);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvFinalX", &MasterAnaDev_t_minos_trk_primFSLepMnvFinalX, &b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalX);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvFinalY", &MasterAnaDev_t_minos_trk_primFSLepMnvFinalY, &b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalY);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvFinalZ", &MasterAnaDev_t_minos_trk_primFSLepMnvFinalZ, &b_MasterAnaDev_t_minos_trk_primFSLepMnvFinalZ);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvInitPx", &MasterAnaDev_t_minos_trk_primFSLepMnvInitPx, &b_MasterAnaDev_t_minos_trk_primFSLepMnvInitPx);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvInitPy", &MasterAnaDev_t_minos_trk_primFSLepMnvInitPy, &b_MasterAnaDev_t_minos_trk_primFSLepMnvInitPy);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvInitPz", &MasterAnaDev_t_minos_trk_primFSLepMnvInitPz, &b_MasterAnaDev_t_minos_trk_primFSLepMnvInitPz);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvInitX", &MasterAnaDev_t_minos_trk_primFSLepMnvInitX, &b_MasterAnaDev_t_minos_trk_primFSLepMnvInitX);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvInitY", &MasterAnaDev_t_minos_trk_primFSLepMnvInitY, &b_MasterAnaDev_t_minos_trk_primFSLepMnvInitY);
   fChain->SetBranchAddress("MasterAnaDev_t_minos_trk_primFSLepMnvInitZ", &MasterAnaDev_t_minos_trk_primFSLepMnvInitZ, &b_MasterAnaDev_t_minos_trk_primFSLepMnvInitZ);
   fChain->SetBranchAddress("MasterAnaDev_target_dist_to_division", &MasterAnaDev_target_dist_to_division, &b_MasterAnaDev_target_dist_to_division);
   fChain->SetBranchAddress("MasterAnaDev_target_zDist", &MasterAnaDev_target_zDist, &b_MasterAnaDev_target_zDist);
   fChain->SetBranchAddress("MasterAnaDev_visible_E", &MasterAnaDev_visible_E, &b_MasterAnaDev_visible_E);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDRho_order_sz", &MasterAnaDev_Blob2DMuonDRho_order_sz, &b_MasterAnaDev_Blob2DMuonDRho_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDRho_order", MasterAnaDev_Blob2DMuonDRho_order, &b_MasterAnaDev_Blob2DMuonDRho_order);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDTheta_order_sz", &MasterAnaDev_Blob2DMuonDTheta_order_sz, &b_MasterAnaDev_Blob2DMuonDTheta_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDTheta_order", MasterAnaDev_Blob2DMuonDTheta_order, &b_MasterAnaDev_Blob2DMuonDTheta_order);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDRho_order_sz", &MasterAnaDev_Blob2DPartDRho_order_sz, &b_MasterAnaDev_Blob2DPartDRho_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDRho_order", MasterAnaDev_Blob2DPartDRho_order, &b_MasterAnaDev_Blob2DPartDRho_order);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDTheta_order_sz", &MasterAnaDev_Blob2DPartDTheta_order_sz, &b_MasterAnaDev_Blob2DPartDTheta_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDTheta_order", MasterAnaDev_Blob2DPartDTheta_order, &b_MasterAnaDev_Blob2DPartDTheta_order);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DView_sz", &MasterAnaDev_Blob2DView_sz, &b_MasterAnaDev_Blob2DView_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DView", MasterAnaDev_Blob2DView, &b_MasterAnaDev_Blob2DView);
   fChain->SetBranchAddress("MasterAnaDev_BlobAvgE_order_sz", &MasterAnaDev_BlobAvgE_order_sz, &b_MasterAnaDev_BlobAvgE_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobAvgE_order", MasterAnaDev_BlobAvgE_order, &b_MasterAnaDev_BlobAvgE_order);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusID_sz", &MasterAnaDev_BlobClusID_sz, &b_MasterAnaDev_BlobClusID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusID", MasterAnaDev_BlobClusID, &b_MasterAnaDev_BlobClusID);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusterMaxE_order_sz", &MasterAnaDev_BlobClusterMaxE_order_sz, &b_MasterAnaDev_BlobClusterMaxE_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusterMaxE_order", MasterAnaDev_BlobClusterMaxE_order, &b_MasterAnaDev_BlobClusterMaxE_order);
   fChain->SetBranchAddress("MasterAnaDev_BlobID_sz", &MasterAnaDev_BlobID_sz, &b_MasterAnaDev_BlobID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobID", MasterAnaDev_BlobID, &b_MasterAnaDev_BlobID);
   fChain->SetBranchAddress("MasterAnaDev_BlobIs3D_sz", &MasterAnaDev_BlobIs3D_sz, &b_MasterAnaDev_BlobIs3D_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobIs3D", MasterAnaDev_BlobIs3D, &b_MasterAnaDev_BlobIs3D);
   fChain->SetBranchAddress("MasterAnaDev_BlobIsFiducial_sz", &MasterAnaDev_BlobIsFiducial_sz, &b_MasterAnaDev_BlobIsFiducial_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobIsFiducial", MasterAnaDev_BlobIsFiducial, &b_MasterAnaDev_BlobIsFiducial);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCPID_sz", &MasterAnaDev_BlobMCPID_sz, &b_MasterAnaDev_BlobMCPID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCPID", MasterAnaDev_BlobMCPID, &b_MasterAnaDev_BlobMCPID);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCParentTrackID_sz", &MasterAnaDev_BlobMCParentTrackID_sz, &b_MasterAnaDev_BlobMCParentTrackID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCParentTrackID", MasterAnaDev_BlobMCParentTrackID, &b_MasterAnaDev_BlobMCParentTrackID);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackID_sz", &MasterAnaDev_BlobMCTrackID_sz, &b_MasterAnaDev_BlobMCTrackID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackID", MasterAnaDev_BlobMCTrackID, &b_MasterAnaDev_BlobMCTrackID);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDRho_order_sz", &MasterAnaDev_BlobMuonDRho_order_sz, &b_MasterAnaDev_BlobMuonDRho_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDRho_order", MasterAnaDev_BlobMuonDRho_order, &b_MasterAnaDev_BlobMuonDRho_order);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDTheta_order_sz", &MasterAnaDev_BlobMuonDTheta_order_sz, &b_MasterAnaDev_BlobMuonDTheta_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDTheta_order", MasterAnaDev_BlobMuonDTheta_order, &b_MasterAnaDev_BlobMuonDTheta_order);
   fChain->SetBranchAddress("MasterAnaDev_BlobNClusters_sz", &MasterAnaDev_BlobNClusters_sz, &b_MasterAnaDev_BlobNClusters_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobNClusters", MasterAnaDev_BlobNClusters, &b_MasterAnaDev_BlobNClusters);
   fChain->SetBranchAddress("MasterAnaDev_BlobNHeavyIonizingClusters_sz", &MasterAnaDev_BlobNHeavyIonizingClusters_sz, &b_MasterAnaDev_BlobNHeavyIonizingClusters_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobNHeavyIonizingClusters", MasterAnaDev_BlobNHeavyIonizingClusters, &b_MasterAnaDev_BlobNHeavyIonizingClusters);
   fChain->SetBranchAddress("MasterAnaDev_BlobNTracks_sz", &MasterAnaDev_BlobNTracks_sz, &b_MasterAnaDev_BlobNTracks_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobNTracks", MasterAnaDev_BlobNTracks, &b_MasterAnaDev_BlobNTracks);
   fChain->SetBranchAddress("MasterAnaDev_BlobPIDPerCluster_sz", &MasterAnaDev_BlobPIDPerCluster_sz, &b_MasterAnaDev_BlobPIDPerCluster_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobPIDPerCluster", &MasterAnaDev_BlobPIDPerCluster, &b_MasterAnaDev_BlobPIDPerCluster);
   fChain->SetBranchAddress("MasterAnaDev_BlobParentMCPID_sz", &MasterAnaDev_BlobParentMCPID_sz, &b_MasterAnaDev_BlobParentMCPID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobParentMCPID", MasterAnaDev_BlobParentMCPID, &b_MasterAnaDev_BlobParentMCPID);
   fChain->SetBranchAddress("MasterAnaDev_BlobTopMCPID_sz", &MasterAnaDev_BlobTopMCPID_sz, &b_MasterAnaDev_BlobTopMCPID_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTopMCPID", MasterAnaDev_BlobTopMCPID, &b_MasterAnaDev_BlobTopMCPID);
   fChain->SetBranchAddress("MasterAnaDev_BlobTotalE_order_sz", &MasterAnaDev_BlobTotalE_order_sz, &b_MasterAnaDev_BlobTotalE_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTotalE_order", MasterAnaDev_BlobTotalE_order, &b_MasterAnaDev_BlobTotalE_order);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackNClus_sz", &MasterAnaDev_BlobTrackNClus_sz, &b_MasterAnaDev_BlobTrackNClus_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackNClus", MasterAnaDev_BlobTrackNClus, &b_MasterAnaDev_BlobTrackNClus);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackNNode_sz", &MasterAnaDev_BlobTrackNNode_sz, &b_MasterAnaDev_BlobTrackNNode_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackNNode", MasterAnaDev_BlobTrackNNode, &b_MasterAnaDev_BlobTrackNNode);
   fChain->SetBranchAddress("MasterAnaDev_BlobViewPerCluster_sz", &MasterAnaDev_BlobViewPerCluster_sz, &b_MasterAnaDev_BlobViewPerCluster_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobViewPerCluster", MasterAnaDev_BlobViewPerCluster, &b_MasterAnaDev_BlobViewPerCluster);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDR_order_sz", &MasterAnaDev_BlobVtxDR_order_sz, &b_MasterAnaDev_BlobVtxDR_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDR_order", MasterAnaDev_BlobVtxDR_order, &b_MasterAnaDev_BlobVtxDR_order);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDZ_order_sz", &MasterAnaDev_BlobVtxDZ_order_sz, &b_MasterAnaDev_BlobVtxDZ_order_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDZ_order", &MasterAnaDev_BlobVtxDZ_order, &b_MasterAnaDev_BlobVtxDZ_order);
   fChain->SetBranchAddress("MasterAnaDev_RecoPattern_sz", &MasterAnaDev_RecoPattern_sz, &b_MasterAnaDev_RecoPattern_sz);
   fChain->SetBranchAddress("MasterAnaDev_RecoPattern", MasterAnaDev_RecoPattern, &b_MasterAnaDev_RecoPattern);
   fChain->SetBranchAddress("MasterAnaDev_ref_targZ", MasterAnaDev_ref_targZ, &b_MasterAnaDev_ref_targZ);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_nodes_index_sz", &MasterAnaDev_sec_protons_nodes_index_sz, &b_MasterAnaDev_sec_protons_nodes_index_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_nodes_index", MasterAnaDev_sec_protons_nodes_index, &b_MasterAnaDev_sec_protons_nodes_index);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_patternRec_sz", &MasterAnaDev_sec_protons_patternRec_sz, &b_MasterAnaDev_sec_protons_patternRec_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_patternRec", MasterAnaDev_sec_protons_patternRec, &b_MasterAnaDev_sec_protons_patternRec);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_prongType_sz", &MasterAnaDev_sec_protons_prongType_sz, &b_MasterAnaDev_sec_protons_prongType_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_prongType", MasterAnaDev_sec_protons_prongType, &b_MasterAnaDev_sec_protons_prongType);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DBeamDTPos_sz", &MasterAnaDev_Blob2DBeamDTPos_sz, &b_MasterAnaDev_Blob2DBeamDTPos_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DBeamDTPos", MasterAnaDev_Blob2DBeamDTPos, &b_MasterAnaDev_Blob2DBeamDTPos);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DBeamDZ_sz", &MasterAnaDev_Blob2DBeamDZ_sz, &b_MasterAnaDev_Blob2DBeamDZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DBeamDZ", MasterAnaDev_Blob2DBeamDZ, &b_MasterAnaDev_Blob2DBeamDZ);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDRho_sz", &MasterAnaDev_Blob2DMuonDRho_sz, &b_MasterAnaDev_Blob2DMuonDRho_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDRho", MasterAnaDev_Blob2DMuonDRho, &b_MasterAnaDev_Blob2DMuonDRho);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDTheta_sz", &MasterAnaDev_Blob2DMuonDTheta_sz, &b_MasterAnaDev_Blob2DMuonDTheta_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DMuonDTheta", MasterAnaDev_Blob2DMuonDTheta, &b_MasterAnaDev_Blob2DMuonDTheta);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDRho_sz", &MasterAnaDev_Blob2DPartDRho_sz, &b_MasterAnaDev_Blob2DPartDRho_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDRho", MasterAnaDev_Blob2DPartDRho, &b_MasterAnaDev_Blob2DPartDRho);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDTheta_sz", &MasterAnaDev_Blob2DPartDTheta_sz, &b_MasterAnaDev_Blob2DPartDTheta_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDTheta", MasterAnaDev_Blob2DPartDTheta, &b_MasterAnaDev_Blob2DPartDTheta);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDZ_sz", &MasterAnaDev_Blob2DPartDZ_sz, &b_MasterAnaDev_Blob2DPartDZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DPartDZ", MasterAnaDev_Blob2DPartDZ, &b_MasterAnaDev_Blob2DPartDZ);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DVtxDR_sz", &MasterAnaDev_Blob2DVtxDR_sz, &b_MasterAnaDev_Blob2DVtxDR_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DVtxDR", MasterAnaDev_Blob2DVtxDR, &b_MasterAnaDev_Blob2DVtxDR);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DVtxDTPos_sz", &MasterAnaDev_Blob2DVtxDTPos_sz, &b_MasterAnaDev_Blob2DVtxDTPos_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DVtxDTPos", MasterAnaDev_Blob2DVtxDTPos, &b_MasterAnaDev_Blob2DVtxDTPos);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DVtxDZ_sz", &MasterAnaDev_Blob2DVtxDZ_sz, &b_MasterAnaDev_Blob2DVtxDZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_Blob2DVtxDZ", MasterAnaDev_Blob2DVtxDZ, &b_MasterAnaDev_Blob2DVtxDZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobAvgE_sz", &MasterAnaDev_BlobAvgE_sz, &b_MasterAnaDev_BlobAvgE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobAvgE", MasterAnaDev_BlobAvgE, &b_MasterAnaDev_BlobAvgE);
   fChain->SetBranchAddress("MasterAnaDev_BlobBeamDZ_sz", &MasterAnaDev_BlobBeamDZ_sz, &b_MasterAnaDev_BlobBeamDZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobBeamDZ", MasterAnaDev_BlobBeamDZ, &b_MasterAnaDev_BlobBeamDZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegT_sz", &MasterAnaDev_BlobBegT_sz, &b_MasterAnaDev_BlobBegT_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegT", MasterAnaDev_BlobBegT, &b_MasterAnaDev_BlobBegT);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegX_sz", &MasterAnaDev_BlobBegX_sz, &b_MasterAnaDev_BlobBegX_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegX", MasterAnaDev_BlobBegX, &b_MasterAnaDev_BlobBegX);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegY_sz", &MasterAnaDev_BlobBegY_sz, &b_MasterAnaDev_BlobBegY_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegY", MasterAnaDev_BlobBegY, &b_MasterAnaDev_BlobBegY);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegZ_sz", &MasterAnaDev_BlobBegZ_sz, &b_MasterAnaDev_BlobBegZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobBegZ", MasterAnaDev_BlobBegZ, &b_MasterAnaDev_BlobBegZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusterMaxE_sz", &MasterAnaDev_BlobClusterMaxE_sz, &b_MasterAnaDev_BlobClusterMaxE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusterMaxE", MasterAnaDev_BlobClusterMaxE, &b_MasterAnaDev_BlobClusterMaxE);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusterMinE_sz", &MasterAnaDev_BlobClusterMinE_sz, &b_MasterAnaDev_BlobClusterMinE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobClusterMinE", MasterAnaDev_BlobClusterMinE, &b_MasterAnaDev_BlobClusterMinE);
   fChain->SetBranchAddress("MasterAnaDev_BlobCoplanarityAngle_sz", &MasterAnaDev_BlobCoplanarityAngle_sz, &b_MasterAnaDev_BlobCoplanarityAngle_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobCoplanarityAngle", MasterAnaDev_BlobCoplanarityAngle, &b_MasterAnaDev_BlobCoplanarityAngle);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndT_sz", &MasterAnaDev_BlobEndT_sz, &b_MasterAnaDev_BlobEndT_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndT", MasterAnaDev_BlobEndT, &b_MasterAnaDev_BlobEndT);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndX_sz", &MasterAnaDev_BlobEndX_sz, &b_MasterAnaDev_BlobEndX_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndX", MasterAnaDev_BlobEndX, &b_MasterAnaDev_BlobEndX);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndY_sz", &MasterAnaDev_BlobEndY_sz, &b_MasterAnaDev_BlobEndY_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndY", MasterAnaDev_BlobEndY, &b_MasterAnaDev_BlobEndY);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndZ_sz", &MasterAnaDev_BlobEndZ_sz, &b_MasterAnaDev_BlobEndZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobEndZ", MasterAnaDev_BlobEndZ, &b_MasterAnaDev_BlobEndZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobEnergyPerCluster_sz", &MasterAnaDev_BlobEnergyPerCluster_sz, &b_MasterAnaDev_BlobEnergyPerCluster_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobEnergyPerCluster", MasterAnaDev_BlobEnergyPerCluster, &b_MasterAnaDev_BlobEnergyPerCluster);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackE_sz", &MasterAnaDev_BlobMCTrackE_sz, &b_MasterAnaDev_BlobMCTrackE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackE", MasterAnaDev_BlobMCTrackE, &b_MasterAnaDev_BlobMCTrackE);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackPx_sz", &MasterAnaDev_BlobMCTrackPx_sz, &b_MasterAnaDev_BlobMCTrackPx_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackPx", MasterAnaDev_BlobMCTrackPx, &b_MasterAnaDev_BlobMCTrackPx);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackPy_sz", &MasterAnaDev_BlobMCTrackPy_sz, &b_MasterAnaDev_BlobMCTrackPy_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackPy", MasterAnaDev_BlobMCTrackPy, &b_MasterAnaDev_BlobMCTrackPy);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackPz_sz", &MasterAnaDev_BlobMCTrackPz_sz, &b_MasterAnaDev_BlobMCTrackPz_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackPz", MasterAnaDev_BlobMCTrackPz, &b_MasterAnaDev_BlobMCTrackPz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackT_sz", &MasterAnaDev_BlobMCTrackT_sz, &b_MasterAnaDev_BlobMCTrackT_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackT", MasterAnaDev_BlobMCTrackT, &b_MasterAnaDev_BlobMCTrackT);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackX_sz", &MasterAnaDev_BlobMCTrackX_sz, &b_MasterAnaDev_BlobMCTrackX_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackX", MasterAnaDev_BlobMCTrackX, &b_MasterAnaDev_BlobMCTrackX);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackY_sz", &MasterAnaDev_BlobMCTrackY_sz, &b_MasterAnaDev_BlobMCTrackY_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackY", MasterAnaDev_BlobMCTrackY, &b_MasterAnaDev_BlobMCTrackY);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackZ_sz", &MasterAnaDev_BlobMCTrackZ_sz, &b_MasterAnaDev_BlobMCTrackZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMCTrackZ", MasterAnaDev_BlobMCTrackZ, &b_MasterAnaDev_BlobMCTrackZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDRho_sz", &MasterAnaDev_BlobMuonDRho_sz, &b_MasterAnaDev_BlobMuonDRho_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDRho", MasterAnaDev_BlobMuonDRho, &b_MasterAnaDev_BlobMuonDRho);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDTheta_sz", &MasterAnaDev_BlobMuonDTheta_sz, &b_MasterAnaDev_BlobMuonDTheta_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobMuonDTheta", MasterAnaDev_BlobMuonDTheta, &b_MasterAnaDev_BlobMuonDTheta);
   fChain->SetBranchAddress("MasterAnaDev_BlobReactionPlaneAngle_sz", &MasterAnaDev_BlobReactionPlaneAngle_sz, &b_MasterAnaDev_BlobReactionPlaneAngle_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobReactionPlaneAngle", MasterAnaDev_BlobReactionPlaneAngle, &b_MasterAnaDev_BlobReactionPlaneAngle);
   fChain->SetBranchAddress("MasterAnaDev_BlobT_sz", &MasterAnaDev_BlobT_sz, &b_MasterAnaDev_BlobT_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobT", MasterAnaDev_BlobT, &b_MasterAnaDev_BlobT);
   fChain->SetBranchAddress("MasterAnaDev_BlobTPos_sz", &MasterAnaDev_BlobTPos_sz, &b_MasterAnaDev_BlobTPos_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTPos", MasterAnaDev_BlobTPos, &b_MasterAnaDev_BlobTPos);
   fChain->SetBranchAddress("MasterAnaDev_BlobTPosPerCluster_sz", &MasterAnaDev_BlobTPosPerCluster_sz, &b_MasterAnaDev_BlobTPosPerCluster_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTPosPerCluster", MasterAnaDev_BlobTPosPerCluster, &b_MasterAnaDev_BlobTPosPerCluster);
   fChain->SetBranchAddress("MasterAnaDev_BlobTimePerCluster_sz", &MasterAnaDev_BlobTimePerCluster_sz, &b_MasterAnaDev_BlobTimePerCluster_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTimePerCluster", MasterAnaDev_BlobTimePerCluster, &b_MasterAnaDev_BlobTimePerCluster);
   fChain->SetBranchAddress("MasterAnaDev_BlobTotalE_sz", &MasterAnaDev_BlobTotalE_sz, &b_MasterAnaDev_BlobTotalE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTotalE", MasterAnaDev_BlobTotalE, &b_MasterAnaDev_BlobTotalE);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackAx_sz", &MasterAnaDev_BlobTrackAx_sz, &b_MasterAnaDev_BlobTrackAx_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackAx", MasterAnaDev_BlobTrackAx, &b_MasterAnaDev_BlobTrackAx);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackAy_sz", &MasterAnaDev_BlobTrackAy_sz, &b_MasterAnaDev_BlobTrackAy_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackAy", MasterAnaDev_BlobTrackAy, &b_MasterAnaDev_BlobTrackAy);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackE_sz", &MasterAnaDev_BlobTrackE_sz, &b_MasterAnaDev_BlobTrackE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackE", MasterAnaDev_BlobTrackE, &b_MasterAnaDev_BlobTrackE);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackL_sz", &MasterAnaDev_BlobTrackL_sz, &b_MasterAnaDev_BlobTrackL_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackL", MasterAnaDev_BlobTrackL, &b_MasterAnaDev_BlobTrackL);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackLLRPion_sz", &MasterAnaDev_BlobTrackLLRPion_sz, &b_MasterAnaDev_BlobTrackLLRPion_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackLLRPion", MasterAnaDev_BlobTrackLLRPion, &b_MasterAnaDev_BlobTrackLLRPion);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackLLRProton_sz", &MasterAnaDev_BlobTrackLLRProton_sz, &b_MasterAnaDev_BlobTrackLLRProton_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackLLRProton", MasterAnaDev_BlobTrackLLRProton, &b_MasterAnaDev_BlobTrackLLRProton);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackNodeEnergy_sz", &MasterAnaDev_BlobTrackNodeEnergy_sz, &b_MasterAnaDev_BlobTrackNodeEnergy_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackNodeEnergy", MasterAnaDev_BlobTrackNodeEnergy, &b_MasterAnaDev_BlobTrackNodeEnergy);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackT_sz", &MasterAnaDev_BlobTrackT_sz, &b_MasterAnaDev_BlobTrackT_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackT", MasterAnaDev_BlobTrackT, &b_MasterAnaDev_BlobTrackT);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackX_sz", &MasterAnaDev_BlobTrackX_sz, &b_MasterAnaDev_BlobTrackX_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackX", MasterAnaDev_BlobTrackX, &b_MasterAnaDev_BlobTrackX);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackY_sz", &MasterAnaDev_BlobTrackY_sz, &b_MasterAnaDev_BlobTrackY_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackY", MasterAnaDev_BlobTrackY, &b_MasterAnaDev_BlobTrackY);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackZ_sz", &MasterAnaDev_BlobTrackZ_sz, &b_MasterAnaDev_BlobTrackZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackZ", MasterAnaDev_BlobTrackZ, &b_MasterAnaDev_BlobTrackZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectron_sz", &MasterAnaDev_BlobTrackdEdXElectron_sz, &b_MasterAnaDev_BlobTrackdEdXElectron_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectron", MasterAnaDev_BlobTrackdEdXElectron, &b_MasterAnaDev_BlobTrackdEdXElectron);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronE_sz", &MasterAnaDev_BlobTrackdEdXElectronE_sz, &b_MasterAnaDev_BlobTrackdEdXElectronE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronE", MasterAnaDev_BlobTrackdEdXElectronE, &b_MasterAnaDev_BlobTrackdEdXElectronE);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronPx_sz", &MasterAnaDev_BlobTrackdEdXElectronPx_sz, &b_MasterAnaDev_BlobTrackdEdXElectronPx_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronPx", MasterAnaDev_BlobTrackdEdXElectronPx, &b_MasterAnaDev_BlobTrackdEdXElectronPx);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronPy_sz", &MasterAnaDev_BlobTrackdEdXElectronPy_sz, &b_MasterAnaDev_BlobTrackdEdXElectronPy_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronPy", MasterAnaDev_BlobTrackdEdXElectronPy, &b_MasterAnaDev_BlobTrackdEdXElectronPy);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronPz_sz", &MasterAnaDev_BlobTrackdEdXElectronPz_sz, &b_MasterAnaDev_BlobTrackdEdXElectronPz_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXElectronPz", MasterAnaDev_BlobTrackdEdXElectronPz, &b_MasterAnaDev_BlobTrackdEdXElectronPz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPion_sz", &MasterAnaDev_BlobTrackdEdXPion_sz, &b_MasterAnaDev_BlobTrackdEdXPion_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPion", MasterAnaDev_BlobTrackdEdXPion, &b_MasterAnaDev_BlobTrackdEdXPion);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionE_sz", &MasterAnaDev_BlobTrackdEdXPionE_sz, &b_MasterAnaDev_BlobTrackdEdXPionE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionE", MasterAnaDev_BlobTrackdEdXPionE, &b_MasterAnaDev_BlobTrackdEdXPionE);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionPx_sz", &MasterAnaDev_BlobTrackdEdXPionPx_sz, &b_MasterAnaDev_BlobTrackdEdXPionPx_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionPx", MasterAnaDev_BlobTrackdEdXPionPx, &b_MasterAnaDev_BlobTrackdEdXPionPx);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionPy_sz", &MasterAnaDev_BlobTrackdEdXPionPy_sz, &b_MasterAnaDev_BlobTrackdEdXPionPy_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionPy", MasterAnaDev_BlobTrackdEdXPionPy, &b_MasterAnaDev_BlobTrackdEdXPionPy);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionPz_sz", &MasterAnaDev_BlobTrackdEdXPionPz_sz, &b_MasterAnaDev_BlobTrackdEdXPionPz_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXPionPz", MasterAnaDev_BlobTrackdEdXPionPz, &b_MasterAnaDev_BlobTrackdEdXPionPz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProton_sz", &MasterAnaDev_BlobTrackdEdXProton_sz, &b_MasterAnaDev_BlobTrackdEdXProton_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProton", MasterAnaDev_BlobTrackdEdXProton, &b_MasterAnaDev_BlobTrackdEdXProton);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonE_sz", &MasterAnaDev_BlobTrackdEdXProtonE_sz, &b_MasterAnaDev_BlobTrackdEdXProtonE_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonE", MasterAnaDev_BlobTrackdEdXProtonE, &b_MasterAnaDev_BlobTrackdEdXProtonE);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonPx_sz", &MasterAnaDev_BlobTrackdEdXProtonPx_sz, &b_MasterAnaDev_BlobTrackdEdXProtonPx_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonPx", MasterAnaDev_BlobTrackdEdXProtonPx, &b_MasterAnaDev_BlobTrackdEdXProtonPx);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonPy_sz", &MasterAnaDev_BlobTrackdEdXProtonPy_sz, &b_MasterAnaDev_BlobTrackdEdXProtonPy_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonPy", MasterAnaDev_BlobTrackdEdXProtonPy, &b_MasterAnaDev_BlobTrackdEdXProtonPy);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonPz_sz", &MasterAnaDev_BlobTrackdEdXProtonPz_sz, &b_MasterAnaDev_BlobTrackdEdXProtonPz_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobTrackdEdXProtonPz", MasterAnaDev_BlobTrackdEdXProtonPz, &b_MasterAnaDev_BlobTrackdEdXProtonPz);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDR_sz", &MasterAnaDev_BlobVtxDR_sz, &b_MasterAnaDev_BlobVtxDR_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDR", MasterAnaDev_BlobVtxDR, &b_MasterAnaDev_BlobVtxDR);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDTPos_sz", &MasterAnaDev_BlobVtxDTPos_sz, &b_MasterAnaDev_BlobVtxDTPos_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDTPos", &MasterAnaDev_BlobVtxDTPos, &b_MasterAnaDev_BlobVtxDTPos);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDZ_sz", &MasterAnaDev_BlobVtxDZ_sz, &b_MasterAnaDev_BlobVtxDZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobVtxDZ", MasterAnaDev_BlobVtxDZ, &b_MasterAnaDev_BlobVtxDZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobX_sz", &MasterAnaDev_BlobX_sz, &b_MasterAnaDev_BlobX_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobX", MasterAnaDev_BlobX, &b_MasterAnaDev_BlobX);
   fChain->SetBranchAddress("MasterAnaDev_BlobY_sz", &MasterAnaDev_BlobY_sz, &b_MasterAnaDev_BlobY_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobY", MasterAnaDev_BlobY, &b_MasterAnaDev_BlobY);
   fChain->SetBranchAddress("MasterAnaDev_BlobZ_sz", &MasterAnaDev_BlobZ_sz, &b_MasterAnaDev_BlobZ_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobZ", MasterAnaDev_BlobZ, &b_MasterAnaDev_BlobZ);
   fChain->SetBranchAddress("MasterAnaDev_BlobZPerCluster_sz", &MasterAnaDev_BlobZPerCluster_sz, &b_MasterAnaDev_BlobZPerCluster_sz);
   fChain->SetBranchAddress("MasterAnaDev_BlobZPerCluster", MasterAnaDev_BlobZPerCluster, &b_MasterAnaDev_BlobZPerCluster);
   fChain->SetBranchAddress("MasterAnaDev_HadronE_sz", &MasterAnaDev_HadronE_sz, &b_MasterAnaDev_HadronE_sz);
   fChain->SetBranchAddress("MasterAnaDev_HadronE", MasterAnaDev_HadronE, &b_MasterAnaDev_HadronE);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Election_sz", &MasterAnaDev_MCEnergyFrac_Election_sz, &b_MasterAnaDev_MCEnergyFrac_Election_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Election", MasterAnaDev_MCEnergyFrac_Election, &b_MasterAnaDev_MCEnergyFrac_Election);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Muon_sz", &MasterAnaDev_MCEnergyFrac_Muon_sz, &b_MasterAnaDev_MCEnergyFrac_Muon_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Muon", MasterAnaDev_MCEnergyFrac_Muon, &b_MasterAnaDev_MCEnergyFrac_Muon);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Neutron_sz", &MasterAnaDev_MCEnergyFrac_Neutron_sz, &b_MasterAnaDev_MCEnergyFrac_Neutron_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Neutron", MasterAnaDev_MCEnergyFrac_Neutron, &b_MasterAnaDev_MCEnergyFrac_Neutron);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_NonParticle_sz", &MasterAnaDev_MCEnergyFrac_NonParticle_sz, &b_MasterAnaDev_MCEnergyFrac_NonParticle_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_NonParticle", MasterAnaDev_MCEnergyFrac_NonParticle, &b_MasterAnaDev_MCEnergyFrac_NonParticle);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Others_sz", &MasterAnaDev_MCEnergyFrac_Others_sz, &b_MasterAnaDev_MCEnergyFrac_Others_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Others", MasterAnaDev_MCEnergyFrac_Others, &b_MasterAnaDev_MCEnergyFrac_Others);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Photon_sz", &MasterAnaDev_MCEnergyFrac_Photon_sz, &b_MasterAnaDev_MCEnergyFrac_Photon_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Photon", MasterAnaDev_MCEnergyFrac_Photon, &b_MasterAnaDev_MCEnergyFrac_Photon);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Pi0_sz", &MasterAnaDev_MCEnergyFrac_Pi0_sz, &b_MasterAnaDev_MCEnergyFrac_Pi0_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Pi0", MasterAnaDev_MCEnergyFrac_Pi0, &b_MasterAnaDev_MCEnergyFrac_Pi0);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_PiMinus_sz", &MasterAnaDev_MCEnergyFrac_PiMinus_sz, &b_MasterAnaDev_MCEnergyFrac_PiMinus_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_PiMinus", MasterAnaDev_MCEnergyFrac_PiMinus, &b_MasterAnaDev_MCEnergyFrac_PiMinus);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_PiPlus_sz", &MasterAnaDev_MCEnergyFrac_PiPlus_sz, &b_MasterAnaDev_MCEnergyFrac_PiPlus_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_PiPlus", MasterAnaDev_MCEnergyFrac_PiPlus, &b_MasterAnaDev_MCEnergyFrac_PiPlus);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Proton_sz", &MasterAnaDev_MCEnergyFrac_Proton_sz, &b_MasterAnaDev_MCEnergyFrac_Proton_sz);
   fChain->SetBranchAddress("MasterAnaDev_MCEnergyFrac_Proton", MasterAnaDev_MCEnergyFrac_Proton, &b_MasterAnaDev_MCEnergyFrac_Proton);
   fChain->SetBranchAddress("MasterAnaDev_ReconstructedHadronMass_sz", &MasterAnaDev_ReconstructedHadronMass_sz, &b_MasterAnaDev_ReconstructedHadronMass_sz);
   fChain->SetBranchAddress("MasterAnaDev_ReconstructedHadronMass", MasterAnaDev_ReconstructedHadronMass, &b_MasterAnaDev_ReconstructedHadronMass);
   fChain->SetBranchAddress("MasterAnaDev_proton_nodes_E_sz", &MasterAnaDev_proton_nodes_E_sz, &b_MasterAnaDev_proton_nodes_E_sz);
   fChain->SetBranchAddress("MasterAnaDev_proton_nodes_E", MasterAnaDev_proton_nodes_E, &b_MasterAnaDev_proton_nodes_E);
   fChain->SetBranchAddress("MasterAnaDev_proton_nodes_nodesNormE_sz", &MasterAnaDev_proton_nodes_nodesNormE_sz, &b_MasterAnaDev_proton_nodes_nodesNormE_sz);
   fChain->SetBranchAddress("MasterAnaDev_proton_nodes_nodesNormE", MasterAnaDev_proton_nodes_nodesNormE, &b_MasterAnaDev_proton_nodes_nodesNormE);
   fChain->SetBranchAddress("MasterAnaDev_ref_dist_to_division", MasterAnaDev_ref_dist_to_division, &b_MasterAnaDev_ref_dist_to_division);
   fChain->SetBranchAddress("MasterAnaDev_ref_dist_to_target", MasterAnaDev_ref_dist_to_target, &b_MasterAnaDev_ref_dist_to_target);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_BetheBloch_biasDown_sz", &MasterAnaDev_sec_protons_E_BetheBloch_biasDown_sz, &b_MasterAnaDev_sec_protons_E_BetheBloch_biasDown_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_BetheBloch_biasDown", MasterAnaDev_sec_protons_E_BetheBloch_biasDown, &b_MasterAnaDev_sec_protons_E_BetheBloch_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_BetheBloch_biasUp_sz", &MasterAnaDev_sec_protons_E_BetheBloch_biasUp_sz, &b_MasterAnaDev_sec_protons_E_BetheBloch_biasUp_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_BetheBloch_biasUp", MasterAnaDev_sec_protons_E_BetheBloch_biasUp, &b_MasterAnaDev_sec_protons_E_BetheBloch_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_Birks_bias_sz", &MasterAnaDev_sec_protons_E_Birks_bias_sz, &b_MasterAnaDev_sec_protons_E_Birks_bias_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_Birks_bias", MasterAnaDev_sec_protons_E_Birks_bias, &b_MasterAnaDev_sec_protons_E_Birks_bias);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_MEU_biasDown_sz", &MasterAnaDev_sec_protons_E_MEU_biasDown_sz, &b_MasterAnaDev_sec_protons_E_MEU_biasDown_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_MEU_biasDown", MasterAnaDev_sec_protons_E_MEU_biasDown, &b_MasterAnaDev_sec_protons_E_MEU_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_MEU_biasUp_sz", &MasterAnaDev_sec_protons_E_MEU_biasUp_sz, &b_MasterAnaDev_sec_protons_E_MEU_biasUp_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_MEU_biasUp", MasterAnaDev_sec_protons_E_MEU_biasUp, &b_MasterAnaDev_sec_protons_E_MEU_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_Mass_biasDown_sz", &MasterAnaDev_sec_protons_E_Mass_biasDown_sz, &b_MasterAnaDev_sec_protons_E_Mass_biasDown_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_Mass_biasDown", MasterAnaDev_sec_protons_E_Mass_biasDown, &b_MasterAnaDev_sec_protons_E_Mass_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_Mass_biasUp_sz", &MasterAnaDev_sec_protons_E_Mass_biasUp_sz, &b_MasterAnaDev_sec_protons_E_Mass_biasUp_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_Mass_biasUp", MasterAnaDev_sec_protons_E_Mass_biasUp, &b_MasterAnaDev_sec_protons_E_Mass_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_fromdEdx_sz", &MasterAnaDev_sec_protons_E_fromdEdx_sz, &b_MasterAnaDev_sec_protons_E_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_E_fromdEdx", MasterAnaDev_sec_protons_E_fromdEdx, &b_MasterAnaDev_sec_protons_E_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_P_fromdEdx_sz", &MasterAnaDev_sec_protons_P_fromdEdx_sz, &b_MasterAnaDev_sec_protons_P_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_P_fromdEdx", MasterAnaDev_sec_protons_P_fromdEdx, &b_MasterAnaDev_sec_protons_P_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_Px_fromdEdx_sz", &MasterAnaDev_sec_protons_Px_fromdEdx_sz, &b_MasterAnaDev_sec_protons_Px_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_Px_fromdEdx", MasterAnaDev_sec_protons_Px_fromdEdx, &b_MasterAnaDev_sec_protons_Px_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_Py_fromdEdx_sz", &MasterAnaDev_sec_protons_Py_fromdEdx_sz, &b_MasterAnaDev_sec_protons_Py_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_Py_fromdEdx", MasterAnaDev_sec_protons_Py_fromdEdx, &b_MasterAnaDev_sec_protons_Py_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_Pz_fromdEdx_sz", &MasterAnaDev_sec_protons_Pz_fromdEdx_sz, &b_MasterAnaDev_sec_protons_Pz_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_Pz_fromdEdx", MasterAnaDev_sec_protons_Pz_fromdEdx, &b_MasterAnaDev_sec_protons_Pz_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_T_fromCalo_sz", &MasterAnaDev_sec_protons_T_fromCalo_sz, &b_MasterAnaDev_sec_protons_T_fromCalo_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_T_fromCalo", MasterAnaDev_sec_protons_T_fromCalo, &b_MasterAnaDev_sec_protons_T_fromCalo);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_T_fromdEdx_sz", &MasterAnaDev_sec_protons_T_fromdEdx_sz, &b_MasterAnaDev_sec_protons_T_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_T_fromdEdx", MasterAnaDev_sec_protons_T_fromdEdx, &b_MasterAnaDev_sec_protons_T_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_nodes_E_sz", &MasterAnaDev_sec_protons_nodes_E_sz, &b_MasterAnaDev_sec_protons_nodes_E_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_nodes_E", MasterAnaDev_sec_protons_nodes_E, &b_MasterAnaDev_sec_protons_nodes_E);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_nodes_nodesNormE_sz", &MasterAnaDev_sec_protons_nodes_nodesNormE_sz, &b_MasterAnaDev_sec_protons_nodes_nodesNormE_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_nodes_nodesNormE", MasterAnaDev_sec_protons_nodes_nodesNormE, &b_MasterAnaDev_sec_protons_nodes_nodesNormE);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_pion_scores_sz", &MasterAnaDev_sec_protons_pion_scores_sz, &b_MasterAnaDev_sec_protons_pion_scores_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_pion_scores", MasterAnaDev_sec_protons_pion_scores, &b_MasterAnaDev_sec_protons_pion_scores);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_pion_scores1_sz", &MasterAnaDev_sec_protons_pion_scores1_sz, &b_MasterAnaDev_sec_protons_pion_scores1_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_pion_scores1", MasterAnaDev_sec_protons_pion_scores1, &b_MasterAnaDev_sec_protons_pion_scores1);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_pion_scores2_sz", &MasterAnaDev_sec_protons_pion_scores2_sz, &b_MasterAnaDev_sec_protons_pion_scores2_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_pion_scores2", MasterAnaDev_sec_protons_pion_scores2, &b_MasterAnaDev_sec_protons_pion_scores2);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_proton_scores_sz", &MasterAnaDev_sec_protons_proton_scores_sz, &b_MasterAnaDev_sec_protons_proton_scores_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_proton_scores", MasterAnaDev_sec_protons_proton_scores, &b_MasterAnaDev_sec_protons_proton_scores);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_proton_scores1_sz", &MasterAnaDev_sec_protons_proton_scores1_sz, &b_MasterAnaDev_sec_protons_proton_scores1_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_proton_scores1", MasterAnaDev_sec_protons_proton_scores1, &b_MasterAnaDev_sec_protons_proton_scores1);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_proton_scores2_sz", &MasterAnaDev_sec_protons_proton_scores2_sz, &b_MasterAnaDev_sec_protons_proton_scores2_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_proton_scores2", MasterAnaDev_sec_protons_proton_scores2, &b_MasterAnaDev_sec_protons_proton_scores2);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_BetheBloch_biasDown_sz", &MasterAnaDev_sec_protons_score1_BetheBloch_biasDown_sz, &b_MasterAnaDev_sec_protons_score1_BetheBloch_biasDown_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_BetheBloch_biasDown", MasterAnaDev_sec_protons_score1_BetheBloch_biasDown, &b_MasterAnaDev_sec_protons_score1_BetheBloch_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_BetheBloch_biasUp_sz", &MasterAnaDev_sec_protons_score1_BetheBloch_biasUp_sz, &b_MasterAnaDev_sec_protons_score1_BetheBloch_biasUp_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_BetheBloch_biasUp", MasterAnaDev_sec_protons_score1_BetheBloch_biasUp, &b_MasterAnaDev_sec_protons_score1_BetheBloch_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_Birks_bias_sz", &MasterAnaDev_sec_protons_score1_Birks_bias_sz, &b_MasterAnaDev_sec_protons_score1_Birks_bias_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_Birks_bias", MasterAnaDev_sec_protons_score1_Birks_bias, &b_MasterAnaDev_sec_protons_score1_Birks_bias);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_MEU_biasDown_sz", &MasterAnaDev_sec_protons_score1_MEU_biasDown_sz, &b_MasterAnaDev_sec_protons_score1_MEU_biasDown_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_MEU_biasDown", MasterAnaDev_sec_protons_score1_MEU_biasDown, &b_MasterAnaDev_sec_protons_score1_MEU_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_MEU_biasUp_sz", &MasterAnaDev_sec_protons_score1_MEU_biasUp_sz, &b_MasterAnaDev_sec_protons_score1_MEU_biasUp_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_MEU_biasUp", MasterAnaDev_sec_protons_score1_MEU_biasUp, &b_MasterAnaDev_sec_protons_score1_MEU_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_Mass_biasDown_sz", &MasterAnaDev_sec_protons_score1_Mass_biasDown_sz, &b_MasterAnaDev_sec_protons_score1_Mass_biasDown_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_Mass_biasDown", MasterAnaDev_sec_protons_score1_Mass_biasDown, &b_MasterAnaDev_sec_protons_score1_Mass_biasDown);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_Mass_biasUp_sz", &MasterAnaDev_sec_protons_score1_Mass_biasUp_sz, &b_MasterAnaDev_sec_protons_score1_Mass_biasUp_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_score1_Mass_biasUp", MasterAnaDev_sec_protons_score1_Mass_biasUp, &b_MasterAnaDev_sec_protons_score1_Mass_biasUp);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_theta_fromdEdx_sz", &MasterAnaDev_sec_protons_theta_fromdEdx_sz, &b_MasterAnaDev_sec_protons_theta_fromdEdx_sz);
   fChain->SetBranchAddress("MasterAnaDev_sec_protons_theta_fromdEdx", MasterAnaDev_sec_protons_theta_fromdEdx, &b_MasterAnaDev_sec_protons_theta_fromdEdx);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_curve_energy_shift", MasterAnaDev_sys_muon_curve_energy_shift, &b_MasterAnaDev_sys_muon_curve_energy_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_energy_shift", MasterAnaDev_sys_muon_energy_shift, &b_MasterAnaDev_sys_muon_energy_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_minerva_energy_shift", MasterAnaDev_sys_muon_minerva_energy_shift, &b_MasterAnaDev_sys_muon_minerva_energy_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_qSquared_shift", MasterAnaDev_sys_muon_qSquared_shift, &b_MasterAnaDev_sys_muon_qSquared_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_range_energy_shift", MasterAnaDev_sys_muon_range_energy_shift, &b_MasterAnaDev_sys_muon_range_energy_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_wSquared_shift", MasterAnaDev_sys_muon_wSquared_shift, &b_MasterAnaDev_sys_muon_wSquared_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_xbj_shift", MasterAnaDev_sys_muon_xbj_shift, &b_MasterAnaDev_sys_muon_xbj_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_muon_y_shift", MasterAnaDev_sys_muon_y_shift, &b_MasterAnaDev_sys_muon_y_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_nu_energy_shift", MasterAnaDev_sys_nu_energy_shift, &b_MasterAnaDev_sys_nu_energy_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_recoil_energy_shift", MasterAnaDev_sys_recoil_energy_shift, &b_MasterAnaDev_sys_recoil_energy_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_recoil_qSquared_shift", MasterAnaDev_sys_recoil_qSquared_shift, &b_MasterAnaDev_sys_recoil_qSquared_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_recoil_wSquared_shift", MasterAnaDev_sys_recoil_wSquared_shift, &b_MasterAnaDev_sys_recoil_wSquared_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_recoil_xbj_shift", MasterAnaDev_sys_recoil_xbj_shift, &b_MasterAnaDev_sys_recoil_xbj_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_recoil_y_shift", MasterAnaDev_sys_recoil_y_shift, &b_MasterAnaDev_sys_recoil_y_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_total_qSquared_shift", MasterAnaDev_sys_total_qSquared_shift, &b_MasterAnaDev_sys_total_qSquared_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_total_wSquared_shift", MasterAnaDev_sys_total_wSquared_shift, &b_MasterAnaDev_sys_total_wSquared_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_total_xbj_shift", MasterAnaDev_sys_total_xbj_shift, &b_MasterAnaDev_sys_total_xbj_shift);
   fChain->SetBranchAddress("MasterAnaDev_sys_total_y_shift", MasterAnaDev_sys_total_y_shift, &b_MasterAnaDev_sys_total_y_shift);
   fChain->SetBranchAddress("n_prongs", &n_prongs, &b_n_prongs);
   fChain->SetBranchAddress("prong_nParticles", prong_nParticles, &b_prong_nParticles);
   fChain->SetBranchAddress("prong_", prong_, &b_prong_);
   fChain->SetBranchAddress("prong_BackMiddleRatio", prong_BackMiddleRatio, &b_prong_BackMiddleRatio);
   fChain->SetBranchAddress("prong_CalCorrectedEnergy", prong_CalCorrectedEnergy, &b_prong_CalCorrectedEnergy);
   fChain->SetBranchAddress("prong_ECALCalibE", prong_ECALCalibE, &b_prong_ECALCalibE);
   fChain->SetBranchAddress("prong_ECALVisE", prong_ECALVisE, &b_prong_ECALVisE);
   fChain->SetBranchAddress("prong_FirstFireFraction", prong_FirstFireFraction, &b_prong_FirstFireFraction);
   fChain->SetBranchAddress("prong_HCALCalibE", prong_HCALCalibE, &b_prong_HCALCalibE);
   fChain->SetBranchAddress("prong_HCALVisE", prong_HCALVisE, &b_prong_HCALVisE);
   fChain->SetBranchAddress("prong_MedianPlaneShowerWidth", prong_MedianPlaneShowerWidth, &b_prong_MedianPlaneShowerWidth);
   fChain->SetBranchAddress("prong_NonMIPClusFrac", prong_NonMIPClusFrac, &b_prong_NonMIPClusFrac);
   fChain->SetBranchAddress("prong_ODVisE", prong_ODVisE, &b_prong_ODVisE);
   fChain->SetBranchAddress("prong_SideECALVisE", prong_SideECALVisE, &b_prong_SideECALVisE);
   fChain->SetBranchAddress("prong_TotalVisE", prong_TotalVisE, &b_prong_TotalVisE);
   fChain->SetBranchAddress("prong_TrackerCalibE", prong_TrackerCalibE, &b_prong_TrackerCalibE);
   fChain->SetBranchAddress("prong_TransverseGapScore", prong_TransverseGapScore, &b_prong_TransverseGapScore);
   fChain->SetBranchAddress("prong_TrimmedCaloEnergy", prong_TrimmedCaloEnergy, &b_prong_TrimmedCaloEnergy);
   fChain->SetBranchAddress("prong_TrimmedVisE", prong_TrimmedVisE, &b_prong_TrimmedVisE);
   fChain->SetBranchAddress("prong_UViewE", prong_UViewE, &b_prong_UViewE);
   fChain->SetBranchAddress("prong_VViewE", prong_VViewE, &b_prong_VViewE);
   fChain->SetBranchAddress("prong_XViewE", prong_XViewE, &b_prong_XViewE);
   fChain->SetBranchAddress("prong_dEdXMean", prong_dEdXMean, &b_prong_dEdXMean);
   fChain->SetBranchAddress("prong_dEdXMeanFrontTracker", prong_dEdXMeanFrontTracker, &b_prong_dEdXMeanFrontTracker);
   fChain->SetBranchAddress("prong_axis_vector", &prong_axis_vector, &b_prong_axis_vector);
   fChain->SetBranchAddress("prong_axis_vertex", &prong_axis_vertex, &b_prong_axis_vertex);
   fChain->SetBranchAddress("prong_dEdXs", &prong_dEdXs, &b_prong_dEdXs);
   fChain->SetBranchAddress("prong_dEdXs_dz", &prong_dEdXs_dz, &b_prong_dEdXs_dz);
   fChain->SetBranchAddress("prong_dEdXs_projection", &prong_dEdXs_projection, &b_prong_dEdXs_projection);
   fChain->SetBranchAddress("prong_source_vertex", &prong_source_vertex, &b_prong_source_vertex);
   fChain->SetBranchAddress("ev_run", &ev_run, &b_ev_run);
   fChain->SetBranchAddress("ev_subrun", &ev_subrun, &b_ev_subrun);
   fChain->SetBranchAddress("ev_detector", &ev_detector, &b_ev_detector);
   fChain->SetBranchAddress("ev_triggerType", &ev_triggerType, &b_ev_triggerType);
   fChain->SetBranchAddress("ev_gate", &ev_gate, &b_ev_gate);
   fChain->SetBranchAddress("ev_global_gate", &ev_global_gate, &b_ev_global_gate);
   fChain->SetBranchAddress("ev_gps_time_sec", &ev_gps_time_sec, &b_ev_gps_time_sec);
   fChain->SetBranchAddress("ev_gps_time_usec", &ev_gps_time_usec, &b_ev_gps_time_usec);
   fChain->SetBranchAddress("numi_x_pos", &numi_x_pos, &b_numi_x_pos);
   fChain->SetBranchAddress("numi_y_pos", &numi_y_pos, &b_numi_y_pos);
   fChain->SetBranchAddress("batch_structure", &batch_structure, &b_batch_structure);
   fChain->SetBranchAddress("numi_minos_time_sec", &numi_minos_time_sec, &b_numi_minos_time_sec);
   fChain->SetBranchAddress("numi_minos_time_nsec", &numi_minos_time_nsec, &b_numi_minos_time_nsec);
   fChain->SetBranchAddress("numi_database_sec", &numi_database_sec, &b_numi_database_sec);
   fChain->SetBranchAddress("numi_database_nsec", &numi_database_nsec, &b_numi_database_nsec);
   fChain->SetBranchAddress("numi_is_good_beam_spill", &numi_is_good_beam_spill, &b_numi_is_good_beam_spill);
   fChain->SetBranchAddress("numi_is_bad_pot_data_spill", &numi_is_bad_pot_data_spill, &b_numi_is_bad_pot_data_spill);
   fChain->SetBranchAddress("numi_is_no_beam_spill", &numi_is_no_beam_spill, &b_numi_is_no_beam_spill);
   fChain->SetBranchAddress("numi_is_bad_data_spill", &numi_is_bad_data_spill, &b_numi_is_bad_data_spill);
   fChain->SetBranchAddress("numi_is_bad_profile_x_width_data", &numi_is_bad_profile_x_width_data, &b_numi_is_bad_profile_x_width_data);
   fChain->SetBranchAddress("numi_is_bad_profile_y_width_data", &numi_is_bad_profile_y_width_data, &b_numi_is_bad_profile_y_width_data);
   fChain->SetBranchAddress("numi_is_bad_x_position_data", &numi_is_bad_x_position_data, &b_numi_is_bad_x_position_data);
   fChain->SetBranchAddress("numi_is_bad_y_position_data", &numi_is_bad_y_position_data, &b_numi_is_bad_y_position_data);
   fChain->SetBranchAddress("numi_is_bad_horn_curr_data", &numi_is_bad_horn_curr_data, &b_numi_is_bad_horn_curr_data);
   fChain->SetBranchAddress("numi_is_bad_nearest_time_spill", &numi_is_bad_nearest_time_spill, &b_numi_is_bad_nearest_time_spill);
   fChain->SetBranchAddress("numi_is_bad_beam_spill", &numi_is_bad_beam_spill, &b_numi_is_bad_beam_spill);
   fChain->SetBranchAddress("numi_is_bad_pot_spill", &numi_is_bad_pot_spill, &b_numi_is_bad_pot_spill);
   fChain->SetBranchAddress("numi_is_bad_x_pos", &numi_is_bad_x_pos, &b_numi_is_bad_x_pos);
   fChain->SetBranchAddress("numi_is_bad_y_pos", &numi_is_bad_y_pos, &b_numi_is_bad_y_pos);
   fChain->SetBranchAddress("numi_is_bad_beam_size", &numi_is_bad_beam_size, &b_numi_is_bad_beam_size);
   fChain->SetBranchAddress("numi_is_bad_profile_width_x", &numi_is_bad_profile_width_x, &b_numi_is_bad_profile_width_x);
   fChain->SetBranchAddress("numi_is_bad_profile_width_y", &numi_is_bad_profile_width_y, &b_numi_is_bad_profile_width_y);
   fChain->SetBranchAddress("numi_is_bad_horn_curr", &numi_is_bad_horn_curr, &b_numi_is_bad_horn_curr);
   fChain->SetBranchAddress("numi_is_target_out_spill", &numi_is_target_out_spill, &b_numi_is_target_out_spill);
   fChain->SetBranchAddress("numi_is_bad_beam_type_spill", &numi_is_bad_beam_type_spill, &b_numi_is_bad_beam_type_spill);
   fChain->SetBranchAddress("numi_is_bad_beam_frac_on_tgt_spill", &numi_is_bad_beam_frac_on_tgt_spill, &b_numi_is_bad_beam_frac_on_tgt_spill);
   fChain->SetBranchAddress("numi_is_good_position", &numi_is_good_position, &b_numi_is_good_position);
   fChain->SetBranchAddress("numi_is_good_width", &numi_is_good_width, &b_numi_is_good_width);
   fChain->SetBranchAddress("numi_is_good_toroids", &numi_is_good_toroids, &b_numi_is_good_toroids);
   fChain->SetBranchAddress("numi_is_good_delta_t", &numi_is_good_delta_t, &b_numi_is_good_delta_t);
   fChain->SetBranchAddress("numi_is_good_horn", &numi_is_good_horn, &b_numi_is_good_horn);
   fChain->SetBranchAddress("numi_time_to_nearest", &numi_time_to_nearest, &b_numi_time_to_nearest);
   fChain->SetBranchAddress("mc_run", &mc_run, &b_mc_run);
   fChain->SetBranchAddress("mc_subrun", &mc_subrun, &b_mc_subrun);
   fChain->SetBranchAddress("mc_nInteractions", &mc_nInteractions, &b_mc_nInteractions);
   fChain->SetBranchAddress("mc_MIState", &mc_MIState, &b_mc_MIState);
   fChain->SetBranchAddress("mc_pot", &mc_pot, &b_mc_pot);
   fChain->SetBranchAddress("mc_beamConfig", &mc_beamConfig, &b_mc_beamConfig);
   fChain->SetBranchAddress("mc_processType", &mc_processType, &b_mc_processType);
   fChain->SetBranchAddress("mc_nthEvtInSpill", &mc_nthEvtInSpill, &b_mc_nthEvtInSpill);
   fChain->SetBranchAddress("mc_nthEvtInFile", &mc_nthEvtInFile, &b_mc_nthEvtInFile);
   fChain->SetBranchAddress("mc_intType", &mc_intType, &b_mc_intType);
   fChain->SetBranchAddress("mc_current", &mc_current, &b_mc_current);
   fChain->SetBranchAddress("mc_charm", &mc_charm, &b_mc_charm);
   fChain->SetBranchAddress("mc_weight", &mc_weight, &b_mc_weight);
   fChain->SetBranchAddress("mc_XSec", &mc_XSec, &b_mc_XSec);
   fChain->SetBranchAddress("mc_diffXSec", &mc_diffXSec, &b_mc_diffXSec);
   fChain->SetBranchAddress("mc_incoming", &mc_incoming, &b_mc_incoming);
   fChain->SetBranchAddress("mc_fluxDriverProb", &mc_fluxDriverProb, &b_mc_fluxDriverProb);
   fChain->SetBranchAddress("mc_targetNucleus", &mc_targetNucleus, &b_mc_targetNucleus);
   fChain->SetBranchAddress("mc_targetZ", &mc_targetZ, &b_mc_targetZ);
   fChain->SetBranchAddress("mc_targetA", &mc_targetA, &b_mc_targetA);
   fChain->SetBranchAddress("mc_targetNucleon", &mc_targetNucleon, &b_mc_targetNucleon);
   fChain->SetBranchAddress("mc_struckQuark", &mc_struckQuark, &b_mc_struckQuark);
   fChain->SetBranchAddress("mc_seaQuark", &mc_seaQuark, &b_mc_seaQuark);
   fChain->SetBranchAddress("mc_resID", &mc_resID, &b_mc_resID);
   fChain->SetBranchAddress("mc_primaryLepton", &mc_primaryLepton, &b_mc_primaryLepton);
   fChain->SetBranchAddress("mc_incomingE", &mc_incomingE, &b_mc_incomingE);
   fChain->SetBranchAddress("mc_Bjorkenx", &mc_Bjorkenx, &b_mc_Bjorkenx);
   fChain->SetBranchAddress("mc_Bjorkeny", &mc_Bjorkeny, &b_mc_Bjorkeny);
   fChain->SetBranchAddress("mc_Q2", &mc_Q2, &b_mc_Q2);
   fChain->SetBranchAddress("mc_nuT", &mc_nuT, &b_mc_nuT);
   fChain->SetBranchAddress("mc_w", &mc_w, &b_mc_w);
   fChain->SetBranchAddress("mc_vtx", mc_vtx, &b_mc_vtx);
   fChain->SetBranchAddress("mc_incomingPartVec", mc_incomingPartVec, &b_mc_incomingPartVec);
   fChain->SetBranchAddress("mc_initNucVec", mc_initNucVec, &b_mc_initNucVec);
   fChain->SetBranchAddress("mc_primFSLepton", mc_primFSLepton, &b_mc_primFSLepton);
   fChain->SetBranchAddress("mc_nFSPart", &mc_nFSPart, &b_mc_nFSPart);
   fChain->SetBranchAddress("mc_FSPartPx", mc_FSPartPx, &b_mc_FSPartPx);
   fChain->SetBranchAddress("mc_FSPartPy", mc_FSPartPy, &b_mc_FSPartPy);
   fChain->SetBranchAddress("mc_FSPartPz", mc_FSPartPz, &b_mc_FSPartPz);
   fChain->SetBranchAddress("mc_FSPartE", mc_FSPartE, &b_mc_FSPartE);
   fChain->SetBranchAddress("mc_FSPartPDG", mc_FSPartPDG, &b_mc_FSPartPDG);
   fChain->SetBranchAddress("mc_er_nPart", &mc_er_nPart, &b_mc_er_nPart);
   fChain->SetBranchAddress("mc_er_ID", mc_er_ID, &b_mc_er_ID);
   fChain->SetBranchAddress("mc_er_status", mc_er_status, &b_mc_er_status);
   fChain->SetBranchAddress("mc_er_posInNucX", mc_er_posInNucX, &b_mc_er_posInNucX);
   fChain->SetBranchAddress("mc_er_posInNucY", mc_er_posInNucY, &b_mc_er_posInNucY);
   fChain->SetBranchAddress("mc_er_posInNucZ", mc_er_posInNucZ, &b_mc_er_posInNucZ);
   fChain->SetBranchAddress("mc_er_Px", mc_er_Px, &b_mc_er_Px);
   fChain->SetBranchAddress("mc_er_Py", mc_er_Py, &b_mc_er_Py);
   fChain->SetBranchAddress("mc_er_Pz", mc_er_Pz, &b_mc_er_Pz);
   fChain->SetBranchAddress("mc_er_E", mc_er_E, &b_mc_er_E);
   fChain->SetBranchAddress("mc_er_FD", mc_er_FD, &b_mc_er_FD);
   fChain->SetBranchAddress("mc_er_LD", mc_er_LD, &b_mc_er_LD);
   fChain->SetBranchAddress("mc_er_mother", mc_er_mother, &b_mc_er_mother);
   fChain->SetBranchAddress("mc_fr_nNuAncestorIDs", &mc_fr_nNuAncestorIDs, &b_mc_fr_nNuAncestorIDs);
   fChain->SetBranchAddress("mc_fr_nuAncestorIDs", mc_fr_nuAncestorIDs, &b_mc_fr_nuAncestorIDs);
   fChain->SetBranchAddress("mc_fr_nuParentID", &mc_fr_nuParentID, &b_mc_fr_nuParentID);
   fChain->SetBranchAddress("mc_fr_decMode", &mc_fr_decMode, &b_mc_fr_decMode);
   fChain->SetBranchAddress("mc_fr_primProtonVtx", mc_fr_primProtonVtx, &b_mc_fr_primProtonVtx);
   fChain->SetBranchAddress("mc_fr_primProtonP", mc_fr_primProtonP, &b_mc_fr_primProtonP);
   fChain->SetBranchAddress("mc_fr_nuParentDecVtx", mc_fr_nuParentDecVtx, &b_mc_fr_nuParentDecVtx);
   fChain->SetBranchAddress("mc_fr_nuParentProdVtx", mc_fr_nuParentProdVtx, &b_mc_fr_nuParentProdVtx);
   fChain->SetBranchAddress("mc_fr_nuParentProdP", mc_fr_nuParentProdP, &b_mc_fr_nuParentProdP);
   fChain->SetBranchAddress("mc_cvweight_total", &mc_cvweight_total, &b_mc_cvweight_total);
   fChain->SetBranchAddress("wgt", &wgt, &b_wgt);
   fChain->SetBranchAddress("mc_cvweight_totalFlux", &mc_cvweight_totalFlux, &b_mc_cvweight_totalFlux);
   fChain->SetBranchAddress("mc_cvweight_totalXsec", &mc_cvweight_totalXsec, &b_mc_cvweight_totalXsec);
   fChain->SetBranchAddress("mc_ppfx1_cvweight", &mc_ppfx1_cvweight, &b_mc_ppfx1_cvweight);
   fChain->SetBranchAddress("mc_hornCurrent_cvweight", &mc_hornCurrent_cvweight, &b_mc_hornCurrent_cvweight);
   fChain->SetBranchAddress("mc_gen1_cvweight_total", &mc_gen1_cvweight_total, &b_mc_gen1_cvweight_total);
   fChain->SetBranchAddress("gen1_wgt", &gen1_wgt, &b_gen1_wgt);
   fChain->SetBranchAddress("mc_gen1_cvweight_totalFlux", &mc_gen1_cvweight_totalFlux, &b_mc_gen1_cvweight_totalFlux);
   fChain->SetBranchAddress("mc_gen1_cvweight_NA49", &mc_gen1_cvweight_NA49, &b_mc_gen1_cvweight_NA49);
   fChain->SetBranchAddress("mc_wgt_Flux_BeamFocus_sz", &mc_wgt_Flux_BeamFocus_sz, &b_mc_wgt_Flux_BeamFocus_sz);
   fChain->SetBranchAddress("mc_wgt_Flux_BeamFocus", mc_wgt_Flux_BeamFocus, &b_mc_wgt_Flux_BeamFocus);
   fChain->SetBranchAddress("mc_wgt_gen1_Flux_Tertiary_sz", &mc_wgt_gen1_Flux_Tertiary_sz, &b_mc_wgt_gen1_Flux_Tertiary_sz);
   fChain->SetBranchAddress("mc_wgt_gen1_Flux_Tertiary", mc_wgt_gen1_Flux_Tertiary, &b_mc_wgt_gen1_Flux_Tertiary);
   fChain->SetBranchAddress("mc_wgt_gen1_Flux_NA49_sz", &mc_wgt_gen1_Flux_NA49_sz, &b_mc_wgt_gen1_Flux_NA49_sz);
   fChain->SetBranchAddress("mc_wgt_gen1_Flux_NA49", mc_wgt_gen1_Flux_NA49, &b_mc_wgt_gen1_Flux_NA49);
   fChain->SetBranchAddress("mc_wgt_Norm_sz", &mc_wgt_Norm_sz, &b_mc_wgt_Norm_sz);
   fChain->SetBranchAddress("mc_wgt_Norm", &mc_wgt_Norm, &b_mc_wgt_Norm);
   fChain->SetBranchAddress("mc_wgt_ppfx1_Total_sz", &mc_wgt_ppfx1_Total_sz, &b_mc_wgt_ppfx1_Total_sz);
   fChain->SetBranchAddress("mc_wgt_ppfx1_Total", mc_wgt_ppfx1_Total, &b_mc_wgt_ppfx1_Total);
   fChain->SetBranchAddress("mc_vertex_batch", &mc_vertex_batch, &b_mc_vertex_batch);
   fChain->SetBranchAddress("prong_part_score", prong_part_score, &b_prong_part_score);
   fChain->SetBranchAddress("prong_part_mass", prong_part_mass, &b_prong_part_mass);
   fChain->SetBranchAddress("prong_part_charge", prong_part_charge, &b_prong_part_charge);
   fChain->SetBranchAddress("prong_part_pid", prong_part_pid, &b_prong_part_pid);
   fChain->SetBranchAddress("prong_part_E", &prong_part_E, &b_prong_part_E);
   fChain->SetBranchAddress("prong_part_pos", &prong_part_pos, &b_prong_part_pos);
   Notify();
}

Bool_t RECOTRACKS_ANA::MasterAnaDev::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}
void RECOTRACKS_ANA::MasterAnaDev::Show(Long64_t entry)
{
    // Print contents of entry.
    // If entry is not specified, print current entry
    if (!fChain) return;
    fChain->Show(entry);
}
Int_t RECOTRACKS_ANA::MasterAnaDev::Cut(Long64_t entry)
{
        // This function may be called from Loop.
        // returns  1 if entry is accepted.
        // returns -1 otherwise.
	return 1;
}
#endif // #ifdef MasterAnaDev_cxx
