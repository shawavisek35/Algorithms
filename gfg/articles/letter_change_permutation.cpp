#include <bits/stdc++.h>
using namespace std;

//function to generate permutation of string by 
//changing the characters with the symbols.
void generateLetters(string s, int p, unordered_map<char, char> symbols){

    //Base condition
    if(p==s.size()){
        cout << s << " ";
        return;
    }

    string newS = s;
    newS = s.substr(0,p) + symbols[s[p]] + s.substr(p+1);

    //changing the character
    generateLetters(newS, p+1, symbols);

    //not changing the character
    generateLetters(s, p+1, symbols);
    return;
}

//driver's code
int main(){
    string s = "aBc";
    unordered_map <char, char> symbols;
    symbols['a'] = '$';
    symbols['B'] = '#';
    symbols['c'] = '^';
    symbols['d'] = '&';
    symbols['1'] = '*';
    symbols['2'] = '!';
    symbols['E'] = '@';

    //calling the function
    generateLetters(s, 0, symbols);
    return 0;
}