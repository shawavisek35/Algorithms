#include <iostream>
using namespace std;
#include <vector>

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
};

class BinaryTree
{
    public:
        Node* createNode(int data)
        {
            Node *newNode = new Node();
            newNode->data = data;
            newNode->lchild = NULL;
            newNode->rchild = NULL;

            return newNode;
        }

        Node* createTree(vector <int> arr,int i,int n, Node *root)
        {
            
            if(i<n)
            {
                Node *temp = createNode(arr[i]);
                root = temp;
                root->lchild = createTree(arr,2*i+1,n,root->lchild);
                root->rchild = createTree(arr,2*i+2,n,root->rchild);
            }
            return root;
        }

        void inorderTraversal(Node *root)
        {
            if(root!=NULL)
            {
                inorderTraversal(root->lchild);
                cout << root->data << " ";
                inorderTraversal(root->rchild);
            }   
            return;
        }

        void preorderTraversal(Node *root)
        {
            if(root!=NULL)
            {
                cout << root->data << " ";
                preorderTraversal(root->lchild);
                preorderTraversal(root->rchild);
            }
            return;
        }

        void postorderTraversal(Node *root)
        {
            if(root!=NULL)
            {
                postorderTraversal(root->lchild);
                postorderTraversal(root->rchild);
                cout << root->data << " ";
            }
            return;
        }

};

int main()
{
    vector <int> arr;
    int element;
    int i,n;
    cout << "Enter no. of elements : ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Enter element at arr[" << i << "] : ";
        cin >> element;
        arr.push_back(element);
    }
    BinaryTree Tree;
    Node *root;
    root = Tree.createTree(arr,0,arr.size()-1,root);

    //printing inorder traversal
    cout << "\nIn order Traversal of Tree : \n";
    Tree.inorderTraversal(root);
    cout << "\n";

    //printing preorder traversal
    cout << "\nPre order Traversal of Tree : \n";
    Tree.preorderTraversal(root);
    cout << "\n";

    //printing postorder traversal
    cout << "\nPost order Traversal of Tree : \n";
    Tree.postorderTraversal(root);
    cout << "\n";

    return 0;
}