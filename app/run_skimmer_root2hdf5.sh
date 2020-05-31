#!/bin/bash
STARTTIME=`date +%s`

# i > 0 to impose "NukeCC DIS cuts"
# m -> max events considered
# z -> max reco z
# f -> filebasename
# e -> first event number (default is 0)
# d -> is data
# n -> ntuple file list name
# p -> print frequency

#-------------------------------------------------------------------------------------------------------------------------
#-----------------------------------------------Parameters to Modify------------------------------------------------------
#-------------------------------------------------------------------------------------------------------------------------

DATA="mc" #Select if "mc" or "data" sample

PLAYLIST="me1A" #Select playlist to be used
SAMPLE="${PLAYLIST}${DATA}"

#PROCESSING=$YEAR$MONTH
    #USED BEFORE:     #PROCESSING="201710"# Erocia+  #PROCESSING="201801"# NX   #PROCESSING="201804" #NX w/ water-target encoded
                      #PROCESSING="201805"   # NX w/ water-target encoded antinus
PROCESSING="201911" #DSCAL

#Input file
                                          #For NukeCC
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCal2PredictNukeNukeTest119040.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCal2PredictNukeNukeEvaluate119040.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCal2TrainNuke_minerva_me1Amc119040.txt"

#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCalTrainNukezLow.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCalPredictNukezLowEvaluate.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCalPredictNukezLowTest.txt"

#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/NukeCCInclusive-zHighCorre2Train.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/NukeCCInclusive-zHighCorre2Evaluate.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/NukeCCInclusive-zHighCorre2Test.txt"

#Whole detector
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/NukeCCInclusive-WholeDetectorTrain.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/NukeCCInclusive-WholeDetectorEvaluate.txt"
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/NukeCCInclusive-WholeTest.txt"

INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/Nuketest.txt"


                                          #For MasterAnaDev
#INPFILELIST="/minerva/app/users/${USER}/cmtuser/root2hdf5proj/data/DSCal2TrainMAD_minerva_me1Amc119040.txt"

#---------------------------End Parameters to Modify---------------------------------------------------------------

#Where is going to be saved
BASEDIR="/minerva/data/users/${USER}/mlmpr/hdf5_direct/${SAMPLE}"

DATAFLAG="--${DATA}"

#SEGMENTBALANCE="--class_balance"
SEGMENTBALANCE=""

#TARGETSBALANCE="--targets_balance"
TARGETSBALANCE=""

#FILEBASENAME="mnv"
if [[ $DATA == "mc" ]]; then
    FILEBASENAME="hadmultkineimgs"
else
    FILEBASENAME="mnvimgs"
fi

#WCUTSTRING="-l -w 1000.0"
#FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_lowW_cut1000MeV

#WCUTSTRING="-h -w 1000.0"
#FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_highW_cut1000MeV

WCUTSTRING=""
FILEPATH=$BASEDIR/${FILEBASENAME}_127x104_${SAMPLE}

if [[ $SEGMENTBALANCE != "" ]]; then
   FILEPATH=${FILEPATH}"_segments_bal"
fi

if [[ $TARGETSBALANCE != "" ]]; then
   FILEPATH=${FILEPATH}"_targets_bal"
fi

# FILEPATH=${FILEPATH}"_tiny"
MAXEVENTS="-m 10000000"
#MAXEVENTS=""

#ARGS="$WCUTSTRING -f $FILEPATH -z 100000000.0 -i 0 $DATAFLAG $SEGMENTBALANCE $TARGETSBALANCE -n $INPFILELIST $MAXEVENTS"
ARGS="$WCUTSTRING -f $FILEPATH -z 100000 -i 0 $DATAFLAG $SEGMENTBALANCE $TARGETSBALANCE -n $INPFILELIST $MAXEVENTS"

# gdb -tui --args ./skimmer_root2hdf5 \
cat << EOF
time nice ./skimmer_root2hdf5 $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_root2hdf5 \
time nice ./skimmer_root2hdf5 $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
