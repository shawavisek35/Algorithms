/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
  
    void solve(Node *root, Node *&successor, Node *x) {
        if(!root) return;
        if(root->data <= x->data) {
            return solve(root->right, successor, x);
        }
        else {
            if(!successor || successor->data > root->data) {
                successor = root;
            }
            return solve(root->left, successor, x);
        }
        return;
    }
  
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node *successor = NULL;
        solve(root, successor, x);
        return successor;
    }
};
