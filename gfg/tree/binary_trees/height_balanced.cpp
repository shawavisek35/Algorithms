#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(Node *root){
    if(root == NULL){
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}

bool isBalanced(Node *root){
    queue <Node *> q;
    if(root==NULL){
        return true;
    }

    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        int hl = height(temp->left);
        int hr = height(temp->right);

        if(abs(hl - hr) > 1){
            return false;
        }
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }

    return true;
}

int main(){
    //creating a tree
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << isBalanced(root) << "\n";
    return 0;
}