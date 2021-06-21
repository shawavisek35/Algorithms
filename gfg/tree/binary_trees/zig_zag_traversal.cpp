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

void treeUtil(Node *root, int level, vector<int> &ans){
    if(root==NULL){
        return;
    }

    ans.push_back(root->data);
    if(level%2==0){
        treeUtil(root->left, level+1, ans);
        treeUtil(root->right, level+1, ans);
    }
    else{
        treeUtil(root->right, level+1, ans);
        treeUtil(root->left, level+1, ans);
    }
    return;
}

vector <int> zigzagTraversal(Node *root){
    vector<int> ans;
    queue<Node *> q;
    while(!q.empty()){
        int n = q.size();
    }
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

    vector<int> ans = zigzagTraversal(root);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}