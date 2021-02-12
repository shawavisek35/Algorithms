#include<bits/stdc++.h>
using namespace std;

double changeTimeFormat(string s)
{
    int a,b,c;
    string s1 = "00";
    if(s[5]=='A')
    {
        if(to_string(s[0]+s[1])=="12")
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else if(s[5] == 'P')
    {
        if(to_string(s[0]+s[1]) != "12")
        {
            a = (int)s[0]-'0';
            b = (int)s[1] - '1';
            c = a*10 + b%10;
            s1 = to_string(c);
            s[0] = s1[0];
            s[1] = s1[1];
        }
    }
    return convertTime(s);
}

double convertTime(string s)
{
    return stof(s[0]+s[1])+(stof(s[3]+s[4])/100);
}

void solve()
{
    string startTime, answer="", time1, time2;
    int n,i;
    double st,t1,t2;
    cin >> startTime;
    st = convertTime(startTime);
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> time1 >> time2;
        t1 = changeTimeFormat(time1);
        t2 = changeTimeFormat(time2);
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
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}