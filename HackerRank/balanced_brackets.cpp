string isBalanced(string s) {
    stack<char> st;
    
    for(char c : s) {
        if(!st.empty()) {
            if(c == '}' && st.top() == '{') {
                st.pop();
            } else if(c == ']' && st.top() == '[') {
                st.pop();
            } else if(c == ')' && st.top() == '(') {
                st.pop();
            } else {
                st.push(c);
            }
        } else {
            st.push(c);
        }
    }
    
    return !st.empty() ? "NO" : "YES";
}
