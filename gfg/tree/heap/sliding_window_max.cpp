#include <bits/stdc++.h>
using namespace std;

vector <int> slidingWindowMax(int arr[], int n, int k){
    vector <int> ans;
    for(int i=0;i+k<=n;i++){
        int max1 = INT_MIN;
        for(int j=i;j<i+k;j++){
            max1 = max(max1, arr[j]);
        }
        ans.push_back(max1);
    }
    return ans;
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> ans = slidingWindowMax(arr, n, k);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}