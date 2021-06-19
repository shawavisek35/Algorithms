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

void printLeftViewTree(Node *root){
    queue <Node *> q;
    q.push(root);
    while(!q.empty()){
        
        //getting the number of nodes at each level
        int n = q.size();
        for(int i=0;i<n;i++){
            Node *temp = q.front();
            q.pop();

            if(i==0){

                cout << temp->data << " ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLeftViewTree(root);

    return 0;
}