#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int number;
    vector <int> array;
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        cin >> number;
        array.push_back(number);
    }
    sort(array.begin(),array.end());

    //printing the given vector
    for(auto t : array)
    {
        cout << t << "\n";
    }
    return 0;
}