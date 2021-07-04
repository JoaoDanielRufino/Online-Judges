int maximumToys(vector<int> prices, int k) {
    int count = 0;
    
    sort(prices.begin(), prices.end());
    
    int i = 0;
    while(k >= 0 && i < prices.size()) {
        k -= prices[i++];
        count++;
    }
    
    return k >= 0 ? count : count-1;
}
