#include <iostream>
#include <vector>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> array;
    int i,number;
    while(true)
    {
        cin >> number;
        if(number==42){
            break;
        }
        array.push_back(number);

    }

    //displaying array
    for(auto t : array)
    {
        cout << t << "\n";
    }

    return 0;
}