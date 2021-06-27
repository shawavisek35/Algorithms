#include <bits/stdc++.h>
using namespace std;
int lenOfLongSubarr(int A[], int N, int K){

    //code only for positive elements;
    // int i=0,j=0, window_size=INT_MIN;
    // long long sum=0;

    // while(j<N){
    //     sum += A[j];
    //     if(sum == K){
    //         window_size = max(window_size, j-i+1);
    //     }
    //     else if(sum > K){
    //         while(i<j && sum > K){
    //             sum -= A[i];
    //             i++;
    //         }
    //     }
    //     j++;
    // }
    // return window_size;

    //for negative elements also
    
        unordered_map<int, int> m;
        long long sum = 0;
        int window_size = 0;
    
        for(int i=0;i<N;i++){
            sum += A[i];
            if(sum == K){
                window_size = max(window_size, i+1);
            }
            if(m.find(sum) == m.end()){
                m[sum] = i;
            }
            if(m.find(sum-K) != m.end()){
                window_size = max(window_size, i-m[sum-K]);
            }
            
        }
        return  window_size;
}

int main(){

    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = 6;
    int k = 15;
    cout << lenOfLongSubarr(arr, n, k) << "\n";
    return 0;
}