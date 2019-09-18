vector<int> Solution::allFactors(int A) {
    vector<int> vet;
    
    int a = sqrt(A);
    for(int i = 1; i <= a; i++) {
        if(!(A%i)) {
            vet.push_back(i);
            
            if(A/i != i)
                vet.push_back(A/i);
        }
    }
    
    sort(vet.begin(), vet.end());
    
    return vet;
}