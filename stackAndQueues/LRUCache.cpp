
class LRUCache {
    
public:
    class LRU {
        public:
        int key;
        int value;
        LRU *next;
        LRU *prev;
        
        LRU(int _key, int _value){
            key = _key;
            value = _value;
            next = NULL;
            prev = NULL;
        }
    };
    
    LRU *head = new LRU(-1, -1);
    LRU *tail = new LRU(-1, -1);
    int cap;
    unordered_map<int, LRU *> mapping;
    
    LRUCache(int capacity) {
        tail->prev = head;
        head->next = tail;
        cap = capacity;

    }
    
    void addNode(LRU *node){
        LRU *addNext = head->next;
        node->next = addNext;
        node->prev = head;
        head->next = node;
        addNext->prev = node;
        return;
    }
    
    void delNode(LRU *node){
        LRU *delPrev = node->prev;
        LRU *delNext = node->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
        return;
    }
    
    int get(int key) {
        if(mapping.find(key) == mapping.end()){
            return -1;
        }
        LRU *temp = mapping[key];
        mapping.erase(key);
        delNode(temp);
        addNode(temp);
        mapping[key] = head->next;
        return temp->value;
    }
    
    void put(int key, int value) {
        if(mapping.find(key) != mapping.end()){
            LRU *temp = mapping[key];
            mapping.erase(key);
            delNode(temp);
        }
        if(mapping.size() == cap){
            mapping.erase(tail->prev->key);
            delNode(tail->prev);
            
            
        }
        
        LRU *newNode = new LRU(key, value);
        addNode(newNode);
        mapping[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
