#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize) {
       
        std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] > b[1];
        });
        
        int totalUnits = 0;
        
        for (const auto& box : boxTypes) {
            int numBoxes = box[0];
            int unitsPerBox = box[1];
            
           
            int take = std::min(numBoxes, truckSize);
            totalUnits += take * unitsPerBox;
            truckSize -= take;
            
          
            if (truckSize == 0) break;
        }
        
        return totalUnits;
    }
};
