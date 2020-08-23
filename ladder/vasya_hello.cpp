#include <iostream>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int j=0;
    string hello, hello1 = "hello";
    cin >> hello;
    for(int i=0;i<hello.size();i++)
    {
        if(hello[i] == hello1[j])
        {
            j++;
        }
    }
    if(j == 5)
    {
        cout << "YES" << "\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}