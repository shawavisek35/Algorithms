//Memoized version
#include<bits/stdc++.h>
using namespace std;

int findMax(int i, int j, vector<vector<int>> &matrix, int n, int m, vector<vector<int>> &dp) {
    if(i==n || j>=m || j<0) return INT_MIN;
    if(i==n-1) return matrix[i][j];
    if(dp[i][j] != INT_MIN) return dp[i][j];
    return dp[i][j] = max({findMax(i+1, j, matrix, n, m, dp), findMax(i+1, j+1, matrix, n, m, dp), findMax(i+1, j-1, matrix, n, m, dp)}) + matrix[i][j];
}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int ans = INT_MIN;
    vector<vector<int>> dp(n+1, vector<int> (m+1, INT_MIN));
    for(int i=0;i<m;i++) {
        ans = max(ans, findMax(0,i, matrix, n, m, dp));
    }
    return ans;
}

//Tabulation method
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    //int ans = INT_MIN;
    vector<vector<int>> dp(n+1, vector<int> (m+1, INT_MIN));
    for(int i=0;i<m;i++) {
        dp[0][i] = matrix[0][i];
    }
    for(int i=1;i<n;i++) {
        for(int j=0;j<m;j++) {
         	int temp = dp[i-1][j];
            if(j > 0) temp = max(temp, dp[i-1][j-1]);
            if(j < m-1) temp = max(temp, dp[i-1][j+1]);
            dp[i][j] = temp + matrix[i][j];
        }
    }
    int ans = INT_MIN;
    for(int i=0;i<m;i++) {
        ans = max(ans, dp[n-1][i]);
    }
    return ans;
}
