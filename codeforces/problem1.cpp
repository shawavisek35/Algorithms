#include <iostream>
#include<vector>
using namespace std;

void solve(){
    long long n,m,i,j;
    string s;
    vector <int> index;
    cin >> n >> m;
    cin >> s;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(s[j] == '0'){
                if(j==0){
                    if(s[1] != '0'){
                        index.push_back(j);
                    }
                }
                else if(j==n-1){
                    if(s[n-2] != '0'){
                        index.push_back(j);
                    }
                }
                else{
                    if((s[j-1] != '0' && s[j+1] == '0') || (s[j-1] == '0' && s[j+1] != '0')){
                        index.push_back(j);
                    }
                }
            }
        }
        if(index.size()==0){
            break;
        }
        for(int k=0;k<index.size();k++){
            s[index[k]] = '1';
        }
        index.clear();
    }
    cout << s << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }

    return 0;
}