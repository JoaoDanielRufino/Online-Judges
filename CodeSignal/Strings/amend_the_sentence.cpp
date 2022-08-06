string solution(string s) {
    string ans;
    
    for(char c : s) {
        if(c >= 'A' && c <= 'Z') {
            if(!ans.size())
                ans += tolower(c);
            else {
                ans += " ";
                ans += tolower(c);
            }
        } else {
            ans += c;
        }
    }
    
    return ans;
}
