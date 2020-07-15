#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    std :: string natya1,natya2;
    cin >> natya1 >> natya2;
    std :: for_each(natya1.begin() , natya1.end() , [](char & c){
        c = ::tolower(c);
    });

    std :: for_each(natya2.begin(),natya2.end() , [](char & c){
        c = :: tolower(c);
    });

    if(natya1<natya2)
    {
        printf("-1\n");
    }
    else if(natya2<natya1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}