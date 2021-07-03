#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int minSum(vector<vector<int>> &grid, int r, int c){
        if(r<0 || c<0){
            return INT_MAX;
        }
        
        else if(r==0 && c==0){
            return grid[r][c];
        }
        else{
            return grid[r][c] + min(minSum(grid, r-1,c), minSum(grid, r, c-1));
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int c = grid[0].size();
        int dp[n][c];
        dp[0][0] = grid[0][0];
        for(int i=1;i<n;i++){
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        for(int i=1;i<c;i++){
            dp[0][i] = dp[0][i-1] + grid[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<c;j++){
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }
        
        return dp[n-1][c-1];
        //return minSum(grid, n-1, c-1);
    }
};