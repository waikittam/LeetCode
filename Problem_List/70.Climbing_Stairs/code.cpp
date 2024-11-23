#include <vector>
using namespace std;;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> step(n+2);
        step[1] = 1;
        step[2] = 2;

        if(n >2){
            for(int i = 3; i <= n; i++){
                step[i] = step[i - 1] + step[i - 2];
            }
        }

        return step[n];
    }
};