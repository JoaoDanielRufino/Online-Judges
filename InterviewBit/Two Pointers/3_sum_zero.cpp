vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector< vector<int> > res;
    
    if(A.size() < 3)
        return res;
    
    set< vector<int> > myset; 
    int l, r;
    
    sort(A.begin(), A.end());
    
    for(int i = 0; i < A.size()-2; i++) {
        l = i + 1;
        r = A.size()-1;
       
        while(l < r) { 
            if((A[i] + A[l] + A[r]) < 0)
                l++;
            else if((A[i] + A[l] + A[r]) > 0)
                r--;
            else {
                vector<int> aux;
                
                aux.push_back(A[i]);
                aux.push_back(A[l]);
                aux.push_back(A[r]);
                
                if(!myset.count(aux))
                    res.push_back(aux);
                myset.insert(aux);
                l++;
                r--;
            }
        }
    }
    
    return res;
}

// Bracktraking, but it gives TLE

/*vector< vector<int> > res;
set< vector<int> > myset;

void solve(vector<int> A, vector<int> current, int start) {
    if(current.size() > 3)
        return;
        
    if(current.size() == 3) {
        if((current[0] + current[1] + current[2]) == 0) {
            if(!myset.count(current))
                res.push_back(current);
            myset.insert(current);
        }
        return;
    }
    
    for(int i = start; i < A.size(); i++) {
        current.push_back(A[i]);
        solve(A, current, i+1);
        current.pop_back();
    }
}

vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<int> current;
    
    res.clear();
    myset.clear();
    
    sort(A.begin(), A.end());
    
    solve(A, current, 0);
    
    return res;
}
*/