#include "stats.h"

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    int sum = mystats[0];
	
    std::sort(mystats.begin(), mystats.end()); 
    
    for(int i = 0; i < n; i++){
        sum = sum + mystats[i];
    }
    ds.max = mystats[n-1];
    ds.min = mystats[0];
    ds.average= sum/n;
    return ds;
}
