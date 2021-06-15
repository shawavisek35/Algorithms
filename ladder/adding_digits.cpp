#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,n,temp;
    cin >> a >> b >> n;
    temp = a;
    for(int i=0;i<=9;i++){
        temp = temp*10 + i;
        if(temp % b == 0){
            break;
        }
        temp = a;
    }
    if(temp == a){
        cout << -1 << "\n";
    }
    else{

        n--;
        a = temp;
        while(n--){
            a*=10;
        }
        cout << a << "\n";
    }
    return 0;
}