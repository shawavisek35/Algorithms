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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        q.push(root);
        if(!root) return ans;
        int i = 1;
        while(!q.empty()) {
            int size = q.size();
            vector<int> res;
            for(int i=0;i<size;i++) {
                TreeNode *temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(i%2 == 0) reverse(res.begin(), res.end());
            ans.push_back(res);
            i++;
        }
        
        return ans;
    }
};