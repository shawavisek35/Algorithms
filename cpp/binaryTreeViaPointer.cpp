//Binary tree representation using pointer
/*
Constructing a node like the one given below

                    10
                   /  \
                  /    \ 
                 /      \ 
                5        20
               / \         \   
              /   \         \
             /     \         \
            1       2         100
*/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *lchild;
    Node *rchild;
};

Node* createNewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->lchild = NULL;
    newNode->rchild = NULL;
    return newNode;
}

int main()
{
    //creating a rootnode
    Node *root = createNewNode(10);
    root->lchild = createNewNode(5);
    root->rchild = createNewNode(20);
    root->lchild->lchild = createNewNode(1);
    root->lchild->rchild = createNewNode(2);
    root->rchild->rchild = createNewNode(100);
    
    return 0;
}