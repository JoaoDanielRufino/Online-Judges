int Solution::isValid(string A) {
    stack<char> st;
    
    for(int i = 0; i < A.size(); i++) {
        if(!st.empty()) {
            if(st.top() == '(' && A[i] == ')')
                st.pop();
            else if(st.top() == '{' && A[i] == '}')
                st.pop();
            else if(st.top() == '[' && A[i] == ']')
                st.pop();
            else
                st.push(A[i]);
        }
        else
            st.push(A[i]);
    }
    
    return st.empty();
}
