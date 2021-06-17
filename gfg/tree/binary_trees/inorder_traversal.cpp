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

void printStack(stack <Node *> s){
    while(!s.empty()){
        cout << s.top()->data << " ";
        s.pop();
    }
}

void inorderRecursive(Node *root){
    if(root==NULL){
        return;
    }
    inorderRecursive(root->left);
    cout << root->data << " ";
    inorderRecursive(root->right);
    return;
}

void inorderIterative(Node *root){
    stack<Node *> s;
    Node * curr = root;

    while(!s.empty() || curr!=NULL){
        if(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        else{
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}


int main(){
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);

    root->left->left = new Node(2);
    root->left->right = new Node(4);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    inorderRecursive(root);
    cout << "\n";

    inorderIterative(root);
    cout << "\n";
    return 0;
}