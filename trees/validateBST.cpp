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
    
    bool validate(TreeNode *root, int lLimit, int hLimit) {
        if(!root) return true;
        if(root->val < lLimit || root->val >= hLimit) {
            return false;
        }
        
        bool left = validate(root->left, lLimit, root->val);
        bool right = validate(root->right, root->val, hLimit);
        return left && right;
        
    }
    
    bool isValidBST(TreeNode* root) {
        return validate(root, INT_MIN, INT_MAX);
        
    }
};