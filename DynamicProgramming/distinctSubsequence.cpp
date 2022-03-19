class Solution {
public:
    
    int findCount(string &s, string &t, int i, int j, vector<vector<int>> &dp) {
        if(i<0) {
            if(j<0) return 1;
            else return 0;
        }
        if(j<0) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] == t[j]) return dp[i][j] = findCount(s, t, i-1, j-1, dp) + findCount(s, t, i-1, j, dp); 
        return dp[i][j] = findCount(s, t, i-1, j, dp);
    }
    
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<double>> dp(n+1, vector<double>(m+1, 0));
        //tabulation
        for(int i=0;i<=n;i++) {
            dp[i][0] = 1;
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                
                if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                else dp[i][j] = dp[i-1][j];

            }
        }
        //int ans = findCount(s, t, n-1, m-1, dp);
        return (int)dp[n][m];
    }
};
