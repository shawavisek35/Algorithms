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
    
    TreeNode *findRight(TreeNode *root) {
        if(!root->right) return root;
        return findRight(root->right);
    }
    
    TreeNode *helperDelete(TreeNode *root) {
        if(!root->left) return root->right;
        if(!root->right) return root->left;
        TreeNode *temp = root->right;
        TreeNode *extremeRight = findRight(root->left);
        extremeRight->right = temp;;
        return root->left;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val == key) return helperDelete(root);
        TreeNode *curr = root;
        while(curr) {
            if(curr->val > key) {
                if(curr->left && key==curr->left->val) {
                    curr->left = helperDelete(curr->left);
                    break;
                }
                else{
                    curr = curr->left;
                }
            }
            else {
                if(curr->right && key==curr->right->val) {
                    curr->right = helperDelete(curr->right);
                    break;
                }
                else{
                    curr = curr->right;
                }
            }
        }
        return root;
    }
};