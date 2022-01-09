/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    void dfs(Node *node, Node *copy, unordered_map<int,Node *> &m) {
        m[node->val] = copy;
        for(auto it : node->neighbors) {
            if(m.find(it->val) == m.end()) {
                Node *newN = new Node(it->val);
                dfs(it, newN, m);
                copy->neighbors.push_back(newN);   
            }
            else{
                copy->neighbors.push_back(m[it->val]);
            }
        }
        return;
    }
    
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        unordered_map<int, Node *> m;
        Node *copy = new Node(1);
        m[1] = copy;
        dfs(node, copy, m);
        return copy;
    }
};