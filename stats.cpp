#include "stats.h"

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    int n = mystats.size();
    float sum = mystats[0];
    float max = mystats[0];
    float min = mystats[0];
	
    for(int i = 1; i < n; i++){
        sum = sum + mystats[i];
	    if(mystats[i] > max){
		    max = mystats[i];
	    }
	    if(mystats[i] < min){
		    min = mystats[i];
	    }
    }
    ds.max = mystats[n-1];
    ds.min = mystats[0];
    ds.average= sum/n;
    return ds;
}
