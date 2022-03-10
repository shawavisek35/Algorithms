#include<bits/stdc++.h>
using namespace std;

//if the input array contains 0 as well
//then the result will be 
//let n be the total no. of zeros present
//result = poy(2, n) * ans;

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
