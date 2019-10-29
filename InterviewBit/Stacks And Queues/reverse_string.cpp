string Solution::reverseString(string A) {
    string res;
    stack<char> st;
    
    for(int i = 0; i < A.size(); i++)
        st.push(A[i]);
        
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    
    return res;
}
