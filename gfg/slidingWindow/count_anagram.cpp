#include <bits/stdc++.h>
using namespace std;

    bool checkAnagramEqual(unordered_map<char, int> um1, unordered_map<char, int> um2){
        for(auto t : um1){
            if(um2.find(t.first) == um2.end()){
                return false;
            }
            else if(um2[t.first] != t.second){
                return false;
            }
        }
        return true;
    }

int search(string pat, string txt) {
    int i=0,j=0,count=0;
    unordered_map<char, int> um1;
    unordered_map<char, int> um2;

    for(int i=0;i<pat.size();i++){
        um1[pat[i]]++;
    }

    while(j<txt.size()){
        um2[txt[j]]++;
        if(j-i+1 == pat.size()){
            if(checkAnagramEqual(um1, um2)){
                count ++;
            }
            um2[txt[i]]--;
            i++;
        }
        j++;
    }
    return count;
}

int main(){
    string pat = "aaba";
    string text = "aabaabaa ";
    int ans = search(pat, text);
    cout << ans << "\n"; 
    return 0;
}