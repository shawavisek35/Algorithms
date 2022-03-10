#include<bits/stdc++.h>
using namespace std;

int findProfit(vector<int> &weight, vector<int> &value, int n, int maxWeight, vector<vector<int>> &dp) {
    if(n==0) return 0;
    if(dp[n][maxWeight] != -1) return dp[n][maxWeight];
    if(weight[n-1] > maxWeight) return dp[n][maxWeight] = findProfit(weight, value, n-1, maxWeight, dp);
    return dp[n][maxWeight] = max(findProfit(weight, value, n-1, maxWeight, dp), findProfit(weight, value, n-1, maxWeight - weight[n-1], dp) + value[n-1]);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    vector<vector<int>> dp(n+1, vector<int>(maxWeight+1, -1));
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=maxWeight;j++) {
         	if(i==0 || j==0) dp[i][j] = 0;
            else {
                if(weight[i-1] > j) {
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i-1]] + value[i-1]);
                }
            }   
        }
    }
    return dp[n][maxWeight];
}

#include<bits/stdc++.h>
using namespace std;

//space optimised
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    vector<int> dp(maxWeight+1, 0);
    for(int i=0;i<=n;i++) {
        for(int j=maxWeight;j>=0;j--) {
            if(weight[i-1] <= j) dp[j] = max(dp[j], dp[j-weight[i-1]] + value[i-1]);
              
        }
    }
    return dp[maxWeight];
}
