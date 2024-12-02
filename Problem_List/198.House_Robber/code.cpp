#include<vector>
using namespace std;;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        int prev1 = 0;
        int prev2 = 0;

        for(int num : nums){
            int current = max(prev1, prev2 + num);
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;


    }
};