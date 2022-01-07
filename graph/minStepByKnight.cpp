class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&s,vector<int>&d,int N)
	{
	    vector<pair<int, int>> moves = {{1,-2}, {1,2}, {-1,-2}, {-1,2}, {2,-1}, {2,1}, {-2,1}, {-2, -1}};
	    vector<bool> visited((N+1)*(N+1), false);
	    
	    queue<pair<pair<int, int>, int>> q;
	    q.push({{s[0], s[1]}, 0});
	    visited[s[0]*N + (s[1] + 1)] = true;
	    
	    while(!q.empty()) {
	        int x = q.front().first.first;
	        int y = q.front().first.second;
	        int dis = q.front().second;
	        q.pop();
	        
	        if(x==d[0] && y==d[1]) {
	            return dis;
	        }
	        
	        for(auto it : moves) {
	            int dx = x + it.first;
	            int dy = y + it.second;
	            
	            if(dx>0 && dy>0 && dx<=N && dy<=N && !visited[dx*N+(dy+1)]) {
	                q.push({{dx, dy}, dis+1});
	                visited[dx*N+(dy+1)] = true;
	            }
	        }
	    }
	    return -1;
	}
};