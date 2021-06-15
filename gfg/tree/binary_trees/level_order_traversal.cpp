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

vector<int> levelOrderTraversal(Node *root){
    queue<Node *> q;
    vector<int> answer;
    q.push(root);
    while(!q.empty()){
        Node * temp = q.front();
        answer.push_back(q.front()->data);
        q.pop();

        if(temp->leftC != NULL){

            q.push(temp->leftC);
        }
        if(temp->rightC != NULL){

            q.push(temp->rightC);
        }
    }

    return answer;
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

    vector<int> ans = levelOrderTraversal(root);

    for(int element : ans){
        cout << element << " ";
    }

    return 0;
}