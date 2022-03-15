#include<bits/stdc++.h>
using namespace std;

int findLcs(string s, int n1, string t, int n2, vector<vector<int>> &dp) {
    if(n1 < 0 || n2 < 0) return 0;
    if(dp[n1][n2] != -1) return dp[n1][n2];
    if(s[n1] == t[n2]) return dp[n1][n2] = 1 + findLcs(s, n1-1, t, n2-1, dp);
    return dp[n1][n2] = max(findLcs(s, n1-1, t, n2, dp), findLcs(s, n1, t, n2-1, dp));
}

int lcs(string s, string t)
{
    int n1 = s.size();
    int n2 = t.size();
    vector<vector<int>> dp(n1+1, vector<int>(n2 + 1, 0));
    for(int i=0;i<n2;i++) {
        if(s[0] == t[i]) dp[0][i] = 1;
    }
    for(int i=0;i<n1;i++) {
        if(s[i] == t[0]) dp[i][0] = 1;
    }
    for(int i=1;i<n1;i++) {
        for(int j=1;j<n2;j++) {
			if(s[i] == t[j]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
	return dp[n1-1][n2-1];	
}
