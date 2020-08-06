#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int MAX = 26; 

void solve()
{
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
    int n,number,j,i;
    string a="",b="";
    vector <int> numbers;
    vector <string> charArray;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> number;
        numbers.push_back(number);
    }
    for(j=0;j<numbers[0];j++)
    {
        a = a+alphabet[rand()%MAX];
    }
    charArray.push_back(a);
    for(j=1;j<=n;j++)
    {
        b = a;

    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(register int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}