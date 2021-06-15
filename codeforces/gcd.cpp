#include <iostream>
using namespace std;

int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd(y, x%y);
}

void solve()
{
    int n, arr[2001],count=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(arr[i], 2*arr[j]) > 1){
                count++;
            }
        }
    }
    cout << count << "\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}