int Solution::colorful(int A) {
    vector<int> vet;
    set<int> myset;
    
    while(A != 0) {
        vet.push_back(A % 10);
        A /= 10;
    }
    
    for(int i = vet.size()-1; i >= 0; i--) {
        int aux = 1;
        for(int j = i; j >= 0; j--) {
            aux *= vet[j];
            if(myset.count(aux))
                return 0;
            myset.insert(aux);
        }
    }
    
    return 1;
}
