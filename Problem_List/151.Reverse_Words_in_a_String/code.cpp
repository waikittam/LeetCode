#include<vector>
#include<string>
#include<sstream>
using namespace std;;


class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while(ss >> word)
            words.push_back(word);

        reverse(words.begin(), words.end());

        string ans;
        for(auto &word : words){
            if(!ans.empty()){
                ans += " ";
            }
            ans += word;
        }
        return ans;
    
    }
};