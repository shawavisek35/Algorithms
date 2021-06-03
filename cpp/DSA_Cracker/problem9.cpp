//program to cyclically rotate an array by one
#include <iostream>
using namespace std;

void rotateCyclically(int arr[], int n){
	int temp, i;
	temp = arr[n-1];
	for(i=n-1;i>0;i--){
		arr[i] = arr[i-1];
	}
	arr[i] = temp;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	
	//printing before rotation by one
	for(int i=0;i<9;i++){
		cout << arr[i] << " ";
	}
	
	cout << "\n";
	rotateCyclically(arr,9);
	//printing after rotation by one
	for(int i=0;i<9;i++){
		cout << arr[i] << " ";
	}
}
