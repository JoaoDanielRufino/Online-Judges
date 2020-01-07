int Solution::majorityElement(const vector<int> &A) {
    map<int, int> mp;
    
    for(int i = 0; i < A.size(); i++)
        mp[A[i]]++;
        
    map<int, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++) {
        if(it->second > A.size()/2)
            return it->first;
    }
    
    return -1;
}

// Probability method
/*
int Solution::majorityElement(const vector<int> &A) {
    for(int i = 0; i < 24; i++) {
        int r = rand() % A.size();
        int count = 0;
        for(int j = 0; j < A.size(); j++) {
            if(A[j] == A[r])
                count++;
            if(count > A.size()/2)
                return A[r];
        }
    }
    
    return -1;
}
*/