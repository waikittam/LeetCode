#include<vector>
using namespace std;;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[index] = nums[j];
                index++;
            }
        }
        
        return index;
    }
};