vector<int> freqQuery(vector<vector<int>> queries) {
    unordered_map<int, int> mp;
    unordered_map<int, int> hash;
    vector<int> res;
    
    for(int i = 0; i < queries.size(); i++) {
        if(queries[i][0] == 1) {
            hash[mp[queries[i][1]]]--;
            mp[queries[i][1]]++;
            hash[mp[queries[i][1]]]++;
        } else if(queries[i][0] == 2 && mp[queries[i][1]] > 0) {
            hash[mp[queries[i][1]]]--;
            mp[queries[i][1]]--;
            hash[mp[queries[i][1]]]++;
        } else if(queries[i][0] == 3) {
            if(hash[queries[i][1]])
                res.push_back(1);
            else
                res.push_back(0);
        }
    }
    
    return res;
}
