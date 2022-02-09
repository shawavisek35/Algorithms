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
    
    TreeNode *insert(TreeNode *root, int val) {
        if(!root) return new TreeNode(val);
        if(val > root->val) {
            if(!root->right) root->right = insert(root->right, val);
            else insert(root->right, val);
        }
        else{
            if(!root->left) root->left = insert(root->left, val);
            else insert(root->left, val);
        }
        return root;
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root, val);
    }
};