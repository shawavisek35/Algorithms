class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans;
        
        //Brute force
        // for(int i=0;i<n;i++) {
        //     int temp = -1;
        //     for(int j=i+1;j<n;j++) {
        //         if(arr[j] > arr[i]) {
        //             temp = arr[j];
        //             break;
        //         }
        //     }
        //     ans.push_back(temp);
        // }
        
        //Efficient approach using Stack
        stack<long long> st;
        for(int i=n-1;i>=0;i--) {
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                ans.push_back(-1);
            }
            else {
                ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
