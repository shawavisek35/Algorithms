class Solution {
public:
    
    bool solve(string s1, string s2, unordered_map<string, bool> &dp) {
        if(s1.size() != s2.size()) return false;
        if(s1 == s2) return true;
        string key = s1 + s2;
        if(dp.find(key) != dp.end()) return dp[key];
        string copy_S1 = s1, copy_S2 = s2;
 
        sort(copy_S1.begin(), copy_S1.end());
        sort(copy_S2.begin(), copy_S2.end());

        if (copy_S1 != copy_S2) {
            return false;
        }
        for(int i=1;i<s1.size();i++) {
            bool withSwap = solve(s1.substr(0,i), s2.substr(s2.size()-i, i), dp) && solve(s1.substr(i, s1.size()-i), s2.substr(0, s2.size() - i), dp);
            bool withOutSwap = solve(s1.substr(0,i), s2.substr(0, i), dp) && solve(s1.substr(i, s1.size()-i), s2.substr(i, s1.size()-i), dp);
            if(withSwap) return dp[key] = true;
            if(withOutSwap) return dp[key] = true;    
        }
        return dp[key] = false;
    }
    
    bool isScramble(string s1, string s2) {
        unordered_map<string, bool> dp;
        int n = s1.size();
        return solve(s1, s2, dp);
    }
};
