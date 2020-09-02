#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float> &mystats ) {
    struct computedStats cs;
    int n = mystats.size();
    int sum = mystats[0];
    
    for(int i=1; i<n; i++){
        sum=sum+mystats[i];
        for (j = 0; j < (n - 1); j++)
		{
			if (mystats[j + 1] < mystats[j])				
			{
				temp = mystats[j];								
				mystats[j] = mystats[j + 1];
				mystats[j + 1] = temp;
			}
		}
    }
    cs.max = mystats[n-1];
    cs.min = mystats[0];
    cs.average= sum/n;
    return cs;
}
