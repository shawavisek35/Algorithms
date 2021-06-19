#include <bits/stdc++.h>
using namespace std;

void maxHeap(int arr[], int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<n && arr[r] > arr[largest]){
        largest = r;
    }

    if(largest!=i){
        swap(arr[largest], arr[i]);
        maxHeap(arr,n,largest);
    }
    return;
}

void buildHeap(int arr[], int n){
    //index of the last leaf node
    int i = (n/2)-1;

    for(int j=i;j>=0;j--){
        maxHeap(arr,n,j);
    }
}

int main(){
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    buildHeap(arr, n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}