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
    
    bool isMirror(TreeNode *left, TreeNode *right) {
        if(!left || !right) return left==right;
        bool ans1 = isMirror(left->left, right->right);
        bool ans2 = isMirror(left->right, right->left);
        bool ans3 = left->val == right->val;
        return ans1 && ans2 && ans3;
    }
    
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};