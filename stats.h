#include <vector>
#include<math.h>

namespace Statistics {
       
 struct declareStats{
    float average = Nan;
    float max = NaN;
    float min = NaN;
};  
   extern struct declareStats ds;
   declareStats ComputeStatistics(const std::vector<float> &mystats);
}
