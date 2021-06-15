#include<bits/stdc++.h>
using namespace std;

long long arraySum(long long arr[], int l, int h)
{
    long long sum = 0;
    for(int i=l;i<=h;i++){
        sum += arr[i];
    }
    return sum;
}

int findOccurence(long long arr[], int sum, long long n){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            long long s = arraySum(arr, i, j);
            if(s==sum){
                count++;
            }
        }
    }
    return count;
}

void solve(){
    long long n, arr[100000], max1 = INT64_MIN;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            long long sum = arraySum(arr,i,j);
            long long c = findOccurence(arr,n,sum);
            max1 = max(max1, sum*c);
        }
    }
    cout << max1 << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}