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
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if((!p && q) || (p && !q)) return false;
        bool ans = false;
        if(p->val == q->val) ans = true;
        
        bool res = isSameTree(p->left, q->left);
        bool res1 = isSameTree(p->right, q->right);
        
        return ans && res && res1;
    }
};