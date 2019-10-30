vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> vet;
    map<int, int> mp;
    
    for(int i = 0; i < A.size(); i++) {
        int tmp = B - A[i];
        if(mp.count(tmp)) {
            vet.push_back(mp[tmp]+1);
            vet.push_back(i+1);
            break;
        }
        else {
            if(!mp.count(A[i]))
                mp[A[i]] = i;
        }
    }
    
    return vet;
}
