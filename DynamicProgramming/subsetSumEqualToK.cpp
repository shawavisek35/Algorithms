#include<bits/stdc++.h>
using namespace std;

//memoized code
bool subsetSum(int n, int k, vector<int> &arr, vector<vector<int>> &dp) {
    if(n<=0 || k<0) return false;
    if(k==0) return true;
    if(dp[n][k] != -1) return dp[n][k];
    if(arr[n-1] > k) {
        //cannot include
        return subsetSum(n-1, k, arr, dp);
    }
    return dp[n][k] = subsetSum(n-1, k-arr[n-1], arr, dp) || subsetSum(n-1, k, arr, dp);
}

//tabulation method
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n+1, vector<bool>(k+1, false));
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=k;j++){
            if(j==0) dp[i][j] = true;
            else if(i==0) dp[i][j] = false;
            else {
                if(arr[i-1] > j) {
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
            }
        }
    }
    //return subsetSum(n, k, arr, dp);
    return dp[n][k];
}
