int aggressiveCows(vector<int> &stalls, int k)
{
	sort(stalls.begin(), stalls.end());
	int n = stalls.size();
	int i = 1;
	int j = -1;
	for(auto it : stalls) j = max(j,it);
	int ans = j;
	while(i<=j) {
		int mid = i + (j - i)/2;
		int sum = 0;
		int cnt = 0;
		for(int m=0;m<n;m++) {
			sum += stalls[m];
			if(sum >= mid) {
				sum = 0;
				cnt ++;
			}
		}
		if(cnt >= k+1) {
			ans = mid;
			i = mid + 1;
		}
		else {
			j = mid -1;
		}
	}
	return ans;
}   
