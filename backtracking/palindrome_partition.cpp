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

class Solution {
public:
    
    bool isPalindrome(string s, int start, int end) {
        int i=start;
        int j = end;
        while(i<j) {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    void findPalindromes(string s, int index, vector<string> out, vector<vector<string>> &ans) {
        if(index == s.size()) {
            ans.push_back(out);
            return;
        }
        for(int i=index;i<s.size();i++) {
            if(isPalindrome(s, index, i)){
                out.push_back(s.substr(index, i-index+1));
                findPalindromes(s, i+1, out, ans);
                //backtrack
                out.pop_back();
            }
        }
        return;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> out;
        int n = s.size();
        findPalindromes(s, 0, out, ans);
        return ans;
    }
};