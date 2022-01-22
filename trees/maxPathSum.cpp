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
    
    int findSum(TreeNode *root, int &ans) {
        if(!root) return 0;
        
        int lSum = max(0, findSum(root->left, ans));
        int rSum = max(0, findSum(root->right, ans));
        
        ans = max(ans, lSum + rSum + root->val);
        return root->val + max(lSum, rSum);
    }
    
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        findSum(root, ans);
        return ans;
    }
};