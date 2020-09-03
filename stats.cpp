#include "stats.h"
#include <bits/stdc++.h> 

namespace Statistics {

 struct declareStats ComputeStatistics(const std::vector<float> &mystats) {
    struct declareStats ds;
    float sum = 0.0;
    int n = mystats.size();
	 
    if(mystats.size()!=0){ 
   auto max_ele = *max_element(std::begin(mystats), std::end(mystats));
   auto min_ele = *min_element(std::begin(mystats), std::end(mystats));
   auto avg = accumulate(std::begin(mystats), std::end(mystats),sum) / n; 
	 
    ds.max = max_ele;
    ds.min = min_ele;
    ds.average = avg;
} 
    return ds;

}
}
