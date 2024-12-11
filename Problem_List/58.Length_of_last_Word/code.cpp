#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int pointer = s.size() -1;

        while(pointer >= 0 && s[pointer] == ' '){
            pointer--;
        }

        while(pointer >= 0 && s[pointer] != ' '){
            length++;
            pointer--;
        }

        return length;
    }
};