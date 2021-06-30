#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubsttr(string S){
        
        int i=0,j=0,maxLen = 0;
        vector<int> m(26,0);
        int n = S.size();
        while(j<n){
            m[S[j] - 'a']++;
            while(m[S[j] - 'a']>1){
                m[S[i] - 'a']--;
                i++;
            }
            int t = j-i+1;
            maxLen = max(maxLen, t);
            j++;
        }
    
        return maxLen;
}

int main(){
    string s = "abdefgabef";
    cout << longestUniqueSubsttr(s) << "\n";
    return 0;
}