class Solution{
public:

    int findCost(int arr[], int i, int j, vector<vector<int>> &dp) {
        if(i>=j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int minCost = INT_MAX;
        for(int k=i;k<j;k++) {
            int firstHalf = findCost(arr, i, k,dp);
            int secondHalf = findCost(arr, k+1, j, dp);
            int center = arr[i-1] * arr[k] * arr[j];
            minCost = min(minCost, firstHalf+secondHalf+center);
        }
        return dp[i][j] = minCost;
    }

    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N+1, vector<int> (N+1, -1));
        return findCost(arr, 1, N-1, dp);
    }
};
