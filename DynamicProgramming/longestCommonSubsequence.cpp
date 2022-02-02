class Solution {
public:
    
    //Memoization method
    int lcs(string s1, string s2, int n1, int n2, vector<vector<int>> &dp) {
        if(n1==0 || n2==0) return 0;
        if(dp[n1][n2] != -1) return dp[n1][n2];
        if(s1[n1-1] == s2[n2-1]) return dp[n1][n2] = 1 + lcs(s1, s2, n1-1, n2-1, dp);
        return dp[n1][n2] = max(lcs(s1, s2, n1, n2-1, dp), lcs(s1, s2, n1-1, n2, dp));
    }
    
    int longestCommonSubsequence(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));
        
        //Tabular Method
        for(int i=0;i<=n1;i++) {
            for(int j=0;j<=n2;j++) {
                if(i==0 || j==0) dp[i][j] = 0;
                else if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n1][n2];
    }
};