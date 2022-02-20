class TrieNode {
private:
    TrieNode *links[26];
    bool endFlag;
public:
    TrieNode() {
        memset(links, NULL, sizeof(links));
        this->endFlag = false;   
    }

    bool containsKey(char ch) {
        if(links[ch-'a']) return true;
        return false;
    }

    void createKey(char ch, TrieNode *node) {
        links[ch-'a'] = node;
    }

    TrieNode *getKey(char ch) {
        return links[ch-'a'];
    }

    void setEnd() {
        this->endFlag = true;
    }

    bool isEnd() {
        return this->endFlag;
    }
};

class Trie {
private:
    TrieNode *root;
public:
    
    Trie() {
        this->root = new TrieNode();
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
        }
        return node->isEnd();
    }
    
    bool startsWith(string word) {
        TrieNode *node = root;
        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                return false;
            }
            node = node->getKey(word[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */