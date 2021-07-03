string twoStrings(string s1, string s2) {
    unordered_map<char, bool> mp;
    
    for(char c : s1) {
        mp[c] = true;
    }
    
    for(char c : s2) {
        if(mp[c])
            return "YES";
    }
    
    return "NO";
}
