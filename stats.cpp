#include "stats.h"
#include <bits/stdc++.h> 
using namespace Statistics; 

namespace Statistics{
 declareStats ComputeStatistics(const std::vector<float> &mystats) {
   declareStats ds;
    float sum = 0.0;
    int n = mystats.size();
	 
   auto max_ele = *max_element(std::begin(mystats), std::end(mystats));
   auto min_ele = *min_element(std::begin(mystats), std::end(mystats));
   auto  avg = accumulate(std::begin(mystats), std::end(mystats),sum) / n; 
    

    ds.max = max_ele;
    ds.min = min_ele;
    ds.average = avg;
 	 
    return ds;
}
}
