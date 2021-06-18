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


void preOrderIterative(Node *root){
    stack<Node *> s;
    s.push(root);
    while(!s.empty()){
        Node *curr = s.top();
        s.pop();

        cout << curr->data << " ";
        if(curr->right){
            s.push(curr->right);
        }
        if(curr->left){
            s.push(curr->left);
        }
    }
    return;
}


int main(){
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);

    root->left->left = new Node(2);
    root->left->right = new Node(4);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preOrderIterative(root);
    cout << "\n";
    return 0;
}