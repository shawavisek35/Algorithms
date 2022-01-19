#include<iostream>
using namespace std;

//using class
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

//using struct
// struct Node {
//   int val;
//   struct Node *lChild;
//   struct Node *rChild;

//   Node(int _val) {
//     this->val = _val;
//     this->lChild = NULL;
//     this->rChild = NULL;
//   }
// };


//creating a tree
/*
            1
          /   \
         2     3

*/          
int main() {
  Node *root = new Node(1);
  root->lChild = new Node(2);
  root->rChild = new Node(3);
  return 0;
}