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
    vector<int> postorderTraversal(TreeNode* root) {
        //Iterative approach with 1 stack
        stack<TreeNode *> st;
        TreeNode *curr = root;
        vector<int> ans;
        while(curr || !st.empty()) {
            if(curr) {
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode *temp = st.top()->right;
                if(temp == NULL) {
                    temp = st.top();
                    ans.push_back(temp->val);
                    st.pop();
                    while(!st.empty() && temp == st.top()->right) {
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                }
                else {
                    curr = temp;
                }
            }
        }
        return ans;
    }
};