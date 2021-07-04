int lonelyinteger(vector<int> a) {
    int res = a[0];
    
    for(int i = 1; i < a.size(); i++) {
        res = res ^ a[i];
    }
    
    return res;
}
