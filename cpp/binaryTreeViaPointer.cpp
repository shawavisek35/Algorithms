//Binary tree representation using pointer
/*
Constructing a node like the one given below

                    10
                   /  \
                  /    \ 
                 /      \ 
                5        4
               / \         \   
              /   \         \
             /     \         \
            1       2         20
*/
#include <iostream>
#include <queue>
using namespace std;

//declaring a node data type
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

Node* search(Node *root,int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    queue <Node *> bfs;
    Node *temp;
    Node *outputNode=NULL;
    bfs.push(root);

    while(!bfs.empty())
    {
        temp = bfs.front();
        bfs.pop();

        if(temp->data == key)
        {
            cout << "Found the Key \n";
            outputNode = temp;
        }
        if(temp->lchild!=NULL){
            bfs.push(temp->lchild);
        }
        if (temp->rchild != NULL)
        {
            bfs.push(temp->rchild);
        }
        
        
    }
    return outputNode;
}

int main()
{
    int key;
    //creating a rootnode
    Node *searchedNode;
    Node *root = createNewNode(10);

    //creating other nodes
    root->lchild = createNewNode(5);
    root->rchild = createNewNode(5);
    root->lchild->lchild = createNewNode(1);
    root->lchild->rchild = createNewNode(2);
    root->rchild->rchild = createNewNode(20);

    cout << "Enter the element to find : ";
    cin >> key;
    searchedNode = search(root,key);
    if(searchedNode==NULL)
    {
        cout << "Either your tree is empty or the searched node is not present. \n";
    }
    else{
        cout << "Your searched node is found " << searchedNode->data << "\n";
    }
    
    return 0;
}