class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfitB = 0;
        int n = prices.size();
        vector<int> maxFront(n+1, 0);
        int stock = prices[0];
        for(int i=1;i<n;i++) {
            maxProfitB = max(maxProfitB, prices[i] - stock);
            stock = min(stock, prices[i]);
            maxFront[i] = max(maxFront[i-1], maxProfitB);
        }
        int maxProfitS = 0;
        vector<int> maxBack(n+1, 0);
        int stockS = prices[n-1];
        for(int i=n-2;i>=0;i--) {
            maxProfitS = max(maxProfitS, stockS - prices[i]);
            stockS = max(stockS, prices[i]);
            maxBack[i] = max(maxBack[i+1], maxProfitS);
        }
        int ans = 0;
        for(int i=0;i<n;i++) {
            ans = max(ans, maxFront[i] + maxBack[i]);
        }
        
        return ans;
    }
};
