vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K){
    deque<long long> q;
    vector<long long> ans;
    long long i=0;
    long long j=0;
    while(j<N) {
        if(A[j] < 0) {
            q.push_back(A[j]);
        }
        if(j-i+1>=K) {
            if(q.empty()) {
                ans.push_back(0);
            }
            else {
                ans.push_back(q.front());
            }
            
            if(q.front() == A[i]) {
                q.pop_front();
            }
            i++;
        }
        j++;
    }
    return ans;
 }
