//Implementation of stack using two queues

class MyStack {
public:
    queue<int> st;
    queue<int> temp;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!st.empty()) {
            int te = st.front();
            st.pop();
            temp.push(te);
        }
        st.push(x);
        while(!temp.empty()) {
            int te = temp.front();
            st.push(te);
            temp.pop();
        }
    }
    
    int pop() {
        int res = st.front();
        st.pop();
        return res;
        
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};

//Using Single Queue
class MyStack {
public:
    queue<int> st;
    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        int n = st.size();
        int i = 1;
        while(i<n) {
            st.push(st.front());
            st.pop();
            i++;
        }
    }
    
    int pop() {
        int res = st.front();
        st.pop();
        return res;
        
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};
