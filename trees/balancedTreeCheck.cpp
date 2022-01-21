/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int calculateHeight(TreeNode *root, bool &ans) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        int hl = calculateHeight(root->left, ans);
        int hr = calculateHeight(root->right, ans);
        if(abs(hl-hr) > 1) ans = false;
        return max(hl, hr) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool ans = true;
        calculateHeight(root, ans);
        return ans;
    }
};