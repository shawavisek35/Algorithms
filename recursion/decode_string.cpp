class Solution {
public:
    string repeat(string s, int n) {
        string ans = "";
        for(int i=1;i<=n;i++) {
            ans += s;
        }
        return ans;
    }
    
    string solve(string s, int n) {
        //base case
        size_t found = s.find("[");
        if(found == string::npos) {
            string res = repeat(s, n);
            return res;
        }
        string ans = "";
        int result = 0;
        string res = "";
        int i = 0;
        stack<int> st;
        while(i<s.size()) {
            if(isdigit(s[i])) {
                result = result * 10 + (s[i] - '0');
                i++;
            }
            else if(s[i] == '[') {
                st.push(s[i]);
                i++;
                while(!st.empty()) {
                    if(s[i] == '[') {
                        st.push(s[i]);
                        res += s[i];
                    }
                    else if (s[i] == ']') {
                        if(st.size() > 1) {
                            res += ']';
                        }
                        st.pop();
                    }
                    else res += s[i];
                    i++;
                }
                ans += solve(res, result);
                res = "";
                result = 0;
            }
            else{
                ans += s[i++];
            }
        }
        ans = repeat(ans, n);
        return ans;
        
    }
    
    string decodeString(string s) {
        return solve(s, 1);
    }
};