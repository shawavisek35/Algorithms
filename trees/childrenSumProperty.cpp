/*Complete the function below

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

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        if(!root) return 1;
        if(!root->left && !root->right) return 1;
        int lData = 0, rData = 0;
        if(root->left) lData = root->left->data;
        if(root->right) rData = root->right->data;
        return (root->data == lData + rData) && isSumProperty(root->left) && (isSumProperty(root->right));
    }
};