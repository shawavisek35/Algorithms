/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively

void findPredecessor(Node *root, Node *&pre, int key) {
    if(!root) return;
    if(root->key >= key) {
        return findPredecessor(root->left, pre, key);   
    }
    else {
        if(!pre || pre->key < root->key){
            pre = root;
        }
        
        return findPredecessor(root->right, pre, key);
        
    }
    return;
}

void findSuccessor(Node *root, Node *&suc, int key) {
    if(!root) return;
    if(root->key <= key) {
        return findSuccessor(root->right, suc, key);   
    }
    else {
        if(!suc || suc->key > root->key){
            suc = root;
        }
        
        return findSuccessor(root->left, suc, key);
        
    }
    return;
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

    findPredecessor(root, pre, key);
    findSuccessor(root, suc, key);
    return;

}
