#include<vector>
using namespace std;;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for(auto right = 0; right < nums.size(); right++){
            if(nums[right] != 0){
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};