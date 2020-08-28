#include <iostream>
#include <set>
#include <cstring>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    char alpha[1000];
    set <char> alphabets;
    cin.getline(alpha,1000);

    char *token = strtok(alpha, ",");
    while(token!=NULL)
    {
        if(token[1]!='}'){
            alphabets.insert(token[1]);
        }
        token = strtok(NULL,",");
    }
    
    cout << alphabets.size() << "\n";
    return 0;
}