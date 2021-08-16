#include<bits/stdc++.h>
using namespace std;

int minMoves(int arr[], int n){
    int dp[n+1];
    dp[n] = 0;

    for(int i=n-1;i>=0;i--){
        if(arr[i] == 0){
            dp[i] = 9999999;
            continue;
        }
        int minI = dp[i+1];
        for(int j=arr[i];j>0;j--){
            if(j+i <= n){
                if(minI > dp[j+i]){
                    minI = dp[j+i];
                }
            }
        }
        dp[i] = minI+1;;
    }

    return dp[0];
}

int main(){
    int n, arr[21];
    cin >> n;
    for(register int i = 0;i<n;i++){
        cin >> arr[i];
    }

    cout << minMoves(arr, n) << "\n";
    return 0;
}

