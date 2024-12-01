using namespace std;;

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
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }

    bool validate(TreeNode* node, TreeNode* lower, TreeNode* upper){
        if(!node) return true;

        if((lower && node->val <= lower->val) || (upper && node->val >= upper->val))
            return false;
        
        return validate(node->left, lower, node) && validate(node->right, node, upper);
    }
};