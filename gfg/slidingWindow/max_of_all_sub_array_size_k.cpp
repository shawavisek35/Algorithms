#include <bits/stdc++.h>
using namespace std;

vector <int> max_of_subarrays(int arr[], int n, int k)
{
    int i=0,j=0;
        list<int> pq;
        vector <int> ans;
        while(j<n){
            while(!pq.empty() && pq.back()<arr[j]){
                pq.pop_back();
            }
            pq.push_back(arr[j]);
            if(j-i+1 == k){
                ans.push_back(pq.front());
                if(arr[i] == pq.front()){
                    pq.pop_front();
                }
                i++;
            }
            j++;
        }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = 9;
    int k = 3;
    vector <int> ans = max_of_subarrays(arr, n, k);
    for(auto t : ans){
        cout << t << " ";
    } 
    return 0;
}