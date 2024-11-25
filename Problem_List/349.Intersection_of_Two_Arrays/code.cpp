#include<unordered_set>;
#include<vector>;
using namespace std;;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        unordered_set<int> temp;

        for(int x : nums2){
            if(set.count(x)){
                temp.insert(x);
            }
        }

        return vector<int>(temp.begin(), temp.end());
    }
};