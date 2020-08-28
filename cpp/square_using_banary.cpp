//checking if a number is square or not using binary search

#include <iostream>
using namespace std;

bool isSquare(int n)
{
    int lower = 0, higher = n/2+1;
    while(lower<=higher)
    {
        int mid = (lower+higher)/2;
        if(mid*mid == n)
        {
            return true;
        }
        else if(mid*mid > n)
        {
            higher = mid-1;
        }
        else{
            lower = mid+1;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if(isSquare(n))
    {
        cout << "Yes " << n << " is a perfect square number.\n";
    }
    else{
        cout << "No " << n << " is not a perfect square number.\n";
    }
    return 0;
}