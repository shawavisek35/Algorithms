class MinStack {
public:
    int topI;
    vector<int> st;
    vector<int> minSt;
    MinStack() {
        topI = -1;
    }
    
    void push(int val) {
        topI++;
        st.push_back(val);
        if(minSt.empty()) minSt.push_back(val);
        else minSt.push_back(min(val, minSt.back()));
    }
    
    void pop() {
        topI--;
        st.pop_back();
        minSt.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minSt.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
