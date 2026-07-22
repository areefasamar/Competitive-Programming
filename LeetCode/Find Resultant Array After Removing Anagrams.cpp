#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        result.push_back(words[0]);
        
        for (size_t i = 1; i < words.size(); ++i) {
            string prev = words[i - 1];
            string curr = words[i];
            
            sort(prev.begin(), prev.end());
            sort(curr.begin(), curr.end());
            
            // Only keep the word if it's NOT an anagram of the previous word
            if (prev != curr) {
                result.push_back(words[i]);
            }
        }
        
        return result;
    }
};
