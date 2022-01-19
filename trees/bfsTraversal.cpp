#include<iostream>
#include<queue>
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

void bfsTraversal(Node *root) {
  if(root == NULL) return;

  queue<Node *> q;
  q.push(root);
  while(!q.empty()) {
    Node *temp = q.front();
    q.pop();

    if(temp->lChild) {
      q.push(temp->lChild);
    }
    if(temp->rChild) {
      q.push(temp->rChild);
    }
  }
}