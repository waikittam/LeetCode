#include<unordered_set>
#include<String>
using namespace std;;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int maxLength = 0;
        int left = 0;

        for(int x = 0; x < s.length(); x++){
            while(set.find(s[x]) != set.end()){
                set.erase(s[left]);
                left++;
            }
            set.emplace(s[x]);
            maxLength = max(maxLength, (x + 1 - left));
        }

        return maxLength;
    }
};