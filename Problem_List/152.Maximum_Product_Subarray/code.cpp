#include<vector>
using namespace std;;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxProduct = nums[0], minProduct = nums[0], result = nums[0];

        for(int x = 1; x < nums.size(); x++){
            int temp = maxProduct;

            maxProduct = max({nums[x], maxProduct * nums[x], minProduct * nums[x]});
            minProduct = min({nums[x], temp * nums[x], minProduct * nums[x]});

            result = max(result, maxProduct);

        }
        return result;
    }
};