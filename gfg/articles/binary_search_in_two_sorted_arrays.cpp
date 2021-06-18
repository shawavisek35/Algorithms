#include<bits/stdc++.h>
using namespace std;

int slidingWindow(int arr[], int n, int k){
    int sum=0, i, max_sum=INT_MIN;
    for(i=0;i<k;i++){
        sum += arr[i];
    }
    for(;i<n;i++){
        sum = sum + arr[i] - arr[i-k];
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int maxSum(int arr1[], int n1, int arr2[], int n2, int k1, int k2){
    int max1 = slidingWindow(arr1, n1, k1);
    int max2 = slidingWindow(arr2, n2, k2);
    return max1+max2;
}

int main(){
    int arr1[] = {7, 1, 6, 13, 11, 9};
    int n1 = sizeof(arr1)/ sizeof(arr1[0]);

    int arr2[] = {17, 2, 30, 53, 22, 9};
    int n2 = sizeof(arr2)/ sizeof(arr2[0]);

    int k1 = 2, k2=3;

    int max_sum = maxSum(arr1, n1, arr2, n2, k1, k2);

    cout << max_sum << "\n";
    return 0;
}