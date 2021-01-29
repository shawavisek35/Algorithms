#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 9,inter=0;
    string s;
    while(n!=0)
    {
        inter = n%9;
        s.append(to_string(inter));
        n/=9;
    }
    reverse(s.begin(),s.end());
    cout << stoi(s) << "\n";
    return 0;
}