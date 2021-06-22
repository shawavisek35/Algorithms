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

vector <int> diagonalTraversal(Node *root){
    vector <int> ans;
    if(root==NULL){
        return ans;
    }

    map <int, vector<int>> m;

    queue <pair<Node *, int>> q;
    q.push({root,0});

    while(!q.empty()){
        Node *temp = q.front().first;
        int level = q.front().second;
        q.pop();

        if(m.find(level) == m.end()){
            vector <int> a = {temp->data};
            m[level] = a;
        }
        else{
            m[level].push_back(temp->data);
        }

        if(temp->left){
            q.push({temp->left, level+1});
        }
        if(temp->right){
            q.push({temp->right, level});
        }
    }
    for(auto t : m){
        for(auto l : t.second){
            ans.push_back(l);
        }
    }
    return ans;
}

//another approach
vector<int> diagonal(Node *root)
{
    vector <int> ans;
    if(root==NULL){
        return ans;
    }

    queue <Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        
        q.pop();
        while(temp){
            ans.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
    return ans;
}

int main(){
    //creating a tree
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = diagonalTraversal(root);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}