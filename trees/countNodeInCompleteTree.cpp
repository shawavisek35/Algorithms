//1st method
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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        TreeNode *ans = NULL;
        int res = 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();
            if(!temp->left && !temp->right) break;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            ans = temp;
            res++;
        }
        if(ans->right) return res*2+1;;
        return res*2;
    }
};

//2nd Method
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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int lh = calculateLeftHeight(root);
        int rh = calculateRightHeight(root);
        if(lh == rh) return pow(2, lh) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    int calculateLeftHeight(TreeNode *root) {
        queue<TreeNode *> q;
        int ans = 0;
        q.push(root);
        while(!q.empty()) {
            ans ++;
            TreeNode *temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
        }
        return ans;
    }
    int calculateRightHeight(TreeNode *root) {
        queue<TreeNode *> q;
        int ans = 0;
        q.push(root);
        while(!q.empty()) {
            ans ++;
            TreeNode *temp = q.front();
            q.pop();
            if(temp->right) q.push(temp->right);
        }
        return ans;
    }
};