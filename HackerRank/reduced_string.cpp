string superReducedString(string s) {
    
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            s = s.substr(0, i-1) + s.substr(i+1);
            i = 0;
        }
    }
    
    return s.empty() ? "Empty String" : s;
}
