#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector<int> A, vector<vector<int>> B)
{
    vector <int> result;
    int i,l,r,j,k;
    for(i=0;i<B.size();i++)
    {
        l = B[i][0];
        r = B[i][1];
        int count = 0;
        for(j=l;j<r;j++)
        {
            for(k=l+1;k<=r;k++)
            {
                if(A[j]&A[k]>0)
                {
                    count=1;
                    break;
                }
            }
            if(count>0)
            {
                break;
            }
        }
    }
}

int main()
{
    
    return 0;
}