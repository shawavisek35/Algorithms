/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.

//recursive
void traverse(Node *root, vector<int> &ans) {
    if(root == NULL) return;
    ans.push_back(root->data);
    traverse(root->left, ans);
    traverse(root->right, ans);
    return;
}

vector <int> preorder(Node* root)
{
  //Iterative preorder traversal
  vector<int> ans;
  stack<Node *> tree;
  
  tree.push(root);
  while(!tree.empty()) {
      Node *temp = tree.top();
      tree.pop();
      ans.push_back(temp->data);
      if(temp->right) tree.push(temp->right);
      if(temp->left) tree.push(temp->left);
  }
  return ans;
}