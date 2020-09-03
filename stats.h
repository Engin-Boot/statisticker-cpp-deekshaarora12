#include <vector>
#include <bits/stdc++.h> 
#include<numeric>

namespace Statistics {
       
 struct declareStats{
    float average = std::numeric_limits<float>::quiet_NaN();
    float max = std::numeric_limits<float>::quiet_NaN();
    float min = std::numeric_limits<float>::quiet_NaN();
};  
   extern struct declareStats ds;
   declareStats ComputeStatistics(const std::vector<float> &mystats);
}
