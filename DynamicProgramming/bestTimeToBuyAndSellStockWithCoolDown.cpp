class Solution {
public:
    
    int findProfit(vector<int> &prices, int index, int n, vector<int> &dp) {
        if(index >= n) return 0;
        if(dp[index] != -1) return dp[index];
        //if I decide to buy in the indexth day
        int maxProfit = 0;
        for(int i=index+1;i<n;i++) {
            if(prices[i] >= prices[i-1]) {
                maxProfit = max(maxProfit, prices[i] - prices[index] + findProfit(prices, i+2, n, dp));
            }
        }
        
        //if i decide not to buy
        maxProfit = max(maxProfit, findProfit(prices, index+1, n, dp));
        return dp[index] = maxProfit;
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //vector<int> dp(n+1, -1);
        
        //with state transition
        int noStock = 0;
        int inHand = -prices[0];
        int sold = 0;
        
        for(int i=1;i<n;i++) {
            inHand = max(inHand, noStock - prices[i]);
            noStock = max(noStock, sold);
            sold = max(sold, inHand + prices[i]);
        }
        //return findProfit(prices, 0, n, dp);
        return sold;
    }
};
