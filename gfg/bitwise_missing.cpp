//Bitwise program to find the missing number in an array using Bitwise XOR
#include <iostream>
using namespace std;


int main()
{
    int n, a[100], i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int b=a[0], c=1;
    for(i=1;i<n;i++)
    {
        b ^= a[i];
        c ^= (i+1);
    }
    c^=i+1;
    int g = b^c;
    cout << g << "\n";
    
    return 0;
}