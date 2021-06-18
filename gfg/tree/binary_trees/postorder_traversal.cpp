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

void postOrderIterative(Node *root){
    stack <Node *> s;
    stack <int> o;
    s.push(root);
    while(!s.empty()){
        Node *curr = s.top();
        s.pop();
        o.push(curr->data);

        if(curr->left){
            s.push(curr->left);
        }
        if(curr->right){
            s.push(curr->right);
        }
    }

    while(!o.empty()){
        cout << o.top() << " ";
        o.pop();
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

    postOrderIterative(root);
    cout << "\n";
    return 0;
}