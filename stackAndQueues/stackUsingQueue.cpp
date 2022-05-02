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

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
