struct Node {
    Node *links[2];
    bool containsKey(int ind) {
        return (links[ind] != NULL);
    }
    
    Node *get(int bit) {
        return links[bit];
    }
    
    void put(int bit, Node *node) {
        links[bit] = node;
    }
};

class Trie {
    private: Node *root;
    public:
    Trie() {
        root = new Node();
    }
    
    void insert(int num) {
        Node *node = root;
        for(int i=31;i>=0;i--) {
            int bit = (num >> i) & 1;
            if(!node->containsKey(bit)) {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    int findMax(int num) {
        Node *node = root;
        int maxXor = 0;
        for(int i=31;i>=0;i--) {
            int bit = (num >> i) & 1;
            if(node->containsKey(!bit)) {
                maxXor |= (1 << i);
                node = node->get(1-bit);
            }
            else node = node->get(bit);
        }
        return maxXor;
    }
    
};

class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans(queries.size(), -1);
        sort(nums.begin(), nums.end());
        vector<pair<int, pair<int, int>>> q;
        for(int i=0;i<queries.size();i++) {
            q.push_back({queries[i][1], {queries[i][0], i}});
        }
        sort(q.begin(), q.end());
        int ind = 0;
        Trie node = Trie();
        for(auto it : q) {
            int sm = it.first;
            int x = it.second.first;
            int index = it.second.second;
            while(ind < nums.size() && nums[ind] <= sm) {
                node.insert(nums[ind]);
                ind++;
            }
            if(ind == 0) continue;
            ans[index] = node.findMax(x);
        }
        return ans;
    }
};
