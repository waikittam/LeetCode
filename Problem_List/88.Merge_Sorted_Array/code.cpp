#include<vector>
using namespace std;;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mRight = m - 1;
        int nRight = n - 1;
        int right = m + n - 1;

        while(nRight >= 0){
            if(mRight >=0 && nums1[mRight] >= nums2[nRight]){
                nums1[right] = nums1[mRight];
                mRight -= 1;
            }else{
                nums1[right] = nums2[nRight];
                nRight -=1;
            }
            right -= 1;
        }
    }
};