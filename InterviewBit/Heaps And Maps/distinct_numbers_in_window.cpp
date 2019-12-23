vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> res;
    map<int, int> mp;
    
    for(int i = 0; i < B; i++)
        mp[A[i]]++;
        
    res.push_back(mp.size());
    
    int j = 0;
    for(int i = B; i < A.size(); i++) {
        if(mp[A[j]] == 1)
            mp.erase(A[j]);
        else   
            mp[A[j]]--;
        j++;
        mp[A[i]]++;
        res.push_back(mp.size());
    }
    
    return res;
}
