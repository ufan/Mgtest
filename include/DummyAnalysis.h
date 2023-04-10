/** MegatAnalyzer module: Mgtest
 *
 * \file DummyAnalysis.h
 *
 * Description:
 *   [...]
 */

#ifndef Mgtest_DummyAnalysis_h
#define Mgtest_DummyAnalysis_h

#include "ROOT/RVec.hxx"
#include "edm4hep/TrackerHitData.h"

namespace Mgtest {
  namespace rv = ROOT::VecOps;

  void            dummy_analysis();
  rv::RVec<float> dummy_collection( const rv::RVec<edm4hep::TrackerHitData>& );
} // namespace Mgtest

#endif
