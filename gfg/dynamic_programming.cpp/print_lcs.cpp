#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
void printLCS(int n, int m, string s1, string s2){
    int i=n,j=m;
    cout << n << m <<"\n";
    string ans="";
    while(i!=0 && j!=0){
        if(s1[i-1] == s2[j-1]){
            ans = s1[i-1] + ans;
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }
            
        else{
            j--;
            
        }
    }
    cout << ans << "\n";
    return;

}

void lcs(string s1, string s2){
    int n = s1.size();
    int m = s2.size();

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }

            else{
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
    }

    cout << "LCS length : " << dp[n][m];

    printLCS(n,m,s1,s2);
    return;
}

int main(){
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    lcs(s1,s2);
    return 0;
}