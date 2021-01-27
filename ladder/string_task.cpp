#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    //to convert an entire string to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(auto c : "aeiouy")
    {
        s.erase(remove(s.begin(), s.end(), c), s.end());
    }
    for(auto ch : s)
    {
        cout << '.' << ch;
    }
    cout << "\n";
    return 0;
}