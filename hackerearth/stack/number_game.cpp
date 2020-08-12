#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll find_greatest(ll i, vector <ll> a, ll n)
{
	for(ll j=i+1;j<n;j++)
	{
		if(a[j]>a[i])
		{
			return j;
		}
	}
	return -1;
}

ll find_smallest(ll j, vector <ll> a, ll n )
{
	if(j==-1){
		return -1;
	}
	for(ll i=j+1;i<n;i++)
	{
		if(a[i]<a[j])
		{
			return a[i];
		}
	}
	return -1;
}

int main()
{
	ll n, i, element, great;
	vector <ll> a;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> element;
		a.push_back(element);
	}
	for(i=0;i<n;i++)
	{
		great = find_greatest(i,a,n);
		cout << find_smallest(great,a,n) << " ";
	}
	return 0;
}
