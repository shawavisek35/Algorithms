class Solution {
public:
    int findPath(int m, int n, int srcR, int srcC, vector<vector<int>> &dp) {
        //base case
        if(srcR < 0 || srcR>=m || srcC<0 || srcC>=n) return 0;

        if (srcR == m-1 && srcC == n-1) return 1;

        if(dp[srcR][srcC] != -1) return dp[srcR][srcC];

        int tempAns1 = findPath(m, n, srcR, srcC+1, dp);
        int tempAns2 = findPath(m, n, srcR+1, srcC, dp);

        return dp[srcR][srcC] = tempAns1 + tempAns2;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return findPath(m, n, 0, 0, dp);
    }
};
