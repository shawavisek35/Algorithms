class Solution {
public:
    
    bool isValid(string paren) {
        if(paren.empty()) return false;
        stack<char> st;
        for(auto ch : paren) {
            if(ch == '(') {
                st.push(ch);
            }
            else if(ch == ')') {
                if(st.empty()) return false;
                st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
    
    void findValidParen(vector<string> &ans, string s, unordered_map<string, bool> &umap) {
        if(isValid(s)) {
            ans.push_back(s);
            return;
        }
        
        for(int i=0;i<s.size();i++) {
            string as = s.substr(i,1);
            s.erase(i, 1);
            if(umap.find(s) == umap.end()) {
                umap[s] = true;
                findValidParen(ans, s, umap);
            }
            s.insert(i, as);
        }
        return;
    }
    
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        unordered_map<string, bool> umap;
        findValidParen(ans, s, umap);
        int maxS = 0;
        if(ans.size() == 0) {
            ans.push_back("");
            return ans;
        }
        for(auto t : ans) {
            if(t.size() > maxS) maxS = t.size();
        }
        vector<string> res;
        for(auto t : ans) {
            if(t.size() == maxS) res.push_back(t);
        }
        return res;
    }
};