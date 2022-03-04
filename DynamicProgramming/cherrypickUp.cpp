#include<bits/stdc++.h>
using namespace std;

int findMax(int i, int j, int bj, int n, int m, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp) {
    if(i>=n || j<0 || j>=m || bj<0 || bj>=m) return INT_MIN;
    if(i==n-1) {
        if(j==bj) return grid[i][j];
        else return grid[i][j] + grid[i][bj];
    }
    if(dp[i][j][bj] != -1) return dp[i][j][bj];
    int ans = INT_MIN;
    for(int di=-1;di<=1;di++) {
        for(int dj=-1;dj<=1;dj++) {
            ans = max(ans, findMax(i+1, j+di, bj+dj, n, m, grid, dp));
        }
    }
    ans += grid[i][j];
    if(bj != j) ans += grid[i][bj];
    return dp[i][j][bj] = ans;
}
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> dp(r+1, vector<vector<int>> (c+1, vector<int> (c+1, -1)));
    int ans1 = findMax(0, 0, c-1, r, c, grid, dp);
    return ans1;
}
