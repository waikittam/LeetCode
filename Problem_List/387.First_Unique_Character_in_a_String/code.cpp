#include<unordered_map>
#include<String>
using namespace std;;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;

        for(char c:s){
            map[c]++;
        }

        for(int i = 0; i < s.size(); i++){
            if(map[s[i]] == 1){
                return i;
            }
        }

        return -1;
    }
};