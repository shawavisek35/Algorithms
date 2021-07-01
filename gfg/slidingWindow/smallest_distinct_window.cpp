#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        vector<int> m(26,0);
        int i=0,j=0,count=0,win=INT_MAX;
        int ans;
        for(auto c : p){
            if(m[c-'a'] == 0){
                count++;
            }
            m[c - 'a']++;
            
        }
        
        while(j<s.size()){
            
                m[s[j] - 'a']--;
                if(m[s[j] - 'a'] == 0){
                    count--;
                }
            
            
            if(count == 0){
                while(count==0){
                    if(win > j-i+1){
                        ans = i;
                        win = min(win, j-i+1);
                    }
                    
                        
                        m[s[i] - 'a']++;
                        if(m[s[i] - 'a']>0){
                            count++;
                        }
                    
                    i++;
                    
                }
            }
            j++;
        }
        if(win == INT_MAX){
            return "-1";
        }
        return s.substr(ans,win);
    }
};