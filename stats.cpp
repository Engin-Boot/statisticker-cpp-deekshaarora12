#include "stats.h"
#include <bits/stdc++.h> 
using namespace Statistics; 


 declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    Statistics::declareStats ds;
    float sum = 0.0;
    int n = mystats.size();
	
   auto max_ele = *max_element(std::begin(mystats), std::end(mystats));
   auto min_ele = *min_element(std::begin(mystats), std::end(mystats));
   auto  avg = accumulate(std::begin(mystats), std::end(mystats),sum) / n; 
    for(auto& it : mystats){
	   sum = sum + it;
}
    
f(mystats.size()!=0){
    ds.max = max_ele;
    ds.min = min_ele;
    ds.average = avg;
}
	 
    return ds;
}
