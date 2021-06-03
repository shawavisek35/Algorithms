#include <iostream>
using namespace std;

int Binary_expo_recursive(int a, int b)
{
    if(b==0) return 1;
    int temp = Binary_expo_recursive(a, b/2);
    int res = temp*temp;
    if(b&1){
        res = res*a;
    }
    return res;
}

int Binary_expo_iterative(int a, int b)
{
    int res=1;
    while(b){
        if(b&1) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main()
{
    int a=5,b=6;
    cout << Binary_expo_recursive(a,b) << "\n";
    cout << Binary_expo_iterative(a,b) << "\n";
    return 0;
}