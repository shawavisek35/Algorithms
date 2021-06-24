#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    long long i=0,j=0;
    list <long long> l;
    vector <long long> ans;
    
    while(j<N){
        if(A[j] < 0){
            l.push_back(A[j]);
        }
        if(j-i+1 == K){
            if(l.empty()){
                ans.push_back(0);
            }
            else{

                ans.push_back(l.front());
            }
            if(A[i] == l.front()){
                l.pop_front();
            }
            i++;
        }

        j++;
    }
    return ans;
}

int main(){
    long long arr[] = {-8, 2, 3, -6, 10};
    vector <long long> ans = printFirstNegativeInteger(arr, 5, 2);
    for(auto t : ans){
        cout << t << " ";
    }
    return 0;
}