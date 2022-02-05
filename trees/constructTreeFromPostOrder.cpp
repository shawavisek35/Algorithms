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
    
    TreeNode *createTree(vector<int> &postorder, int postStart, int postEnd, vector<int> &inorder, int inStart, int inEnd, map<int,int> inMap) {
        if(postStart > postEnd || inStart > inEnd) return NULL;
        TreeNode *root = new TreeNode(postorder[postEnd]);
        int inPos = inMap[root->val];
        int numElements = inPos - inStart;
        root->left = createTree(postorder, postStart, postStart + numElements-1, inorder, inStart, inPos-1, inMap);
        root->right = createTree(postorder, postStart + numElements, postEnd-1, inorder, inPos + 1, inEnd, inMap);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        map<int,int> inMap;
        for(int i=0;i<n;i++) {
            inMap[inorder[i]] = i;
        }
        TreeNode *root = createTree(postorder, 0, n-1, inorder, 0, n-1, inMap);
        return root;
    }
};