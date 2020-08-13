#include <iostream>
#include <stack>
#include <string>
using namespace std;
typedef long long ll;

char checkParan(char c)
{
    if(c=='('){
        return ')';
    }
    else if(c=='{'){
        return '}';
    }
    else{
        return ']';
    }
}

void solve(string s)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack <int> bracket;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(checkParan(bracket.top()) != s[i]){
                cout << "NO" << "\n";
                return;
            }
            else{
                bracket.pop();
            }
        }
        else{
            bracket.push(s[i]);
        }
    }
    cout << "YES" << "\n";
}

int main()
{
    int n;
    string s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        solve(s);
    }
    return 0;
}