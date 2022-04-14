#include<bits/stdc++.h>
using namespace std;

void lis(vector<int> &arr, int n) {
    vector<int> dp(n+1, 1);
    int ansIndex = -1;
    int ans = INT_MIN;
    vector<int> lisIndex;
    for(int i=0;i<n;i++) {
        lisIndex.push_back(i);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(arr[i] > arr[j]) {
                if(dp[i] < 1+dp[j]) {
                    lisIndex[i] = j;
                    dp[i] = 1 + dp[j];
                }
            }
        }
        if(ans < dp[i]) {
            ans = dp[i];
            ansIndex = i;
        }
    }
    
    //printing lonhest Increasing Subsequences
    int i = ansIndex;
    deque<int> res;
    while(i != lisIndex[i]) {
        res.push_front(arr[i]);
        i = lisIndex[i];
    }
    res.push_front(arr[i]);
    for(auto it : res) {
        cout << it << " ";
    }
}

int main() {
    int n = 6;
    vector<int> arr = {1,4,5,3,6,7};
    lis(arr, n);
    return 0;
}
