class Solution{
public:
	int search(string pat, string txt) {
	    int k = pat.size();
	    int n = txt.size();
	    int i = 0;
	    int j = 0;
	    int ans = 0;
	    int cnt = 0;
	    unordered_map<char, int> mp;
	    for(auto it : pat) {
	        mp[it]++;
	    }
	    cnt = mp.size();
	    while(j<n) {
	        if(mp.find(txt[j]) != mp.end()) {
	            mp[txt[j]]--;
	            if(mp[txt[j]] == 0) cnt--;
	        }
	        if(j-i+1 == k) {
	            if(cnt==0) ans++;
	            if(mp.find(txt[i]) != mp.end()) {
	                mp[txt[i]]++;
	                if(mp[txt[i]] == 1) cnt++;
	            }
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};
