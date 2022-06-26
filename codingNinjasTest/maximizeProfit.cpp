#include<bits/stdc++.h>

int maximumProfit(int arr[], int n) {
    // Write your code here
    sort(arr, arr + n);
	int maxProfit = 0;
    for(int i=0;i<n;i++) {
        maxProfit = max(maxProfit, arr[i] * (n-i));
    }
    
    return maxProfit;
}
