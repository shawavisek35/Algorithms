//Brute Force method
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
    
    void findInorder(TreeNode *root, vector<int> &ans) {
        if(!root) return;
        findInorder(root->left, ans);
        ans.push_back(root->val);
        findInorder(root->right, ans);
        return;
    }
    
    void recoverBST(TreeNode *root, vector<int> &ans, int &i) {
        if(!root || i==ans.size()) return;
        recoverBST(root->left, ans, i);
        if(ans[i] != root->val) root->val = ans[i];
        i++;
        recoverBST(root->right, ans, i);
        return;
    }
    
    void recoverTree(TreeNode* root) {
        vector<int> inorder;
        findInorder(root, inorder);
        sort(inorder.begin(), inorder.end());
        int i=0;
        recoverBST(root, inorder, i);
        return;
    }
};

//Efficient Method
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
    void recoverBST(TreeNode *root, TreeNode *&first, TreeNode *&middle, TreeNode *&last, TreeNode *&prev) {
        if(!root) return;
        recoverBST(root->left, first, middle, last, prev);
        if(prev && (root->val < prev->val)) {
            if(!first) {
                first = prev;
                middle = root;    
            }
            else {
                last = root;
            }
        }
        prev = root;
        recoverBST(root->right, first, middle, last, prev);
        return;
    }
    
    void recoverTree(TreeNode* root) {
        TreeNode *first = NULL, *middle = NULL, *last = NULL, *prev = NULL;
        recoverBST(root, first, middle, last, prev);
        if(first && last) {
            int temp = first->val;
            first->val = last->val;
            last->val = temp;
        }
        else if(first && middle){
            int temp = first->val;
            first->val = middle->val;
            middle->val = temp;
        }
        return;
    }
};
