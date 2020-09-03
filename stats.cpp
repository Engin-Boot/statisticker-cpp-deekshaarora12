#include "stats.h"
#include <bits/stdc++.h> 

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    float sum = mystats[0];
	
   auto ds.max = max_element(std::begin(mystats), std::end(mystats));
   auto ds.min = min_element(std::begin(mystats), std::end(mystats));
	
    for(int i = 1; i < n; i++){
        sum = sum + mystats[i];
 }
    ds.average= sum/n;
    return ds;
}
