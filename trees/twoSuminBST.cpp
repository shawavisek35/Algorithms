//Brute force method
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
    
    bool findTargetUtil(TreeNode *root, int k, unordered_map<int,int> &um) {
        if(!root) return false;
        if(um.find(k - root->val) != um.end()) return true;
        um[root->val] = 1;
        return findTargetUtil(root->left, k, um) || findTargetUtil(root->right, k, um);
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int, int> um;
        return findTargetUtil(root, k, um);
        
    }
};

//Efficient method
/*
  use the concept of BST iterator with next and before property
*/
