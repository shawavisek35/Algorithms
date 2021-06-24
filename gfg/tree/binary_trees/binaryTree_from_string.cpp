#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int getIndex(string tree, int si, int ei){
    if(si>ei){
        return -1;
    }

    stack <char> c;

    for(int i=si;i<=ei;i++){
        if(tree[i] == '('){
            c.push(tree[i]);
        }

        else if(tree[i] == ')')
        {
            if(c.top() == '('){
                c.pop();

                if(c.empty()){
                    return i;
                }

            }
        }
    }
    return -1;
}

Node * treeFromString(string tree, int sIndex, int endIndex){
    if(sIndex>endIndex){
        return NULL;
    }
    struct Node * root = new Node(tree[sIndex] - '0');
    int index;
    if(sIndex + 1 <= endIndex && tree[sIndex + 1] == '('){
        index = getIndex(tree, sIndex+1, endIndex);
    }

    if(index!=-1){
        root->left = treeFromString(tree, sIndex+2, index-1);
        root->right = treeFromString(tree, index+2, endIndex-1);
    }
    return root;
}

void preOrder(Node *root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}

int main(){
    string s = "4(2(3)(1))(6(5))";
    Node * root = treeFromString(s, 0, s.size()-1);
    preOrder(root);
    return 0;
}