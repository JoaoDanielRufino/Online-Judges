vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res;
    unordered_map<string, int> mp;
    
    for(string s : strings)
        mp[s]++;
        
    for(string s : queries)
        res.push_back(mp[s]);
    
    return res;
}
