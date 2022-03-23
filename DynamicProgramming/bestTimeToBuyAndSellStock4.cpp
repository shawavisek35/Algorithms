class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(n==0 || k==0) return 0;
        vector<vector<int>> dp(k+1, vector<int>(n+1, 0));
        
        for(int i=1;i<=k;i++) {
            int maxPrice = INT_MIN;
            for(int j=1;j<n;j++) {
                maxPrice = max(maxPrice, dp[i-1][j-1] - prices[j-1]);
                dp[i][j] = max(dp[i][j-1], maxPrice + prices[j]);
//                 for(int m=0;m<j;m++) {
                    
//                     dp[i][j] = max(dp[i][j], dp[i-1][m] - prices[m] + prices[j]);
//                 }
//                 dp[i][j] = max(dp[i][j-1], dp[i][j]);
            }
        }
        
        return dp[k][n-1];
    }
};
