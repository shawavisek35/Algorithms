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
    
    void findPath(TreeNode *root, string res, vector<string> &ans) {
        if(!root) return;
        if(!root->left && !root->right) {
            res += to_string(root->val);
            ans.push_back(res);
            return;
        }
        res += to_string(root->val) + "->";
        findPath(root->left, res, ans);
        findPath(root->right, res, ans);
        return;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string res = "";
        findPath(root, res, ans);
        return ans;
    }
};