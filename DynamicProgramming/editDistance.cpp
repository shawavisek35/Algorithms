class Solution {
public:
    
    int findMin(string &word1, string &word2, int n, int m, vector<vector<int>> &dp) {
        //base case
        if(n<0) return m+1;
        if(m<0) return n+1;
        
        if(dp[n][m] != -1) return dp[n][m];
        
        if(word1[n] == word2[m]) return dp[n][m] = findMin(word1, word2, n-1, m-1, dp);
        
        //if insert
        int inScore = findMin(word1, word2, n, m-1, dp) + 1;
        
        //if delete
        int delScore = findMin(word1, word2, n-1, m, dp) + 1;
        
        //if replace
        int repScore = findMin(word1, word2, n-1, m-1, dp) + 1;
        
        return dp[n][m] = min({inScore, delScore, repScore});
    }
    
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return findMin(word1, word2, n-1, m-1, dp);
    }
};
