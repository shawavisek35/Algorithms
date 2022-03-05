#include<bits/stdc++.h>
using namespace std;

int subsetSum(int n, vector<int> &arr, int k, vector<vector<int>> &dp) {
    if(n==0 || k<0) return false;
    if(k==0) return true;
    if(dp[n][k] != -1) return dp[n][k];
    if(arr[n-1] > k) {
        return subsetSum(n-1, arr, k, dp);
    }
    return dp[n][k] = subsetSum(n-1, arr, k-arr[n-1], dp) || subsetSum(n-1, arr, k, dp);
}

bool canPartition(vector<int> &arr, int n)
{
	// Write your code here.
    int sum = 0;
    for(auto it : arr) {
        sum += it;
    }
    if(sum&1) return false;
    vector<vector<int>> dp(n+1, vector<int>(sum/2 + 1, -1));
    return subsetSum(n, arr, sum/2, dp);
}
