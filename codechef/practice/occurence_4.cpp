#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int j, t, count=0;
    vector <string> numbers;
    string number;
    cin >> t;
    for(register int i=0;i<t;i++)
    {
        cin >> number;
        numbers.push_back(number);
    }
    for(j=0;j<t;j++)
    {
        count =0;
        number = numbers[j];
        for(int i=0;i<number.size();i++)
        {   
            if(number.at(i)=='4')
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;

}