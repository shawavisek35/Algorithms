#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;

int totalPath(int n, int m, vector<vector<int>> &maze, vector<vector<int>> &dp) {
    if(n<0 || m<0) return 0;
    if(maze[n][m] == -1) return 0;
    if(dp[n][m] != -1) return dp[n][m];
    if(n==0 && m==0) return 1;
    return dp[n][m] = (totalPath(n-1, m, maze, dp)%mod + totalPath(n, m-1, maze, dp)%mod)%mod;
}

int mazeObstacles(int n, int m, vector< vector< int> > &maze) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if (maze[i][j] == -1) dp[i][j] = 0;
            else if(i==0 && j==0) dp[i][j] = 1;
            
            else {
                int up = 0, left=0;
                if(i>0) up = dp[i-1][j];
                if(j>0) left = dp[i][j-1];
                dp[i][j] = (up + left)%mod;
            }
        }
    }
    return dp[n-1][m-1];
}
