#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;

//for 0<=arr[i]<=n
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

int countPartitions(int n, int d, vector<int> &arr) {
    long long sum = 0;
    for(auto it : arr) sum += it;
    int target = sum-d;
    if((target & 1) || target < 0) return 0;
    vector<vector<int>> dp(n+1, vector<int>(target/2 + 1, -1));
    return subsetSum(arr, n, target/2, dp);
}


