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
    
    void inOrder(TreeNode *root, int k, int &ans, int &cnt) {
        if(!root) return;
        
        inOrder(root->left, k, ans, cnt);
        cnt++;
        if(cnt==k) {
            ans = root->val;
        }
        else inOrder(root->right, k, ans, cnt);
        return;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ans = INT_MAX;
        int cnt = 0;
        inOrder(root, k, ans, cnt);
        return ans==INT_MAX ? -1 : ans;
    }
};