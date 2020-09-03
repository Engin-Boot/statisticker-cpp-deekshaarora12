#include <vector>

struct declareStats{
       float average;
       float max;
       float min;
    };  
declareStats ds;

namespace Statistics {
   declareStats ComputeStatistics(const std::vector<float>&);
}
