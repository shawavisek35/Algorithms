#include<bits/stdc++.h>
using namespace std;

void prank(long long a[], int n){
        long long b[100];
        int i;
        unordered_map <int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[a[i]] = i;
        }
        
        for(i=0;i<n;i++)
        {
            b[mp[i]] = a[i];
        }

        for(i=0;i<n;i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
}

int main()
{
    long long a[100] = {4,3,2,1,0};
    int n=5;
    prank(a,n);
    return 0;
}