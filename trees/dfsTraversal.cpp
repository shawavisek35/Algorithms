#include<iostream>
using namespace std;

class Node {
  public:
  int val;
  Node *lChild;
  Node *rChild;

  Node(int _val) {
    this->val = _val;
    this->lChild = NULL;
    this->rChild = NULL;
  }
};

//In-order Traversal

void inOrder(Node *root) {
  if(root == NULL) return;

  inOrder(root->lChild);
  cout << root << "\n";
  inOrder(root->rChild);
}

//Post order
void postOrder(Node *root) {
  if(root == NULL) return;

  postOrder(root->lChild);
  postOrder(root->rChild);
  cout << root << "\n";
}

//Pre Order
void preOrder(Node *root) {
  if(root == NULL) return;

  cout << root << "\n";
  preOrder(root->lChild);
  preOrder(root->rChild);
}