#ifndef ENHNUKECC_H
#define ENHNUKECC_H 1

#include "NukeCC.h"
#include <vector>
#include <string>

// "Enhanced" NukeCC ...
//
// Add helper methods here so we can re-create the NukeCC.h with MakeClass
// at any time.

namespace RECOTRACKS_ANA {


  class EnhNukeCC : public NukeCC {

    public:
      EnhNukeCC(TTree *t) :
        NukeCC(t), m_numberOfBuckets(127),
        m_mostDownstreamModuleInLattice(104),
        m_viewMask(0), m_viewShiftBits(0),
        m_planeMask(0), m_planeShiftBits(0),
        m_moduleMask(0), m_moduleShiftBits(0),
        m_bucketMask(0), m_bucketShiftBits(0) {
          setBitMasksAndShifts();
        };

      virtual ~EnhNukeCC() {};

      std::string latticePositionIntoString(unsigned int latticepos) const;
      void setNumberOfBuckets(unsigned int numberOfBuckets);
      unsigned int getNumberOfBuckets() const;

      unsigned int getModuleFromLatticePos(unsigned int latticepos) const;
      unsigned int getPlaneFromLatticePos(unsigned int latticepos) const;
      unsigned int getViewFromLatticePos(unsigned int latticepos) const;
      std::string getStringViewFromLatticePos(unsigned int latticepos) const;
      unsigned int getBucketFromLatticePos(unsigned int latticepos) const;

      unsigned int getLatticeIndexForCoords(unsigned int bucket,
          unsigned int module, unsigned int plane, unsigned int view) const;

      unsigned int getLatticeSize() const;

    private:

      void setBitMasksAndShifts();

      unsigned int m_numberOfBuckets;
      unsigned int m_mostDownstreamModuleInLattice;

      unsigned int m_viewMask;
      unsigned int m_viewShiftBits;

      unsigned int m_planeMask;
      unsigned int m_planeShiftBits;

      unsigned int m_moduleMask;
      unsigned int m_moduleShiftBits;

      unsigned int m_bucketMask;
      unsigned int m_bucketShiftBits;

  };

} // end namespace


#endif  // ENHNUKECC_H
