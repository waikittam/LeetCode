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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;

        stack<TreeNode*> stack;
        stack.push(root->left);
        stack.push(root->right);

        while(!stack.empty()){
            TreeNode* right = stack.top();
            stack.pop();
            TreeNode* left = stack.top();
            stack.pop();

            if(left == nullptr && right == nullptr)
                continue;

            if(left == nullptr || right == nullptr)
                return false;

            if(left->val != right ->val)
                return false;

            stack.push(left->left);
            stack.push(right->right);
            stack.push(left->right);
            stack.push(right->left);
        }

        return true;
    }
};