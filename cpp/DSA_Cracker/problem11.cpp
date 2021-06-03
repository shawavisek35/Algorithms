//minimize the maximum difference between heights
#include<bits/stdc++.h>
using namespace std;
int minHeightDiff(int arr[], int n, int k){
	sort(arr, arr+n);
	
	int small = arr[0]+k;
	int big = arr[n-1]-k;
	
	if(small>big){
		swap(small, big);
	}
	
	int add, subtract;
	for(int i=1;i<n-1;i++){
		add = arr[i]+k;
		subtract = arr[i] - k;
		
		if(subtract>=small || add<=big){
			continue;
		}
		
		
		if(big-subtract <= add-small){
			small = subtract;
		}
		else{
			big = add;
		}
	}
	
	return big-small;
}

int main(){
	int k=3, arr[] = {1,5,15,10};
	cout << minHeightDiff(arr,4,k);
	return 0;
}
