#include <bits/stdc++.h>
using namespace std;

//defining tree node
struct Node { 
    int data;
    struct Node *leftC;
    struct Node *rightC;

    //constructor
    Node(int data){
        this->data = data;
        this->leftC = NULL;
        this->rightC = NULL;
    }
};

int height(Node *root){
    if(root == NULL){
        return 0;
    }

    return 1 + max(height(root->leftC), height(root->rightC));
}

int main(){
    //creating a tree
    struct Node *root = new Node(1);
    root->leftC = new Node(2);
    root->rightC = new Node(3);
    root->leftC->leftC = new Node(4);
    root->leftC->rightC = new Node(5);
    root->rightC->leftC = new Node(6);
    root->rightC->rightC = new Node(7);

    cout << height(root) << "\n";

    return 0;
}