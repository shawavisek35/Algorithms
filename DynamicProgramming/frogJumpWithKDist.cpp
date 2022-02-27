#include<bits/stdc++.h>
using namespace std;

int findMinEnergy(int n, int k, vector<int> &heights, int dp[]){
  if(n==0) return 0;
  if(dp[n] != -1) return dp[n];
  int minEnergy = INT_MAX;
  for(int j=1;j<=k;j++){
    if(i-j>=0) minEnergy = min(minEnergy, findMinEnergy(n-j, k, heights, dp)); 
  }
  return dp[n] = minEnergy;
}

inr frogJumpWithKDist(int n, int k, vector<int> &heights) {
  int dp[n+1];
  memset(dp, -1, sizeof(dp));
  return findMinEnergy(n-1. k, heights, dp);  
  
}
