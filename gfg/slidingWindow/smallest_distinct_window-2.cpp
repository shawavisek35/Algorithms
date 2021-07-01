#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string findSubString(string str)
    {
        vector <int> a(256,0);
        int i=0,j=0,win=INT_MAX, count=0,res=0;
        for(auto c : str){
            if(a[c] == 0){
                count++;
                a[c] = 1;
            }
        }
        
        while(j<str.size()){
            a[str[j]]--;
            if(a[str[j]] == 0){
                count--;
            }
            
            if(count==0){
                while(count == 0){
                    if(win>j-i+1){
                        win = min(win, j-i+1);
                        res = i;
                    }
                    a[str[i]]++;
                    if(a[str[i]] > 0){
                        count++;
                    }
                    i++;
                }
            }
            j++;
        }
        return str.substr(res,win);
    }
};