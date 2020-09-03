#include "stats.h"
#include <bits/stdc++.h> 

ds Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    float sum = mystats[0];
	
   auto max_ele = *max_element(std::begin(mystats), std::end(mystats));
   auto min_ele = *min_element(std::begin(mystats), std::end(mystats));
	
    for(int i = 1; i < n; i++){
        sum = sum + mystats[i];
 }
    ds.max = max_ele;
    ds.min = min_ele;
    ds.average= sum/n;
    return ds;
}
