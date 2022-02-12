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
    
    TreeNode *constructBST(vector<int> &preorder, int &i, int bound) {
        //base case
        if(i==preorder.size() || preorder[i] > bound) return NULL;
        TreeNode *root = new TreeNode(preorder[i++]);
        root->left = constructBST(preorder, i, root->val);
        root->right = constructBST(preorder, i, bound);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return constructBST(preorder, i, INT_MAX);
    }
};
