class Solution {
public:
    
    int findProfit(vector<int> &prices, int index, int n, int fee, vector<int> &dp) {
        if(index >= n) return 0;
        if(dp[index] != -1) return dp[index];
        //if i decide to buy the stock in ith day
        int maxProfit = 0;
        for(int i = index+1;i<n;i++) {
            if(prices[i] >= prices[i-1]) {
                maxProfit = max(maxProfit, prices[i] - prices[index] - fee + findProfit(prices, i, n, fee, dp));
            }
        }
        
        //if i decide not to buy it
        maxProfit = max(maxProfit, findProfit(prices, index+1, n, fee, dp));
        return dp[index] = maxProfit;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        //vector<int> dp(n+1, -1);
        
        //with state transition
        int noStock = 0;
        int inHand = -prices[0];
        int sold = 0;
        
        for(int i=1;i<n;i++) {
            inHand = max(inHand, noStock - prices[i]);
            sold = max(sold, inHand + prices[i] - fee);
            noStock = max(noStock, sold);
            
        }
        return sold;
        //return findProfit(prices, 0, n, fee, dp);
    }
};

//tabulation
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<int> dp(n+1, 0);
        
        //tabulation
        for(int i=n-2;i>=0;i--) {
            int maxProfit = 0;
            for(int j=i+1;j<n;j++) {
                if(prices[j] > prices[j-1]) {
                    int takeProfit = prices[j] - prices[i];
                    maxProfit = max(maxProfit, takeProfit - fee + dp[j]);
                } 
            }
            
            //if decided not to take not take
            dp[i] = max(maxProfit, dp[i+1]);
        }
        return dp[0];
    }
};


//state transition method
class Solution {
public:
    
    int findProfit(vector<int> &prices, int ind, int n, int fee, int buy, vector<vector<int>> &dp) {
        if(ind>=n) return 0;
        if(dp[buy][ind] != -1) return dp[buy][ind];
        if(buy) {
            return dp[buy][ind] = max(-prices[ind] + findProfit(prices, ind+1, n, fee, 0, dp), findProfit(prices, ind+1, n, fee, 1, dp));
        }
        else {
            return dp[buy][ind] = max(prices[ind] - fee + findProfit(prices, ind+1, n, fee, 1, dp), findProfit(prices, ind+1, n, fee, 0, dp));
        }
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(2, vector<int>(n+1,-1));
        //using state transition 
        //1 -> buy
        //0 -> cannot buy
        return findProfit(prices, 0, n, fee, 1, dp);
    }
};
