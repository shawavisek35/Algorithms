class Solution{
    public:
    
    class NodeValue {
        public:
        int maxVal, minVal, size;
        NodeValue(int minVal, int maxVal, int s) {
            this->maxVal = maxVal;
            this->minVal = minVal;
            this->size = s;
        }
    };
    
    //doing a post order traversal
    NodeValue largestBstUtil(Node *root) {
        if(!root) return NodeValue(INT_MAX, INT_MIN, 0);
        NodeValue left = largestBstUtil(root->left);
        NodeValue right = largestBstUtil(root->right);
        if(left.maxVal < root->data && root->data < right.minVal) {
            return NodeValue(min(left.minVal, root->data), max(right.maxVal, root->data), left.size + right.size + 1);
        }
        else {
            return NodeValue(INT_MIN, INT_MAX, max(left.size, right.size));
        }
    }
    
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	//Your code here
    	return largestBstUtil(root).size;
    }
};
