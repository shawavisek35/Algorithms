class Solution {
public:
    
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++) {
            if(s[i] == ']') {
                if(st.empty() || st.top() != '[') return false;
                st.pop();
            }
            else if(s[i] == '}') {
                if(st.empty() || st.top() != '{') return false;
                st.pop();
            }
            else if(s[i] == ')') {
                if(st.empty() || st.top() != '(') return false;
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
