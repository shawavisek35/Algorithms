#include<bits/stdc++.h>
using namespace std;

int findMin(int n, vector<int> &heights, int dp[]) {
    if(n==0) return 0;
    if(dp[n] != -1) return dp[n];
   	int rEnergy = INT_MAX;
    int lEnergy = findMin(n-1, heights, dp) + abs(heights[n-1] - heights[n]);
    if(n>1) rEnergy = findMin(n-2, heights, dp) + abs(heights[n-2] - heights[n]);
    return dp[n] = min(lEnergy, rEnergy);
}

int frogJump(int n, vector<int> &heights) {
    int dp[n+1];
    memset(dp, -1, sizeof(dp));
    return findMin(n-1, heights, dp);
}

