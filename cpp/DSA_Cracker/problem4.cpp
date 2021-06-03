//Kth Largest element
#include <bits/stdc++.h>
using namespace std;

int kthLargest(int arr[], int n, int k){
	priority_queue <int, vector<int>, greater<int> > minH;
	for(int i=0;i<n;i++){
		minH.push(arr[i]);
		if(minH.size()>k){
			minH.pop();
		}
	}
	return minH.top();
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,11};
	int ans = kthLargest(arr,11,4);
	cout << ans << "\n";
	return 0;
}
