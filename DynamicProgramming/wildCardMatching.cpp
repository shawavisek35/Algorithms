class Solution {
public:
    
    bool findMatch(string &s, string &p, int n, int m, vector<vector<int>> dp) {
        //base case
        if(n<0) {
            if(m<0) return true;
            for(int i=0;i<=m;i++) {
                if(p[i] != '*') return false;
            }
            return true;
        }
        
        if(m<0) return false;
        if(dp[n][m] != -1) return dp[n][m];
        
        if(s[n] == p[m]) return dp[n][m] = findMatch(s, p, n-1, m-1, dp);
        
        if(p[m] == '*') return dp[n][m] = findMatch(s, p, n-1, m, dp) || findMatch(s, p, n, m-1, dp);
        
        if(p[m] == '?') return dp[n][m] = findMatch(s, p, n-1, m-1, dp);
        
        return dp[n][m] = false;
    }
    
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<bool>> dp(n+1, vector<bool> (m+1, false));
        
        //tabulation
        dp[0][0] = true;
        for(int i=1;i<=n;i++) {
            dp[i][0] = false;
        }
        for(int j=1;j<=m;j++) {
            if(p[j-1] == '*') dp[0][j] = dp[0][j-1] && true;
            else dp[0][j] = false;
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(s[i-1] == p[j-1] || p[j-1] == '?') dp[i][j] = dp[i-1][j-1];
                else if(p[j-1] == '*') dp[i][j] = dp[i-1][j] || dp[i][j-1];
            }
        }
        //return findMatch(s, p, n-1, m-1, dp);
        return dp[n][m];
    }
};
