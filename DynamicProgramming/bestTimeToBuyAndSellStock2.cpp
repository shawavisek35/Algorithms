class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = prices[0];
        int maxProfit = 0;
        int currProfit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++) {
            currProfit = prices[i] - price;
            if(currProfit > 0) {
                maxProfit += currProfit;
                price = prices[i];
            }
            else {
                price = min(price, prices[i]);
            }
        }
        return maxProfit;
    }
};
