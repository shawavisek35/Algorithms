#include <bits/stdc++.h>
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

vector <int> bottomView(Node *root){
    map<int, int> m;
    queue<pair<Node *, int>> q;
    vector <int> ans;

    if(root == NULL){
        return ans;
    }

    q.push({root, 0});

    while(!q.empty()){
        Node * temp = q.front().first;
        int h = q.front().second;

        q.pop();
        m[h] = temp->data;
        if(temp->left){
            q.push({temp->left,h-1});
        }
        if(temp->right){
            q.push({temp->right, h+1});
        }
    }

    for(auto t : m){
        ans.push_back(t.second);
    }

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

    vector <int> ans = bottomView(root);
    for(auto t : ans){
        cout << t << " ";
    }

    return 0;
}