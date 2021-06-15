#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int data){
        data = data;
        left = NULL;
        right = NULL;
    }
};

int diameter(Node *root, int &res){
    if(root == NULL){
        return 0;
    }

    int l = diameter(root->left, res);
    int r = diameter(root->right, res);

    int temp = max(l,r) + 1;
    int ans = max(temp, 1+l+r);
    res = max(res,ans);

    return temp;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    int res = INT_MIN;
    diameter(root, res);
    cout << res << "\n";
    return 0;
}