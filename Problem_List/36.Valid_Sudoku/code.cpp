#include<vector>
#include<unordered_set>
using namespace std;;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);
        char c;
        int boxInd;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                c = board[i][j];
                
                if(c == '.') continue;
                boxInd = (i/3) * 3 + j/3;

                if(row[i].count(c) || col[j].count(c) || box[boxInd].count(c)){
                    return false;
                }

                row[i].insert(c);
                col[j].insert(c);
                box[boxInd].insert(c);
            }
        }
        return true;
    }
};