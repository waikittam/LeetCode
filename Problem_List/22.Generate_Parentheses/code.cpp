#include<vector>
using namespace std;;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open = 0, close = 0;
        vector<string>ans;

        generator(ans, "", open, close, n);
        return ans;
    }

    void generator(vector<string> &ans, string current, int open, int close, int n){
        if((open + close) == n*2){
            ans.push_back(current);
            return;
        }

        if(open < n){
            generator(ans, current + '(', open + 1, close, n);
        }

        if(close < open){
            generator(ans, current + ')', open, close + 1, n);
        }
    }

};