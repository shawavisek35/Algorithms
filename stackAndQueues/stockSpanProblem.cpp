class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       vector<int> ans;
       stack<int> st;
       //brute force method
    //   for(int i=0;i<n;i++) {
    //       int count = 0;
    //       for(int j=i;j>=0;j--) {
    //           if(arr[i] >= arr[j]) {
    //               count ++;
    //           }
    //           else {
    //               break;
    //           }
    //       }
    //       ans.push_back(count);
    //   }
       
       //Optimised approach
       //for evry index in array
       //find the nearest greater element to the left
       //so all the elements within that range will be consecutively smaller than the current index.
       //and that will be our answer
       for(int i=0;i<n;i++) {
           while(!st.empty() && arr[st.top()] <= arr[i]) {
               st.pop();
           }
           if(st.empty()) {
               ans.push_back(i + 1);
           }
           else {
               ans.push_back(i - st.top());
           }
           st.push(i);
       }
       
       return ans;
    }
};
