#include "stats.h"
#include <bits/stdc++.h> 

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    float sum = mystats[0];
	
   std::sort(mystats.begin(),mystats.end());
	
    for(int i = 1; i < n; i++){
        sum = sum + mystats[i];
 }
    ds.max = mystats[n-1];
    ds.min = mystats[0];
    ds.average= sum/n;
    return ds;
}
