#include <iostream>
using namespace std;

long long bin_exp_mod(int a, int b,int m)
{
    long long res = 1;
    while(b)
    {
        if(b&1){
            res=(res*a)%m;
        }
        a = (a*a)%m;
        b/=2;
    }
    return res;
}

int main()
{
    cout << bin_exp_mod(50,100,13) << "\n";
    return 0;
}