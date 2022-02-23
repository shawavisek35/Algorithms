#include<bits/stdc++.h>
using namespace std;

class TrieNode {
	public:
    TrieNode *links[2];
    
    
    bool containsKey(int bit) {
        return (links[bit] != NULL);
    }
    
    TrieNode *getKey(int bit) {
    	return links[bit];
    }
    
    void putKey(int bit, TrieNode *node) {
        links[bit] = node;
    }
};

class Trie {
    private: TrieNode *root;
    public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(int num) {
        TrieNode *node = root;
        for(int i=30;i>=0;i--) {
            int setBit = (num >> i) & 1;
            if(!node->containsKey(setBit)) {
                node->putKey(setBit, new TrieNode());
            }
            node = node->getKey(setBit);
        }
    }
    
    int findMax(int num) {
        TrieNode *node = root;
        int maxNum = 0;
        for(int i=30;i>=0;i--) {
            int setBit = (num >> i) & 1;
            if(!node->containsKey(1 - setBit)) {
                maxNum = (1 << i) | maxNum;
                node = node->getKey(1-setBit);
            }
            else {
                node = node->getKey(setBit);
            }
        }
        return maxNum;
    }
};

int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    // Write your code here.   
    
    Trie trie;
    for(auto it : arr1) {
        trie.insert(it);
    }
    int ans = INT_MIN;
    for(auto it : arr2) {
        ans = max(ans, trie.findMax(it));
    }
    return ans;
}
