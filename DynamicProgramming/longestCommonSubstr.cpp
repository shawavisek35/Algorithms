class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
        int ans = 0;
        for(int i=0;i<m;i++) {
            if(S1[0] == S2[i]) {
                dp[0][i] = 1;
                ans = max(ans, dp[0][i]);
            }
        }
        for(int i=0;i<n;i++) {
            if(S1[i] == S2[0]) {
                dp[i][0] = 1;
                ans = max(ans, dp[i][0]);
            }
        }
        for(int i=1;i<n;i++) {
            for(int j=1;j<m;j++) {
                if(S1[i] == S2[j]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans;
    }
};
