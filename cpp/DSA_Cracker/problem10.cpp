//Find Largest sum  contiguous sub array
#include<bits/stdc++.h>
using namespace std;

int LargestSum(int arr[], int n){
	int msf=0, maxi=INT_MIN;
	for(int i=0;i<n;i++){
		msf += arr[i];
		maxi = max(msf, maxi);
		if(msf<0){
			msf=0;
		}
	}
	return maxi;
}

int main(){
	int arr[] = {-2,-3,-4,-1,-2,-1,-5,-3};
	cout << LargestSum(arr, 8) << "\n";
	return 0;
}
