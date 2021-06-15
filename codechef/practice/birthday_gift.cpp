#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,i;
    long long arr[1001],sum1=0,sum2=0;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+n, greater<int>());
    
    for(i=0;i<n;i+=2){
        if(i >= 2*k){
            sum2 += arr[i];
            break;
        }
        sum1 += arr[i];
        sum2 += arr[i+1];
    }
    cout << max(sum1, sum2) << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    solve();
	}
	return 0;
}
