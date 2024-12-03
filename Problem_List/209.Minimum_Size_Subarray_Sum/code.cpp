#include<vector>
using namespace std;;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = 0;
        int minLength = INT_MAX;
        int sum = 0;

        for(end = 0; end < n; end++){
            sum += nums[end];
            while(sum >= target){
                minLength = min(minLength, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }

        return minLength == INT_MAX ? 0 : minLength;
    }
};