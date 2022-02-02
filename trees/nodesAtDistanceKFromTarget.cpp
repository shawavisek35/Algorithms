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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        unordered_map<TreeNode *, TreeNode *> parentPointer;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();
            if(temp->left) {
                q.push(temp->left);
                parentPointer[temp->left] = temp;
            }
            if(temp->right) {
                q.push(temp->right);
                parentPointer[temp->right] = temp;
            }
        }
        vector<bool> visited(501, false);
        queue<pair<TreeNode *,int>> pq;
        pq.push({target, 0});
        visited[target->val] = true;
        while(!pq.empty()) {
            TreeNode *temp = pq.front().first;
            int dis = pq.front().second;
            pq.pop();
            if(dis == k) {
                ans.push_back(temp->val);
            }
            if(temp->left && !visited[temp->left->val]) {
                pq.push({temp->left, dis + 1});
                visited[temp->left->val] = true;
            }
            if(temp->right && !visited[temp->right->val]) {
                pq.push({temp->right, dis + 1});
                visited[temp->right->val] = true;
            }
            if(parentPointer.find(temp) != parentPointer.end() && !visited[parentPointer[temp]->val]) {
                pq.push({parentPointer[temp], dis + 1});
                visited[parentPointer[temp]->val] = true;
            }
        }
        return ans;
    }
};