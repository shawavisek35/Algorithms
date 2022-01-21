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
    
    int findDiameter(TreeNode *root, int &ans) {
        if(!root) return 0;
        int hl = findDiameter(root->left, ans);
        int hr = findDiameter(root->right, ans);
        
        ans = max(ans, hl + hr);
        return max(hl, hr) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = INT_MIN;
        findDiameter(root, ans);
        return ans;
    }
};