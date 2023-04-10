/** MegatAnalyzer module: Mgtest
 *
 * \file DummyAnalysis.cc
 */

#include "DummyAnalysis.h"
#include <fmt/core.h>

namespace Mgtest {
  void dummy_analysis() { fmt::print( "Dummy analysis initialised." ); }

  rv::RVec<float> dummy_collection( const rv::RVec<edm4hep::TrackerHitData>& hits ) {
    rv::RVec<float> output;
    for ( size_t i = 0; i < hits.size(); ++i ) output.emplace_back( hits.at( i ).position.x );
    return output;
  }
} // namespace Mgtest
