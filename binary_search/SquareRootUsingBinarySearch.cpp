#include<bits/stdc++.h>
using namespace std;

int findSquareRoot(int n) {
    int i = 1;
    int j = n/2;
    int res = 0;
    while(i<=j) {
        int mid = (j-i)/2 + i;
        if(mid*mid <= n) {
            res = mid;
            i = mid + 1;
        }
        else {
            j = mid - 1;
        }
    }
    return res;
}
