#include<bits/stdc++.h>
using namespace std;

//Question similar to longest substring with k unique characters 
//Just problem story is different

int pickToys(string &s, int n, int k) {
    int i=0;
    int j=0;
    int ans = 0;
    unordered_map<char, int> mp;
    while(j<n) {
        mp[s[j]]++;
        if(mp.size() == k) {
            ans = max(ans, j-i+1);
        }
        else if(mp.size() > k) {
            while(i<n && mp.size()>k) {
                mp[s[i]] --;
                if(mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
            }
        } 
        j++;
    }
    return ans;
}

int main() {
    string s = "abaccab";
    cout << pickToys(s, s.size(), 2);
    return 0;
}
