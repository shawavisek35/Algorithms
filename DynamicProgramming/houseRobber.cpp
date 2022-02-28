#include<bits/stdc++.h>
using namespace std;
long long int houseRobber(vector<int>& money)
{
    int n = money.size();
    if(n==1) return money[n-1];
    long long dp[n+1], dp2[n+1];
    dp[0] = money[0];
    for(int i=1;i<=n-2;i++) {
        long long take = money[i];
        if(i-2 >= 0) take += dp[i-2];
    	dp[i] = max(take, dp[i-1]);   
    }
    
    dp2[1] = money[1];
    for(int i=2;i<=n-1;i++) {
        long long take = money[i];
        if(i-2 >= 1) take += dp2[i-2];
    	dp2[i] = max(take, dp2[i-1]);   
    }
    return max(dp[n-2], dp2[n-1]);
}
