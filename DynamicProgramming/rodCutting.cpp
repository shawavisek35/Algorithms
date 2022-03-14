class Solution{
  public:
  
    int findMax(int n, int price[], vector<int> &length, int rodLength, vector<vector<int>> &dp) {
        if(n<0) return 0;
        if(dp[n][rodLength] != -1) return dp[n][rodLength];
        if(length[n] > rodLength) {
            return dp[n][rodLength] = findMax(n-1, price, length, rodLength, dp);
        }
        return dp[n][rodLength] = max(findMax(n-1, price, length, rodLength, dp), findMax(n, price, length, rodLength - length[n], dp) + price[n]);
    }
  
    int cutRod(int price[], int n) {
        vector<int> length;
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        for(int i=1;i<=n;i++) {
            length.push_back(i);
        }
        return findMax(n-1, price, length, n, dp);
    }
};
