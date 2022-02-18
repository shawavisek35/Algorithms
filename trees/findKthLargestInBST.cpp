/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    void findKthSmallest(Node *root, int &res, int &cnt, int k) {
        if(!root) return;
        findKthSmallest(root->left, res, cnt, k);
        cnt++;
        if(cnt == k) {
            res = root->data;
        }
        else findKthSmallest(root->right, res, cnt, k);
        return;
    }
    void inOrder(Node *root, int &ans) {
        if(!root) return;
        inOrder(root->left, ans);
        ans++;
        inOrder(root->right, ans);
        return;
    }
    
    int kthLargest(Node *root, int K)
    {
        int ans = 0;
        inOrder(root, ans);
        int res;
        int i = 0;
        findKthSmallest(root, res, i, ans-K+1);
        return res;
    }
};
