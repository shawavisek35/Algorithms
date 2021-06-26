#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct (int A[], int n, int k)
{
    vector <int> ans;
    int i=0,j=0;
    unordered_map<int,int> m;
    while(j<n){
        m[A[j]]++;
        if(j-i+1 == k){
            ans.push_back(m.size());
            m[A[i]]--;
            if(m[A[i]] == 0){
                m.erase(A[i]);
            }
            i++;
        }   
        j++;
    }
    return ans;
}

int main(){
    int arr[] = {1,2,1,3,4,2,3};
    int n = 7;
    int k = 4;
    vector <int> ans = countDistinct(arr, n, k);
    for(auto t : ans){
        cout << t << " ";
    } 
    return 0;
}