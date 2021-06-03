//moving all the negative elements to one side of the array
#include<bits/stdc++.h>
using namespace std;

void moveNegative(int arr[], int n){
	int left=0, right=n-1;
	while(left<right){
		if(arr[left]<0 && arr[right]<0){
			left++;
		}
		else if(arr[left]>0 && arr[right]>0){
			right--;
		}
		else if(arr[left]<0 && arr[right]>0){
			left++;
			right--;
		}
		else{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			right--;
			left++;
		}
	}
}

int main(){
	int arr[] = {1,2,-1,-34,5,12,-2,-35,13};
	moveNegative(arr, 9);
	
	//printing the array
	for(int i=0;i<9;i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
