void putInPosition(stack<int> &st, int element) {
    if(st.empty() || st.top() < element) {
        st.push(element);
        return;
    }
    int topMost = st.top();
    st.pop();
    putInPosition(st, element);
    st.push(topMost);
    return;
}

void SortedStack :: sort()
{
    if(s.empty()) {
        return;
    }
   int topMost = s.top();
   s.pop();
   sort();
   putInPosition(s, topMost);
   return;
}
