long triplets(vector<int> a, vector<int> b, vector<int> c) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
 
    a.erase(unique(a.begin(),a.end()),a.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    c.erase(unique(c.begin(),c.end()),c.end());
    
    int j = 0, k = 0;
    long count = 0;
    
    for(int i = 0; i < b.size(); i++){
        while(a[j] <= b[i] && j < a.size())
            j++;
            
        while(c[k] <= b[i] && k < c.size())
            k++;
            
        count += (long) j*k;
    }
    
    return count;
}
