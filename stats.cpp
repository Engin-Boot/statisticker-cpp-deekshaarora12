#include "stats.h"
#include <bits/stdc++.h> 
using namespace Statistics; 

struct invalidstruct{
	NaN;
	NaN;
	NaN;	
}; struct invalidstruct is;

 declareStats Statistics::ComputeStatistics(const std::vector<float> &mystats) {
   if(mystats.size()==0){
           return is;
   }
    Statistics::declareStats ds;
    int n = mystats.size();
	
   auto max_ele = *max_element(std::begin(mystats), std::end(mystats));
   auto min_ele = *min_element(std::begin(mystats), std::end(mystats));
   auto  avg = accumulate(std::begin(mystats), std::end(mystats), 0.0) / n; 
	
    ds.max = max_ele;
    ds.min = min_ele;
    ds.average= avg;
    return ds;
}
