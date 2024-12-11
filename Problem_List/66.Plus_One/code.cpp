#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int pointer = digits.size() - 1;

        for(pointer; pointer >=0; pointer--){
            if(digits[pointer] < 9){
                digits[pointer]++;
                return digits;
            }
            digits[pointer] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};