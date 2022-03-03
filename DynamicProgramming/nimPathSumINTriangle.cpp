#include<bits/stdc++.h>
using namespace std;

int minimumPathSum(vector<vector<int>>& triangle, int n){
	int dp[n+1][n+1];
    //memset(dp, INT_MAX, sizeof(dp));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            dp[i][j] = INT_MAX;
        }
    }
    dp[0][0] = triangle[0][0];
    for(int i=1;i<n;i++) {
        dp[i][0] = dp[i-1][0] + triangle[i][0];
    }
    
    for(int i=1;i<n;i++) {
        int m = triangle[i].size();
        for(int j=1;j<m;j++) {
            dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
        }
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++) {
        ans = min(ans, dp[n-1][i]);
    }
    return ans;
}
