#include<vector>
using namespace std;;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, left, right, sum;
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(i = 0; i < nums.size() - 2; i++){
            if(i > 0 && (nums[i] == nums[i - 1])) continue;

            left = i + 1;
            right = nums.size() - 1;

            while(left < right){
                sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    result.push_back({nums[i], nums[left], nums[right]});

                    while((left < right) && (nums[left] == nums[left + 1])) left++;
                    while((left < right) && (nums[right] == nums[right - 1])) right--;

                    left++;
                    right--;
                }else if(sum < 0){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return result;
    }
};