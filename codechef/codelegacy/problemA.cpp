#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    int number;
    string result = "YES";
    vector <int> numbers;
    cin >> n;
    if(n==1){
        cin >> number;
        if(number%2!=0){
            cout << "YES\n";
            return;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin >> number;
        numbers.push_back(number);
    }
    for(auto t : numbers)
    {
        if(t%2!=0 && t!=1){
            int i = 0;
            while(i<n){
                if(numbers[i]%number!=0);
                    result = "NO";
                    break;
                i ++;
            }
        }
    }
    cout << result << "\n";
}

int main(){
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