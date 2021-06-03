//Kth smallest element
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k){
	
	priority_queue <int> maxH;
	for(int i=0;i<n;i++){
		maxH.push(arr[i]);
		if(maxH.size()> k){
			maxH.pop();
		}
	}
	return maxH.top();
}

int main(){
	int arr[] = {1,3,2,4,5,61,10};
	int ans = kthSmallest(arr, 7, 3);
	cout << ans << "\n";
	return 0;
}
