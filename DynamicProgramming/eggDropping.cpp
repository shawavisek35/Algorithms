class Solution {
public:
    
    int solve(int k, int n, vector<vector<int>> &dp) {
        if(n==0 || n==1) return n;
        if(k==1) return n;
        if(dp[k][n] != -1) return dp[k][n];
        int ans = INT_MAX;
        for(int i=1;i<=n;i++) {
            int eggBreak = solve(k-1, i-1, dp);
            int eggNotBreak = solve(k, n-i, dp);
            int tempAns = 1 + max(eggBreak, eggNotBreak);
            ans = min(ans, tempAns);
        }
        return dp[k][n] = ans;
    }
    
    int superEggDrop(int k, int n) {
        vector<vector<int>> dp(k+1, vector<int>(n+1, -1));
        return solve(k, n, dp);
    }
};
