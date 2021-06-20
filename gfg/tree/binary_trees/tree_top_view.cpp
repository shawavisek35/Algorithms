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

void treeUtil(Node *root, vector<int> &ans, int v, int highest){
    if(root == NULL){
        return;
    }

    if(abs(v) > highest){
        if(v>highest){

            ans.push_back(root->data);
        }
        else{
            ans.insert(ans.begin(), root->data);
        }
        highest++;
    }
    treeUtil(root->left, ans, v-1, highest);
    treeUtil(root->right, ans, v+1, highest);
    return;
}

vector<int> treeTopView(Node *root){
    vector <int> ans;
    treeUtil(root, ans, 0,-1);
    return ans;
}

int main(){
    struct Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(4);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    root->right->left = new Node(3);
    root->right->right = new Node(6);
    root->right->right->left = new Node(5);

    vector <int> ans = treeTopView(root);
    for(auto t : ans){
        cout << t << " ";
    }

    return 0;
}