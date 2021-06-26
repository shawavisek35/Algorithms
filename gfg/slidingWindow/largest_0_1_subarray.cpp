#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int N)
{
    int i=0,j=0,maxS = INT_MIN, sum=0;
    for(i=0;i<N;i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
        i=0;
        while(j<N){
            sum += arr[j];
            if(sum==0){
                maxS = max(maxS, j-i+1);
            }
        }
    }

    
}

int main(){
    int arr[] = {0,0,1,0,0};
    int n = 5;
    int ans = maxLen(arr,5);
    cout << ans << "\n"; 
    return 0;
}