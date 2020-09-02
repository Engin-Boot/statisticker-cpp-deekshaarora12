#include <vector>

namespace Statistics {
    struct computedStats{
       float average;
       float max;
       float min;
    }; 
   struct computedStats cs;
   cs ComputeStatistics(const std::vector<float> &mystats);
}
