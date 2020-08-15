#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve()
{
    int n,p,skill,min_hour = 0;
    cin >> n >> p;
    vector <int> skills;
    for(int i=0;i<n;i++){
        cin >> skill;
        skills.push_back(skill);
    }
    sort(skills.begin(), skills.end());
    int max_skill = skills.at(p-1);
    for(int i=0;i<p;i++)
    {
        if(skills[i]<max_skill)
        {
            min_hour += (max_skill-skills[i]);
        }
    }
    return min_hour;
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cout << "Case #" << i+1 << ": " << solve() << "\n";
    }
    return 0;
}