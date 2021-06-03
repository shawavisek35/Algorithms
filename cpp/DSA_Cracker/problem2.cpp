//Find min max
#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1, 13, 25, 300, 23, 74, 389};
	int n = sizeof(arr)/sizeof(arr[0]);
	int min=arr[0], max=arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
		else if(min > arr[i]){
			min = arr[i];
		}
	}
	
	cout << "Max : " << max << "\n";
	cout << "Min : " << min << "\n";
	return 0;
}
