//Given an array consists of 0, 1, 2. Sort the array without sorting algorithm
#include <bits/stdc++.h>
using namespace std;

void sortWithoutSorting(int arr[], int n){
	int left=0, mid=0, right=n-1;
	while(mid<right){
		if(arr[mid]==1){
			mid++;
		}
		else if(arr[mid]==0){
			int temp = arr[left];
			arr[left] = arr[mid];
			arr[mid] = temp;
			mid++;
			left++;
		}
		else{
			int temp = arr[mid];
			arr[mid] = arr[right];
			arr[right] = temp;
			right--;
		}
	}
}

int main(){
	int arr[] = {0,1,2,1,0,1,2,1,0};
	sortWithoutSorting(arr, 9);
	
	//printing the sorted array
	for(int i=0;i<9;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
