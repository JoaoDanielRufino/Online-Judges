void whatFlavors(vector<int> cost, int money) {
    unordered_map<int, int> mp;
    int posI, posJ;
    
    for(int i = 0; i < cost.size(); i++) {
        int diff = money - cost[i];
        if(mp.count(diff)) {
            posI = mp[diff];
            posJ = i+1;
        }
        mp[cost[i]] = i+1;
    }
    
    cout << posI << " " << posJ << endl;
}
