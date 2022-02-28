#include<bits/stdc++.h>
using namespace std;
int mod = 3;
int findMax(int n, int i, vector<vector<int>> &points, int state, vector<vector<int>> &dp) {
    if(i==n) return 0;
    if(dp[i][state] != -1) return dp[i][state];
    int ans1 = findMax(n, i+1, points, (state+1)%mod, dp) + points[i][(state+1)%mod];
    int ans2 = findMax(n, i+1, points, (state+2)%mod, dp) + points[i][(state+2)%mod];
    return dp[i][state] = max(ans1, ans2);
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    int ans = INT_MIN;
    vector<vector<int>> dp(n, vector<int>(3, -1));
	for(int i=0;i<3;i++) {
        ans = max(ans, findMax(n, 1, points, i, dp) + points[0][i]);
    }
    return ans;
}
