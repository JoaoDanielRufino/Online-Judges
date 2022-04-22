vector<vector<string>> solution(vector<vector<string>> dishes) {
    vector<vector<string>> res;
    map<string, vector<string>> mp;
    
    for(vector<string> dish : dishes) {
        for(int i = 1; i < dish.size(); i++) {
            mp[dish[i]].push_back(dish[0]);
        }
    }
    
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second.size() >= 2) {
            sort(it->second.begin(), it->second.end());
            it->second.insert(it->second.begin(), it->first);
            res.push_back(it->second);
        }
    }
    
    return res;
}
