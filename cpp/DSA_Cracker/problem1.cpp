//reverse the array
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
	
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main()
{
	int i, arr[] = {1,2,3,4,5,67,9};
	
	int end = sizeof(arr)/sizeof(arr[0]);
	
	//before reverse
	for(i=0;i<end;i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	reverseArray(arr,0,end-1);
	//After reverse
	for(i=0;i<end;i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
