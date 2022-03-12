#include<bits/stdc++.h>
using namespace std;

int findMin(int n, vector<int> &nums, int x, vector<vector<int>> dp) {
    if(n==1){
        if(x%nums[0] == 0) return x/nums[0];
        else return 1e9;
    }
    if(dp[n][x] != -1) return dp[n][x];
    int notTake = findMin(n-1, nums, x, dp);
    int take = INT_MAX;
    if(nums[n-1] <= x) take = 1 + findMin(n, nums, x - nums[n-1], dp);
    return dp[n][x] = min(take, notTake);
}

int minimumElements(vector<int> &nums, int x)
{
    int n = nums.size();
    vector<vector<int>> dp(n+1, vector<int>(x+1, -1));
    for(int j=0;j<=x;j++){
        if(j%nums[0] == 0) dp[0][j] = j/nums[0];
        else dp[0][j] = 1e9;
    }
    
    for(int i=1;i<n;i++) {
        for(int j=0;j<=x;j++) {
            int notTake = dp[i-1][j];
            int take = 1e9;
            if(nums[i] <= j) take = dp[i][j-nums[i]] + 1;
            dp[i][j] = min(take, notTake);
        }
    }
//     int ans = findMin(n, nums, x, dp);
    return dp[n-1][x] >= 1e9 ? -1 : dp[n-1][x];
}
