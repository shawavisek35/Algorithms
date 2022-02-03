/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

unordered_map<TreeNode *, TreeNode *> ParentPointer(TreeNode *root) {
    unordered_map<TreeNode *, TreeNode *> pp;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode *temp = q.front();
        q.pop();
        if(temp->left) {
            q.push(temp->left);
            pp[temp->left] = temp;
        }
        if(temp->right) {
            q.push(temp->right);
            pp[temp->right] = temp;
        }
    }
    return pp;
}

int Solution::solve(TreeNode* A, int B) {
    //creating a parent ParentPointer
    unordered_map<TreeNode *, TreeNode *> pp = ParentPointer(A);
    TreeNode *target = NULL;
    queue<TreeNode *> q;
    q.push(A);
    while(!q.empty()) {
        TreeNode *temp = q.front();
        q.pop();
        if(temp->val == B) {
            target = temp;
            break;
        }
        if(temp->left) {
            q.push(temp->left);
        }
        if(temp->right) {
            q.push(temp->right);
        }
    }
    if(!target) return 0;
    unordered_map<TreeNode *, bool> visited;
    queue<TreeNode *> pq;
    pq.push(target);
    visited[target] = true;
    int ans = 0;
    while(!pq.empty()) {
        
        bool flag = false;
        int n = pq.size();
        for(int i=0;i<n;i++) {
            TreeNode *temp = pq.front();
            pq.pop();
            if(temp->left && visited.find(temp->left) == visited.end()) {
                visited[temp->left] = true;
                flag = true;
                pq.push(temp->left);
            }
            if(temp->right && visited.find(temp->right) == visited.end()) {
                visited[temp->right] = true;
                pq.push(temp->right);
                flag = true;
            }
            if(pp[temp] && visited.find(pp[temp]) == visited.end()) {
                pq.push(pp[temp]);
                visited[pp[temp]] = true;
                flag = true;
            }
        }
        if(flag) ans ++;
    }
    return ans;
}
