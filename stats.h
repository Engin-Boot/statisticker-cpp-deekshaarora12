#include <vector>
#include <bits/stdc++.h> 
#include<numeric>

struct declareStats{
    float average;
    float max;
    float min;
       declareStats(){
          average = std::numeric_limits<float>::quiet_NaN();
          max     = std::numeric_limits<float>::quiet_NaN();
          min     = std::numeric_limits<float>::quiet_NaN();
       }
};
namespace Statistics {
   extern struct declareStats ds;
   struct declareStats ComputeStatistics(const std::vector<float>& );
}
