int pairs(int k, vector<int> arr) {
    int count = 0;
    unordered_map<int, bool> mp;
    
    for(int x : arr) {
        mp[x] = true;
    } 
    
    for(int x : arr) {
        if(mp[k + x])
            count++;
    }
    
    return count;
}
