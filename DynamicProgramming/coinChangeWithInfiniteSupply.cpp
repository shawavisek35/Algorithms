class Solution {
public:
    
    int countWays(vector<int> denominations, int i, int value, vector<vector<int>> &dp) {
        if(i==0) {
            if(value % denominations[i] == 0) return 1;
            else return 0;
        }
        if(dp[i][value] != -1) return dp[i][value];
        if(denominations[i] > value) {
            return dp[i][value] = countWays(denominations, i-1, value, dp);
        }
        return dp[i][value] = countWays(denominations, i-1, value, dp) + countWays(denominations, i, value-denominations[i], dp);
    }
    
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount + 1, 0));
        
        //initialization
        for(int j=0;j<=amount;j++) {
            if(j%coins[0] == 0) dp[0][j] = 1;
        }
        
        for(int i=1;i<n;i++) {
            for(int j=0;j<=amount;j++) {
                if(coins[i] > j) dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i-1][j] + dp[i][j-coins[i]];
            }
        }
        return dp[n-1][amount];
    }
};
