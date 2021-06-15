#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	string s;
    cin >> s;
    if(!isupper(s[0])){
        s[0] = s[0] - 32;
    }
    transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
    cout << s << "\n";
	return 0;
}
