#include<vector>
using namespace std;;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x, y;

        while(stones.size() > 1){
            auto it1 = max_element(stones.begin(), stones.end());
            x = *it1;
            stones.erase(it1);

            auto it2 = max_element(stones.begin(), stones.end());
            y = *it2;
            stones.erase(it2);

            if(x != y)
                stones.push_back(abs(x - y));
        }

        return stones.empty() ? 0 : stones[0];
    }
};