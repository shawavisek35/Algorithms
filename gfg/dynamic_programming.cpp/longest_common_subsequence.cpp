#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int dp[1001][1001];

    //bottom up memoization method
    int lcsUtil(int x, int y, string s1, string s2){
        //base condition 
        if(x==0 || y==0){
            return 0;
        }
        else if(dp[x][y] != -1){
            return dp[x][y];
        }
        else if(s1[x-1] == s2[y-1]){
            dp[x][y] = 1 + lcs(x-1, y-1, s1, s2);
            return dp[x][y];
        }
        else{
            dp[x][y] = max(lcs(x-1,y,s1,s2), lcs(x,y-1,s1,s2));
            return dp[x][y];
        }
    }

    //top down dp method;
    int lcs(int x, int y, string s1, string s2)
    {
        memset(dp, -1, sizeof(dp));
        
        int i,j;
        for(i=0;i<=y;i++){
            dp[0][i] = 0;
        }
        for(i=1;i<=x;i++){
            dp[i][0] = 0;
        }
        
        for(i=1;i<=x;i++){
            for(j=1;j<=y;j++){
               if(s1[i-1] == s2[j-1]){
                   dp[i][j] = 1 + dp[i-1][j-1];
               } 
               else{
                   dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
               }
            }
        }
        
        return dp[x][y];
    }
};