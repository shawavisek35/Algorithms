#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    priority_queue <pair <ll,ll>, vector<pair<ll,ll>>, greater <pair<ll,ll>>> activity;
    vector <pair<ll,ll>> answer;
    ll i, start, finish,n;
    pair <ll,ll> current_finish;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> start >> finish;
        activity.push(make_pair(finish,start));
    }
    answer.push_back(activity.top());
    current_finish = activity.top();
    activity.pop();
    while(!activity.empty())
    {
        if(activity.top().second>=current_finish.first){
            answer.push_back(activity.top());
            current_finish = activity.top();
        }
        activity.pop();
    }
    
    cout << "Set of Mutually compatible activities : \n";
    for(auto t : answer)
    {
        cout << t.second << "," << t.first << "\n";
    }

}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}