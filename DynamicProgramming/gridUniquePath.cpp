#include<bits/stdc++.h>
using namespace std;

int totalPath(int row, int col, int m, int n, vector<vector<int>> &dp){
    if(row>m || col>n) return 0;
    if(row == m-1 && col == n-1) return 1;
    if(dp[row][col] != -1) return dp[row][col];
    int ans1 = totalPath(row+1, col, m, n, dp);
    int ans2 = totalPath(row, col+1, m, n, dp);
    return dp[row][col] = ans1 + ans2;
}

int uniquePaths(int m, int n) {
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    int temp = 1;
    for(int i=1;i<=m;i++){
        temp = 1;
        for(int j=1;j<=n;j++){
        	temp = temp + dp[j];
            dp[j] = temp;
        }
    }
	return dp[n-1];
}
