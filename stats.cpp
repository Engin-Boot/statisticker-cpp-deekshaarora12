#include "stats.h"

declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
    struct invalidstruct{
	Nan;
	Nan;
	Nan;    
    }; invalidstruct is;
	if(is == ds)
	{
	   return is;
	}
    int n = mystats.size();
    float sum = mystats[0];
    float max = mystats[0];
    float min = mystats[0];
	
    for(int i = 1; i < n; i++){
        sum = sum + mystats[i];
	    if(mystats[i] > max){
		    max = mystats[i];
	    }
 }
	
    for(int j=1; j<n; j++){
	    if(mystats[j] < min){
              min = mystats[j];
	    }
}
    ds.max = mystats[n-1];
    ds.min = mystats[0];
    ds.average= sum/n;
    return ds;
}
