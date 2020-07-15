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
    cout << array.back() << "\n";

    //derefrencing of the iterator pointer
    cout << *array.begin() << "\n";
    cout << *array.end() << "\n";

    cout << array.max_size() << "\n";
    cout << array.empty() << "\n";
    array.clear();
    return 0;
}