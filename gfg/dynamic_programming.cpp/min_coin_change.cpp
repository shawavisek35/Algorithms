#include <bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[M+1][V+1];
	    for(int i=0;i<=V;i++){
	        dp[0][i] = INT_MAX-1;
	    }
	    
	    for(int j=1;j<=M;j++){
	        dp[j][0] = 0;
	    }
	    
	    for(int i=1;i<=V;i++){
	        if(i%coins[0] == 0){
	            dp[1][i] = i/coins[0];
	        }
	        else{
	            dp[1][i] = INT_MAX-1;
	        }
	    }
	    
	    for(int i=2;i<=M;i++){
	        for(int j=1;j<=V;j++){
	            if(coins[i-1]>j){
	                dp[i][j] = dp[i-1][j];
	            }
	            else{
	                dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-coins[i-1]]);
	            }
	        }
	    }
	    
	    if(dp[M][V] == INT_MAX-1){
	        return -1;
	    }
	    return dp[M][V];
	} 
	  
};