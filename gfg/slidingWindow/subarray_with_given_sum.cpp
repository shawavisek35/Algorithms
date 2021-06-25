#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int s)
{
    int i=0,j=0;
    int sum=arr[0];
    
    while(j<n){
        if(sum == s){
            return {i+1, j+1};
        }
        else if(sum < s){
            j++;
            sum += arr[j];
        }
        else{
            sum -= arr[i];
            i++;
        }
    }
    
    return {-1};
}

int main(){
    int arr[] = {1,2,3,7,5};
    vector <int> ans = subarraySum(arr, 5,12);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}