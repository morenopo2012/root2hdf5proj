#!/bin/bash

# this is an example environment config script - users will need to update the
# `TMP_X` environment variables to point to the area where the UPS products
# were installed, and may need to comment out the vim config line. note also
# that this script is generally setting up `debug` versions of products - make
# sure this matches what you have installed, etc.

TMP_PRODUCTSROOT="/cvmfs/minerva.opensciencegrid.org/minerva/"
TMP_PRODUCTS="hep_hpc_products"
TMP_PROJECT="/minerva/app/users/$USER/cmtuser/root2hdf5proj"

echo $TMP_PROJECT


# vim config - syntastical if you've got it set up...
cp ~/.syntastic_cpp_config_root2hdf5 ~/.syntastic_cpp_config

#
# enter the "general" part of the script.
#
pushd $TMP_PRODUCTSROOT >& /dev/null
source $TMP_PRODUCTS/setup

# setups ...
#
setup catch v1_9_6
setup cmake v3_7_1
setup fftw v3_3_6_pl2 -q prof
#setup fftw v3_3_6_pl2 -q debug
setup gcc v6_3_0
setup gdb v7_12
setup h5py v2_7_0b -q e14:p2713d:prof
setup hdf5 v1_10_1a -q e14
setup hep_hpc v0_05_00 -q e14:prof
setup hep_hpc_toolkit v00_05_00 -q e14:prof
setup lapack v3_7_0 -q e14:prof
setup libxml2 v2_9_4b -q prof
#setup libxml2 v2_9_4b -q debug
setup nose v1_3_7c -q p2713d
setup numpy v1_12_1 -q e14:p2713d:prof
setup pybind11 v2_1_1
setup python v2_7_13d
setup root v6_10_04d -q e14:prof
#setup root v6_10_04d -q e14:debug
setup six v1_10_0d -q p2713d
setup sqlite v3_16_02_00a
setup tbb v2017_7 -q e14:prof
#setup tbb v2017_7 -q e14:debug
setup tensorflow v1_3_0a -q e14:p2713d:prof
setup ups v5_2_0
setup xrootd v4_5_0c -q e14:prof
#setup xrootd v4_5_0c -q e14:debug
setup valgrind v3_12_0
ups active

# update load-lib path, get an alias to jump to the project area
#
pushd $TMP_PROJECT >& /dev/null
export LD_LIBRARY_PATH=$TMP_PROJECT/lib:$LD_LIBRARY_PATH 
alias gotowork="cd `pwd`"
type gotowork

popd >& /dev/null
popd >& /dev/null
