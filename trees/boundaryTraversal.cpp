/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:

    void getLeafNode(Node *root, vector<int> &ans) {
        if(!root) return;
        if(!root->left && !root->right) {
            ans.push_back(root->data);
            return;
        }
        getLeafNode(root->left, ans);
        getLeafNode(root->right, ans);
        return;
    }
    void getRightBoundary(Node *root, vector<int> &ans) {
        if(!root || (!root->left && !root->right)) return;
        if(root->right) getRightBoundary(root->right, ans);
        else if(root->left) getRightBoundary(root->left, ans);
        ans.push_back(root->data);  
        return;
     }
     
    void getLeftBoundary(Node *root, vector<int> &ans) {
        if(!root || (!root->left && !root->right)) return;
        ans.push_back(root->data);  
        if(root->left) getLeftBoundary(root->left, ans);
        else if(root->right) getLeftBoundary(root->right, ans);
        return;
     }

    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(!root) return ans;
        ans.push_back(root->data);
        getLeftBoundary(root->left, ans);
        getLeafNode(root, ans);
        getRightBoundary(root->right, ans);
        
        return ans;
    }
};