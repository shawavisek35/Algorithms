#include<bits/stdc++.h>
using namespace std;

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
    vector<int> ans;
    int i=0,j=0;
    list<int> l;
    int max1 = 0;

    while(j<n){
        max1 = max(max1, arr[j]);
        l.push_back(max1);

        if(j-i+1 == k){
            ans.push_back(max1);
            l.pop_front();
            i++;
            for(auto t : l){
                max1 = max(max1, t);
            }
        }
        j++;
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n=9, k=3;
    vector<int> ans = max_of_subarrays(arr,n,k);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}