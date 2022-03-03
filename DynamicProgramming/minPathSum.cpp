#include<bits/stdc++.h>
using namespace std;

int minCost(int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp) {
    if(n<0 || m<0) return INT_MAX;
    if(n==0 && m==0) return grid[n][m];
    if(dp[n][m] != -1) return dp[n][m];
    return grid[n][m] + min(minCost(n-1, m, grid, dp), minCost(n, m-1, grid, dp));
}

int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    dp[0][0] = grid[0][0];
    for(int i=1;i<n;i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    for(int i=1;i<m;i++) {
        dp[0][i] = dp[0][i-1] + grid[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    return dp[n-1][m-1];
}
