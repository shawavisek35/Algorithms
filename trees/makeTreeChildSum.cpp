#include <bits/stdc++.h>
using namespace std;
 
// Structure of a node in a binary tree
struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void showTree(Node *root) {
    if(!root) return;
    cout << root->val << " ";
    showTree(root->left);
    showTree(root->right);
}

void convertTreeToChildSum(Node *root) {
    if(!root) return;
    int childSum = 0;
    if(root->left) childSum += root->left->val;
    if(root->right) childSum += root->right->val;
    if(childSum >= root->val) {
        root->val = childSum;
    }
    else{
        if(root->left) root->left->val = root->val;
        if(root->right) root->right->val = root->val;    
    }
    
    convertTreeToChildSum(root->left);
    convertTreeToChildSum(root->right);
    childSum = 0;
    if(root->left) childSum += root->left->val;
    if(root->right) childSum += root->right->val;
    if(root->left || root->right) root->val = childSum;
    return;
}

//driver code
int main() {
    Node* root = new Node(50);
    root->left = new Node(7);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(1);
    root->right->right = new Node(30);
    showTree(root);
    convertTreeToChildSum(root);
    cout << "\n";
    showTree(root);
    return 0;
}