#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    Stats cs;
    int n = mystats.size();
    int sum = mystats[0];
	
    sort(mystats.begin(), mystats.end()); 
    
    for(int i = 0; i < n; i++){
        sum = sum + mystats[i];
    }
    cs.max = mystats[n-1];
    cs.min = mystats[0];
    cs.average= sum/n;
    return cs;
}
