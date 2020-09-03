#include <vector>
#include <bits/stdc++.h> 
#include<numeric>

namespace Statistics {
       
 struct declareStats{
    float average;
    float max;
    float min;
       declareStats(){
          average = numeric_limits<float>::quiet_NaN();
          max = numeric_limits<float>::quiet_NaN();
          min = numeric_limits<float>::quiet_NaN();
       }
};  
   extern struct declareStats ds;
   declareStats ComputeStatistics(const std::vector<float> &mystats);
}
