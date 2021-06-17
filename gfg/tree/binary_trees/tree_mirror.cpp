#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void treeMirroring(Node *root){
    if(root==NULL){
        return;
    }

    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;

    treeMirroring(root->left);
    treeMirroring(root->right);
    return;
}

void inorderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
    return;
}

int main(){
    //creating a tree
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);

    root->left->left = new Node(2);
    root->left->right = new Node(4);

    // root->right->left = new Node(6);
    // root->right->right = new Node(7);

    cout << "Original Tree : ";
    inorderTraversal(root);
    cout << "\n";

    cout << "Mirrored tree : ";
    treeMirroring(root);
    inorderTraversal(root);
    cout << "\n";

    return 0;
}