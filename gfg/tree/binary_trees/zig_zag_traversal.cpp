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

vector <int> zigzagTraversal(Node *root){
    vector<int> ans;
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);
    int level = 0;
    while(!s1.empty()){
        Node *temp = s1.top();
        s1.pop();

        ans.push_back(temp->data);

        if(level%2 == 0){
            if(temp->left){
                s2.push(temp->left);
            }
            if(temp->right){
                s2.push(temp->right);
            }
        }else{
            if(temp->right){
                s2.push(temp->right);
            }
            if(temp->left){
                s2.push(temp->left);
            }
        }

        if(s1.empty()){
            level++;
            swap(s1, s2);
        }
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