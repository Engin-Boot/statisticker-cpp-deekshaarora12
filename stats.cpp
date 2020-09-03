#include "stats.h"
#include <bits/stdc++.h> 

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    float sum = mystats[0];
	
   auto max_element = max_element(std::begin(mystats), std::end(mystats));
   auto min_element = min_element(std::begin(mystats), std::end(mystats));
	
    for(int i = 1; i < n; i++){
        sum = sum + mystats[i];
 }
    ds.max = max_element;
    ds.min = min_element;
    ds.average= sum/n;
    return ds;
}
