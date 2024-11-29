#include<String>
#include<climits>
using namespace std;;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int n = s.length();
        int ans = 0;
        int pos = 0;

        while(pos < n && s[pos] == ' ' ){
            pos++;
        }

        if(pos < n && (s[pos] == '-' || s[pos] == '+')){
            s[pos] == '-' ? sign = -1 : sign = 1;
            pos++;
        }

        while(pos < n && isdigit(s[pos])){
            int digit = s[pos] - '0';

            if (ans > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            pos++;
        }

        return static_cast<int> (ans * sign);
    }
};