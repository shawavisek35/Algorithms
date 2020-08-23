#include <iostream>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.size();i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if(s1>s2)
    {
        cout << "1\n";
    }
    else if(s1<s2){
        cout << "-1\n";
    }
    else{
        cout << "0\n";
    }
    return 0;
}