#include<bits/stdc++.h>
using namespace std;
class TrieNode {
	public:
    TrieNode *links[26];
    TrieNode() {
        memset(links, NULL, sizeof(links));
    }
    bool containsKey(char ch) {
        return (links[ch-'a'] != NULL);
    }
    
    void createKey(char ch, TrieNode *node) {
        links[ch-'a'] = node;
    }
    
    TrieNode *getKey(char ch) {
        return links[ch-'a'];
    }
};

class Trie {
	private: TrieNode *root;
    public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word, int &ans) {
    	TrieNode *node = root;
        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                ans ++;
                node->createKey(word[i], new TrieNode());
            }
            node = node->getKey(word[i]);
        }
    }
};

int countDistinctSubstrings(string &s)
{
    int ans = 0;
    int n = s.size();
    Trie trie = Trie();
    for(int i=0;i<n;i++) {
    	trie.insert(s.substr(i), ans);
    }
    return ans + 1;
}
