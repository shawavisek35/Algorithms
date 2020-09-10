//Expressing a fraction in terms of egyption fraction 
//using greedy algorithm

#include <bits/stdc++.h>
using namespace std;

vector <int> findEgyptianFraction(int n, int d)
{
    if(n==0 || d==0)
    {
        cout << -1 << "\n";
        return;
    }
    else if(n%d==0)
    {
        cout << -1 << "\n";
        return;
    }
    else if(d%n==0)
    {
        cout << "1/" << d/n;
    }
    else if(n>d)
    {
        cout << n/d << "+";
    }
}

int main()
{
    int num,den;
    cin >> num >> den;
    findEgyptianFraction(num,den);
    return 0;
    
}