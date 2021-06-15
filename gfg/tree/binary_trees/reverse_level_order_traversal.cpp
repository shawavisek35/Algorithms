#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

stack <int> reverseLevelOrderTraversal(Node * root){
    queue <Node *> q;
    stack <int> ans;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        ans.push(temp->data);

        if(temp -> right != NULL){

            q.push(temp -> right);
        }
        if(temp->left != NULL){

            q.push(temp -> left);
        }
    }
    return ans;
}


int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    stack<int> ans = reverseLevelOrderTraversal(root);

    while(!ans.empty()){
        cout << ans.top() << "\n";
        ans.pop();
    }

    return 0;
}