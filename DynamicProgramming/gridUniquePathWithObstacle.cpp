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

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    return totalPath(n-1, m-1, mat, dp);
}
