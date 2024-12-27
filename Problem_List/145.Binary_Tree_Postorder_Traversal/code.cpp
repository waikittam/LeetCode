#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root == nullptr) return result;

        stack<TreeNode*> stk1;
        stack<TreeNode*> stk2;

        stk1.push(root);

        while(!stk1.empty()){
            TreeNode* node = stk1.top();
            stk2.push(node);
            stk1.pop();

            if(node->left != nullptr){
                stk1.push(node->left);
            }
            if(node->right != nullptr){
                stk1.push(node->right);
            }
        }

        while(!stk2.empty()){
            result.push_back(stk2.top()->val);
            stk2.pop();
        }

        return result;
    }
};