int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] >= "0" && A[i] <= "9")
            st.push(stoi(A[i]));
        else {
            int a, b;
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            if(A[i] == "+") {
                st.push(b + a);
            }
            else if(A[i] == "-") {
                st.push(b - a);
            }
            else if(A[i] == "*") {
                st.push(b * a);
            }
            else {
                st.push(b / a);
            }
        }
    }
    
    return st.top();
}
