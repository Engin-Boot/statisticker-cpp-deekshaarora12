#include <vector>

namespace Statistics {
       
 struct declareStats{
    float average;
    float max;
    float min;
};  
   extern declareStats ds;
   declareStats ComputeStatistics(const std::vector<float>&);
}
