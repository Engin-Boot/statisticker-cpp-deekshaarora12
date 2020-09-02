#include <vector>

namespace Statistics {
    struct declareStats{
       float average;
       float max;
       float min;
    }; 
   declareStats ComputeStatistics(const std::vector<float> &mystats);
}
