#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s) {
    int i=0;
    int j=s.size()-1;
    while(i<=j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void printAllPalindromes(string s, string res) {
    for(int i=1;i<=s.size();i++) {
        string prefix = s.substr(0,i);
        if(isPallindrome(prefix)) {
            if(i==s.size()) {
                res += prefix;
                cout << res << "\n";
            }
            printAllPalindromes(s.substr(i), res+prefix+" ");
        }
    }
}

int main() {
    printAllPalindromes("nitin", "");
    return 0;
}