#include<string>
#include<vector>
#include<unordered_map>
using namespace std;;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> root;

        for(auto& str : strs){
            string x = str;
            sort(x.begin(), x.end());
            root[x].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto& x:root){
            ans.push_back(x.second);
        }

        return ans;
    }
};