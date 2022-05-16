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

//alternative way
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bd = 0;
        int sd = 0;
        int profit = 0;
        int n = prices.size();
        for(int i=1;i<n;i++) {
            if(prices[i] >= prices[i-1]) {
                sd ++;
            }
            else {
                profit += prices[sd] - prices[bd];
                bd = sd = i;
            }
        }
        profit += prices[sd] - prices[bd];
        return profit;
    }
};

//Another Implementation - Same Algorithm
int Solution::maxProfit(const vector<int> &A) {
    int profit = 0;
    int n = A.size();
    if(n <= 0) return 0;

    //gathering all the local profit;
    int minPrice = A[0];
    int i;
    for(i=1;i<n;i++) {
        if(A[i] >= A[i-1]) {
            continue;
        }
        else {
            profit += A[i-1] - minPrice;
            minPrice = A[i];
        }
    }

    return profit += A[i-1] - minPrice;
}

