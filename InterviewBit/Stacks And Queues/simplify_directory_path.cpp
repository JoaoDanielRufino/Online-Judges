string Solution::simplifyPath(string A) {
    string aux;
    stack<string> st;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == '.' && A[i+1] != '.')
            continue;
        if(A[i] != '/')
            aux += A[i];
        if(A[i] == '/') {
            if(aux == ".")
                aux.clear();
            if(!aux.empty()) {
                st.push(aux);
                aux.clear();
            }
        }
        else if(A[i] == '.' && A[i+1] == '.' && !st.empty()) {
            st.pop();
            aux.clear();
        }
    }
    
    if(!aux.empty() && aux != "." && aux != "..")
        st.push(aux);
        
    if(st.empty())
        return "/";
    
    aux.clear();
    while(!st.empty()) {
        aux = "/" + st.top() + aux;
        st.pop();
    }
    
    return aux;
}
