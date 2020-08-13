#include <bits/stdc++.h>
using namespace std;

void findFrequency(string s)
{
    map <string,int> words;
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        words[word] ++;
    }
    for(auto t : words)
    {
        cout << t.first << " : " << t.second << "\n";
    }
    return;
}

int main()
{
    string s;
    getline(cin, s);
    findFrequency(s);
    return 0;
}