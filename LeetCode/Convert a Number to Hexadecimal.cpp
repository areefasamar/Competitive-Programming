#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string toHex(int num) {
      
        if (num == 0) return "0";
        
        string hexChars = "0123456789abcdef";
        string result = "";
        
        
        unsigned int val = num;
        
        while (val > 0) {
            int digit = val & 0xF;    
            result += hexChars[digit];
            val >>= 4;                
        }
        
        
        reverse(result.begin(), result.end());
        return result;
    }
};
