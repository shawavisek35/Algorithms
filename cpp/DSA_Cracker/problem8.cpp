//union and intersection of two arrays
#include<bits/stdc++.h>
using namespace std;

void UnionandIntersection(int arr1[], int arr2[], int n1, int n2){
	set <int> s;
	set <int> ::iterator it; 
	for(int i=0;i<n1;i++){
		s.insert(arr1[i]);
	}
	
	//intersection
	for(int i=0;i<n2;i++){
		if(s.find(arr2[i]) != s.end()){
			cout << arr2[i] << " ";
		}
	}
	
	cout << "\n";
	
	//union
	for(int i=0;i<n2;i++){
		s.insert(arr2[i]);
	}
	
	for(it=s.begin(); it!=s.end();it++){
		cout << *it << " ";
	}
}

int main(){
	int arr1[] = {1,2,3,4,5,6,7};
	int arr2[] = {3,4,5};
	UnionandIntersection(arr1, arr2, 7, 3);
	return 0;
}
