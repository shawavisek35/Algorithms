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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode *> st;
        if(!root) return ans;
        TreeNode *curr = root;
        while(true) {
            if(curr) {
                st.push(curr);
                curr = curr->left;
            }
            else{
                if(st.empty()) break;
                TreeNode *temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                curr = temp->right;
            }
        }
        return ans;
    }
};