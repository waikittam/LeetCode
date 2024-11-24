#include<unordered_map>
#include<vector>
using namespace std;;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;

        for(auto a:nums){
            map[a]++;
        }
        for(auto b:map){
            if(b.second > nums.size()/2)
                return b.first;
        }

        return NULL;
    }
};