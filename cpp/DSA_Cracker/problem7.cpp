//union of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int arr1[] = {1,2,3,4,5,6};
	int arr2[] = {3,4,5};
	
	set <int> s;
	for(int i=0;i<6;i++){
		s.insert(arr1[i]);
	}
	
	for(int i=0;i<3;i++){
		s.insert(arr2[i]);
	}
	set <int> :: iterator itr;
	for(itr=s.begin(); itr!=s.end();itr++){
		cout << *itr << " ";
	}
	return 0;
}
