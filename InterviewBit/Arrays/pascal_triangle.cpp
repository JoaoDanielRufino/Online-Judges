vector<vector<int> > Solution::solve(int A) {
    vector< vector<int> > vet(A, vector<int>());
    
    if(!A)
        return vet;
    
    vet[0].push_back(1);
    for(int i = 1; i < A; i++) {
        vet[i].push_back(1);
        for(int j = 1; j < vet[i-1].size(); j++) {
            int aux = vet[i-1][j-1] + vet[i-1][j];
            vet[i].push_back(aux);
        }
        vet[i].push_back(1);
    }
    
    return vet;
}