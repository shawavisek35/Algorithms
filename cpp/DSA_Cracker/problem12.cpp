//Minimise number of jumps to reach the end of the array
#include<bits/stdc++.h>
using namespace std;

int minSteps(int arr[], int n){
	int dp[n+1];
	dp[0] = 0;
	for(int i=1;i<n;i++){
		dp[i] = INT_MAX;
		for(int j=0;j<i;j++){
			if (i <= j + arr[j] && dp[j] != INT_MAX) {
                dp[i] = min(dp[i], dp[j] + 1);
                break;
            }		}
	}
	return dp[n-1];
}

int main(){
	int arr[] = {1,3,6,1,0,9};
	cout << minSteps(arr,6) << "\n";
	return 0;
}
