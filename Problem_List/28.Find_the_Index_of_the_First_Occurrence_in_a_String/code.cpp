#include<string>
using namespace std;;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();

        if(n == 0) return -1;

        for(int i = 0; m >= n + i; i++){
            bool isMatch = true;

            for(int j = 0; j < n; j++){
                if(needle[j] != haystack[i + j]){
                    isMatch = false;
                    break;
                }
            }
            if(isMatch){
                return i;
            }
        }

        return -1;
    }
};