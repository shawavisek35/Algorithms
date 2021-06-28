#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int N)
{
        unordered_map<int, int> m;
        
        int maxL = 0;
        long long sum = 0;
        
        for(int i=0;i<N;i++){
            if(arr[i] == 0){
                arr[i] = -1;
            }
        }
        
        for(int i=0;i<N;i++){
            sum += arr[i];
            if(sum == 0){
                maxL = max(maxL, i+1);
            }
            if(m.find(sum) == m.end()){
                m[sum] = i;
            }
            
            else{
                maxL = max(maxL, i-m[sum]);
            }
        }
        return maxL;

    
}

int main(){
    int arr[] = {0,0,1,0,0};
    int n = 5;
    int ans = maxLen(arr,5);
    cout << ans << "\n"; 
    return 0;
}