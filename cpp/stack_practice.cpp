#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    cout << st.empty() << "\n";
    cout << st.size() << "\n";

    vector <int> v;
    list <int> l;
    queue <int> q;
    deque <int> dq;
    priority_queue <int> pq;
    
    return 0;
}