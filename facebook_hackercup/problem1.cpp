#include<bits/stdc++.h>
using namespace std;
static ofstream op;


void solve(int t){
    string input;
    cin >> input;
    if(input.size() == 1 || input.size() == 0){
        op << "Case #" << t << ": " << 0 << "\n";
        return;
    }
    unordered_map<char, int> vowels;
    unordered_map<char, int> con;
    for(auto ch : input){
        if(ch == 'A' || ch == 'U' || ch == 'O' || ch == 'I' ||ch == 'E'){
            vowels[ch]++;
        }
        else{
            con[ch]++;
        }
    }
    int maxC = INT_MIN;
    char c;
    if(vowels.size() > con.size()){
        for(auto t : con){
            if(maxC < t.second){
                maxC = t.second;
                c = t.first;
            }
            
        }

        con[c] = 0;
        int ans = 0;
        for(auto m : vowels){
            ans += m.second;
        }

        for(auto f : con){
            ans += f.second*2;
        }
        op << "Case #" << t << ": " << ans << "\n";
        return;
    }
    else{
        for(auto t : vowels){
            if(maxC < t.second){
                maxC = t.second;
                c = t.first;
            }
            
        }

        vowels[c] = 0;
        int ans = 0;
        for(auto m : con){
            ans += m.second;
        }

        for(auto f : vowels){
            ans += f.second*2;
        }
        op << "Case #" << t << ": " << ans << "\n";
        return;
    }    
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    op.open("answer_chapter1.txt");
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        solve(i+1);
    }
    return 0;
}