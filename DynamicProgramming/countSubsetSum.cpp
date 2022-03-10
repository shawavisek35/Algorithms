#include<bits/stdc++.h>
using namespace std;

//if 1<=arr[i]<=n;

int countSum(vector<int> &nums, int n, int target, vector<vector<int>> &dp) {
    if(target==0) return 1;
    if(dp[n][target] != -1) return dp[n][target];
    if(n==0 || target<0) {
        return 0;
    }
    
    if(nums[n-1] > target) {
        return countSum(nums, n-1, target, dp);
    }
    return dp[n][target] = countSum(nums, n-1, target, dp) + countSum(nums, n-1, target - nums[n-1], dp);
}

int findWays(vector<int> &nums, int tar)
{
    
    int n = nums.size();
    vector<vector<int>> dp(n+1, vector<int>(tar+1, -1));
    return countSum(nums, n, tar, dp);
}

////if 0<=arr[i]<=n;
int subsetSum(vector<int> &arr, int n, int target, vector<vector<int>> &dp) {
    if(n == 1){
        if(target == 0 && arr[0] == 0) return 2;
        if(target == 0 || target == arr[0]) return 1;
        return 0;
    }
    
    if(dp[n][target] != -1) return dp[n][target];
    if(arr[n-1] > target) return dp[n][target] = subsetSum(arr, n-1, target, dp);
    return dp[n][target] = (subsetSum(arr, n-1, target, dp)%mod + subsetSum(arr, n-1, target-arr[n-1], dp)%mod)%mod;
}
