#include "stats.h"

declareStats ds2;

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    int sum = mystats[0];
	
    sort(mystats.begin(), mystats.end()); 
    
    for(int i = 0; i < n; i++){
        sum = sum + mystats[i];
    }
    ds2.max = mystats[n-1];
    ds2.min = mystats[0];
    ds2.average= sum/n;
    return ds2;
}
