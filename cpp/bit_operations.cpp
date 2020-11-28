//printing the binary representation of a number

#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    for(int i=30;i>=0;i--)
    {
        if((x & (1<<i)) != 0)
        {
            cout << 1 << " ";
        }
        else{
            cout << 0 << " ";
        }
    }
    cout << "\n";
    return 0;
}