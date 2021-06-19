#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node (int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void leftUtil(Node *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    ans.insert(ans.begin(), root->data);
    leftUtil(root->left, ans);
    return;
}

void rightUtil(Node *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    rightUtil(root->right, ans);
    return;
}

vector<int> treeTopView(Node *root){
    vector<int> ans;
    if(!root){
        return ans;
    }
    ans.push_back(root->data);
    leftUtil(root->left, ans);
    rightUtil(root->right, ans);
    return ans;
}

int main(){
    struct Node *root = new Node(1);
    //root->left = new Node(NULL);
    root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector <int> ans = treeTopView(root);
    for(auto t : ans){
        cout << t << " ";
    }

    return 0;
}