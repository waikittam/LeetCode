#include <stack>
using namespace std;;

class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                str.push(c);
            }else{
                if(str.empty())
                    return false;
                    
                if(c == ')'){
                    if(str.top() == '(')
                        str.pop();
                    else
                        return false;
                }
                else if(c == '}'){
                    if(str.top() == '{')
                        str.pop();
                    else
                        return false;
                }
                else if(c == ']')
                    if(str.top() == '[')
                        str.pop();
                    else
                        return false;
            }
        }
        if (str.empty())
            return true;
        else
            return false;
    }
};