
//Brute force approach
class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int temp = st1.top();
        st1.pop();
        return temp;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

//Efficient Approach
class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()) {
            while(!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int temp = st2.top();
        st2.pop();
        return temp;
    }
    
    int peek() {
        if(st2.empty()) {
            while(!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int temp = st2.top();
        return temp;
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
    }
};

