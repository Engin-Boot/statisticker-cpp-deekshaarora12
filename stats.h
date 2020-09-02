#include <vector>

namespace Statistics {
    struct computedStats{
       float average;
       float max;
       float min;
    };
    Stats ComputeStatistics(const std::vector<float>& );
}
