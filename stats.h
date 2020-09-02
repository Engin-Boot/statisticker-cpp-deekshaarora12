#include <vector>

namespace Statistics {
    struct declareStats{
       float average;
       float max;
       float min;
    }; 
   declareStats ds;
   ds ComputeStatistics(const std::vector<float> &mystats);
}
