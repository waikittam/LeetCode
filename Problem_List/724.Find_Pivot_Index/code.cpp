#include<vector>
using namespace std;;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int sum = 0;

        for(int x : nums){
            sum += x;
        }

        for(int ans = 0; ans < nums.size(); ans++){
            if (left == sum - left - nums[ans]) {
                return ans;
            }
            left += nums[ans];
        }
        return -1;
    }
};