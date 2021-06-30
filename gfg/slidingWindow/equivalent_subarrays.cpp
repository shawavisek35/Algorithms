#include <bits/stdc++.h>
using namespace std;

int countDistinctSubarray(int arr[], int n)
{
        int count = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
    
        int i=0,j=0,p=m.size(),win=0;
        unordered_map<int,int> um;
    
    
        while(j<n){
            um[arr[j]]++;
            if(um.size()==p){
                while(um.size() == p){
                    
                    count += (n-j);
                    um[arr[i]]--;
                    if(um[arr[i]] == 0){
                        um.erase(arr[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return count;
}

int main(){
    int arr[] = {2, 4, 4, 2,     4};
    int n = 5;
    cout << countDistinctSubarray(arr, n) << "\n";
    return 0;
}