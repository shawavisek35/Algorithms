//find duplicate in an array of integers

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n){
	int sum2 = 0, i, sum1;
	for(i=0;i<n;i++){
		sum2+=arr[i];
	}
	
	sum1 = (n-1)*n/2;
	
	return sum2-sum1;
	
}

int main(){
	int arr[] = {3,1,4,2,2};
	cout << findDuplicate(arr,5) << "\n";
	return 0;
}
