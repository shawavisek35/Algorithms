//merge overlapping intervals
#include <bits/stdc++.h>
using namespace std;

bool compareInterval(pair <int,int> p1, pair <int,int>p2){
	return p1.first < p2.first;
}

void overLapIntervals(vector <pair<int,int> > vp){
	sort(vp.begin(), vp.end(), compareInterval);
	pair <int,int> current = vp[0];
	int i=1;
	while(i<vp.size()){
		
		if(current.second>=vp[i].first){
			current = make_pair(current.first, vp[i].second);
		}
		else{
			current = vp[i];
		}
		i+=1;
		cout << current.first << ", " << current.second << " ";
	}
}

int main(){
	vector <pair<int, int> > vp;
	vp.push_back(make_pair(1,3));
	vp.push_back(make_pair(2,6));
	vp.push_back(make_pair(8,10));
	vp.push_back(make_pair(15,18));
	
	overLapIntervals(vp);
	return 0;
}
