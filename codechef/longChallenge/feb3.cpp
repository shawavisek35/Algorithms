#include<iostream>
using namespace std;


double convertTime(string s)
{
    double a,b,c,d;
    a = (int)s[0]-'0';
    b = (int)s[1]-'0';
    c = a*10+b;
    a = (int)s[3]-'0';
    b = (int)s[4]-'0';
    d = a*10+b;
    c+=d/100;
    return c;

}

double changeTimeFormat(string s)
{
    int a,b,c;
    string s1 = "00";
    if(s[5]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else if(s[5] == 'P')
    {
        if(not(s[0]=='1' && s[1]=='2'))
        {
            a = (int)s[0]-'0';
            b = (int)s[1] - '0';
            c = a*10 + b;
            s1 = to_string(c);
            s[0] = s1[0];
            s[1] = s1[1];
        }
    }
    return convertTime(s);
}


void solve()
{
    string startTime, answer="", time1, time2;
    int n,i;
    double st,t1,t2;
    getline(cin, startTime);
    st = convertTime(startTime);
    cin >> n;
    for(i=0;i<n;i++)
    {
        getline(cin, time1);
        getline(cin, time2);
        t1 = changeTimeFormat(time1);
        // t2 = changeTimeFormat(time2);
        if(st-t1<=0)
        {
            answer+="1";
        }
        else
        {
            answer+="0";
        }
    }
    cout << answer << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}