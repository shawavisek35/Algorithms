#include<bits/stdc++.h>
using namespace std;

string printLcs(string s, string t, vector<vector<int>> dp, int n, int m) {
    int i = n;
    int j = m;
    string ans = "";
    while(i>0 && j>0) {
        if(s[i-1] == t[j-1]) {
            ans = s[i-1] + ans;
            i--;
            j--;
        }
        else {
            if(dp[i-1][j] > dp[i][j-1]) {
                i--;
            }
            else {
                j--;
            }
        }
    }
    return ans;
}

int lcs(string s, string t, int n, int m) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << printLcs(s, t, dp, n, m) << "\n";
    return dp[n][m];
}



int main() {
    cout << lcs("brute", "te", 5, 5);
    return 0;
}
