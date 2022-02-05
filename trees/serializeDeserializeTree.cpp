/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    
    int convertToInt(string s) {
        int n = 0;
        for(int i=0;i<s.size();i++) {
            n = n*10 + (s[i] - '0');
        }
        return n;
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        string ans = "";
        if(!root) return ans;
        while(!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();
            if(temp == NULL) {
                ans += "N#";
                continue;
            }
            else ans += to_string(temp->val) + "#";
            q.push(temp->left);
            q.push(temp->right);
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0) return NULL;
        string str;
        stringstream s(data);
        getline(s, str, '#');
        TreeNode *root = new TreeNode(stoi(str));
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            getline(s, str, '#');
            TreeNode *node = q.front();
            q.pop();
            if(str == "N") {
                node->left = NULL;
            }
            else{
                node->left = new TreeNode(stoi(str));
                q.push(node->left);
            }
            getline(s, str, '#');
            if(str == "N") {
                node->right = NULL;
            }
            else{
                node->right = new TreeNode(stoi(str));
                q.push(node->right);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));