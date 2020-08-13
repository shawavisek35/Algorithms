#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

struct Node
{
    int key;
    Node *lchild, *rchild;
};

Node* createNode(int key)
{
    Node *root = new Node();
    root ->key = key;
    root ->lchild = NULL;
    root ->rchild = NULL;
    return root;
}


Node* createBST(vector <ll> node, int start, int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid = (start+end)/2;
    Node *root = createNode(node[mid]);

    root->lchild = createBST(node, start, mid-1);
    root -> rchild = createBST(node, mid+1, end);
    return root;
    
}

void DisplayInorder(Node *root)
{
    if(root!=NULL)
    {
        DisplayInorder(root->lchild);
        cout << root->key << " ";
        DisplayInorder(root->rchild);
    }
    return;
}

int main()
{
    ll i,n, element;
    vector <ll> nodes;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> element;
        nodes.push_back(element);
    }
    sort(nodes.begin(), nodes.end());
    Node *root = createBST(nodes,0,nodes.size()-1);
    DisplayInorder(root);
    return 0;
}