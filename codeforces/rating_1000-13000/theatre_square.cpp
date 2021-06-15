#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	float n,m,a;
	cin >> n >> m >> a;
	if(a > max(n,m)){
		cout << 1 << "\n";
	}
	else{
		
		long long h_blocks = ceil(m/a);
		long long v_blocks = ceil((n-a)/a) * h_blocks;
		cout << h_blocks + v_blocks << "\n";
	}
	return 0;
}
