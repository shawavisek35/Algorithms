class Solution{
public:	

    int findMax(int n, int *arr, int dp[]) {
        if(n<0) return 0;
        //if(n==1 || n==2) return arr[n];
        if(dp[n] != -1) return dp[n];
        return dp[n] = max(findMax(n-1, arr, dp), findMax(n-2, arr, dp) + arr[n]);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int dp[n+1];
	    memset(dp, -1, sizeof(dp));
	    return findMax(n-1, arr, dp);
	}
};
