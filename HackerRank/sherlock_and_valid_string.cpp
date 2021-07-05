string isValid(string s) {
    vector<int> hash(26);
    map<int, int> mp;
    
    for(char c : s) {
        hash[c - 'a']++;
    }
    
    for(int x : hash) {
        if(x)
            mp[x]++;
    }
    
    if(mp.size() == 1)
        return "YES";
    if(mp.size() > 2)
        return "NO";
        
    auto it = mp.begin();
    pair<int, int> a = make_pair(it->first, it->second);
    it++;
    pair<int, int> b = make_pair(it->first, it->second);
    
    if(a.second == 1 || b.second == 1) {
        if(mp[min(a.first, b.first)] == 1 || abs(a.first - b.first) == 1)
            return "YES";
        return "NO";
    }
    
    return "NO";
}
