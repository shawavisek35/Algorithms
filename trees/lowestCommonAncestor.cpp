/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode * traverse(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *ans) {
        if(!root) return NULL;
        if(root == p || root == q) {
            return root;
        }
        TreeNode *temp1 = traverse(root->left, p, q, ans);
        TreeNode *temp2 = traverse(root->right, p, q, ans);
        if(!temp1) return temp2;
        else if(!temp2) return temp1;
        else return root;

    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ans;
        return traverse(root, p, q, ans);
    }
};