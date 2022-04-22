int solution(vector<int> a) {
    unordered_map<int, int> mp;
    
    for(int x : a) {
        mp[x]++;
        if(mp[x] >= 2)
            return x;
    }
    
    return -1;
}
