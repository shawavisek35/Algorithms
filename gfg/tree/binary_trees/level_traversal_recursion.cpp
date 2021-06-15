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

void levelOrderTraversal(Node *root){
    //base condition
    if(root == NULL){
        return;
    }
    cout << root->leftC->data << "\n";
    cout << root->rightC->data << "\n";
    levelOrderTraversal(root->leftC);
    levelOrderTraversal(root->rightC);
    return;

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

    cout << root->data << "\n";
    levelOrderTraversal(root);

    return 0;
}