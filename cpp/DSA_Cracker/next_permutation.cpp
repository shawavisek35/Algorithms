#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n){
	int i = n-1;
	int count = 0;
	while(i>0){
		if(arr[i]>arr[i-1]){
			break;
		}
		i--;
	}
	if(i==0){
		sort(arr, arr+n);
		return;
	}
	i--;
	int temp = arr[i];
	arr[i] = arr[n-1];
	arr[n-1] = temp;
	count = i+1;
	cout << count << "\n";
	sort(arr+count, arr+n);
}

int main(){
	int arr[] = {5,3,6,9,7,6};
	nextPermutation(arr, 6);
	for(int i=0;i<6;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
