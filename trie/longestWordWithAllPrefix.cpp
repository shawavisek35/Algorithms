#include<bits/stdc++.h>
using namespace std;
class TrieNode {
    public:
   	TrieNode *links[26];
    bool endFlag;
    
    TrieNode(bool f = false) {
        memset(links, NULL, sizeof(links));
        endFlag = f;
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
    
    void setEnd() {
        endFlag = true;
    }
    
    bool isEnd() {
        return endFlag;
    }
};

class Trie {
	private: TrieNode *root;
    public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *node = root;
        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->createKey(word[i], new TrieNode());
            }
            node = node->getKey(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        TrieNode *node = root;
        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                return false;
            }
            node = node->getKey(word[i]);
            if(!node->isEnd()) return false;
        }
        return node->isEnd();
    }
};

string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie trie = Trie();
    for(auto s : a) {
        trie.insert(s);
    }
    string ans = "";
    for(auto s : a) {
        if(trie.search(s)) {
            if(ans.size() < s.size()) {
                ans = s;
            }
            else if(ans.size() == s.size() && ans > s) {
                ans = s;
            }
        }
    }
    return ans=="" ? "None" : ans;
}
