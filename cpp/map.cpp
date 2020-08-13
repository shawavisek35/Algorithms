#include <iostream>
#include <map>
#include <vector>
using namespace std;

void findPairSum(vector <int> numbers, int sum)
{
    map <int,bool> traversed;
    map <int,bool>::iterator it;

    for(auto t : numbers)
    {
        it = traversed.find(sum-t);
        bool check = it->second;
        if(check)
        {
            cout << t << sum-t << "\n";
            return;
        }
        else{
            traversed.insert(make_pair(t,true));
        }
    }
    cout << "Pair does not exist" << "\n";
    return;
}

int main()
{
    map <int,bool> checked_words;
    vector <int> numbers;
    int number,i, n, sum;
    cin >> n >> sum;
    for(i=0;i<n;i++)
    {
        cin >> number;
        numbers.push_back(number);
    }
    findPairSum(numbers,sum);
    return 0;
}