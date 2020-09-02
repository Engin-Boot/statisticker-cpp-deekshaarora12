#include <vector>

namespace Statistics {
    struct computedStats{
       float average;
       float max;
       float min;
    }; 
   computedStats ComputeStatistics(const std::vector<float> &mystats);
}
