#include<vector>
using namespace std;;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int index = 0;

        for(int j = 1; j < nums.size(); j++){
            if(nums[index] != nums[j]){
                index++;
                nums[index] = nums[j];
            }
        }

        return index + 1;
    }
};