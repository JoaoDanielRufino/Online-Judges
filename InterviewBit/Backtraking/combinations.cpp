vector< vector<int> > res;

void solve(vector<int> vet, vector<int> curr, int size, int start) {
    if(curr.size() > size)
        return;
    
    if(curr.size() == size) {
        res.push_back(curr);
        return;
    }
    
    for(int i = start; i < vet.size(); i++) {
        curr.push_back(vet[i]);
        solve(vet, curr, size, i+1);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> vet, curr;
    
    for(int i = 1; i <= A; i++)
        vet.push_back(i);
       
    res.clear();   
      
    solve(vet, curr, B, 0);
    
    return res;
}
