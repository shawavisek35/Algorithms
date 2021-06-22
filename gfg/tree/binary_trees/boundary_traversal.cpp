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

void printleft(Node * root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left){

        ans.push_back(root->data);
        printleft(root->left, ans);
    }
    else if(root->right){

        ans.push_back(root->data);
        printleft(root->right, ans);
        return;
    }
}
void printLeaf(Node * root, vector<int> &ans){
    if(root==NULL){
        return;
    }

    printLeaf(root->left, ans);

    if(root->left == NULL && root->right==NULL){
        ans.push_back(root->data);
    }

    printLeaf(root->right, ans);
}
void printRight(Node * root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->right){
        printRight(root->right, ans);
        ans.push_back(root->data);

    }
    else if(root->left){

        printRight(root->left, ans);
        ans.push_back(root->data);
        return;
    }
}

vector <int> boundaryTraversal(Node *root){
    vector<int> ans;
    ans.push_back(root->data);
    printleft(root, ans);
    printLeaf(root->left, ans);
    printLeaf(root->right, ans);
    printRight(root, ans);
    return ans;
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

    vector<int> ans = boundaryTraversal(root);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}