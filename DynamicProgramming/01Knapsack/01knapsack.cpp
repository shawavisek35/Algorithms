#include <bits/stdc++.h>
using namespace std;
int t[100][100];

int knapSack(int w[], int v[], int capacity, int n)
{
    if(n==0 || capacity==0)
    {
        return 0;
    }
    if(t[n][capacity]!=-1)
    {
        return t[n][capacity];
    }
    if(w[n-1]<=capacity)
    {
        t[n][capacity] = max(v[n-1]+knapSack(w,v,capacity-w[n-1],n-1),knapSack(w,v,capacity,n-1));
        return t[n][capacity];
    }
    else{
        t[n][capacity] = knapSack(w,v,capacity,n-1);
        return t[n][capacity];
    }

}

int main()
{
    memset(t, -1, sizeof(t));
    int v[] = {60,100,120};
    int w[] = {10,20,30};
    int capacity = 50;
    cout << knapSack(w,v,capacity,3) << "----------------" << t[3][capacity] <<  "\n";
    return 0;
}