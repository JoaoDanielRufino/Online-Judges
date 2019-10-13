vector<vector<int> > Solution::prettyPrint(int A) {
    int size = A + (A - 1);
    int iCenter, jCenter, tmpI, tmpJ;
    vector< vector<int> > vet(size, vector<int>());
    
    iCenter = jCenter = A - 1;
    for(int i = 0; i < vet.size(); i++) {
        for(int j = 0; j < vet.size(); j++) {
            tmpI = abs(iCenter - i);
            tmpJ = abs(jCenter - j);
            int max = tmpI >= tmpJ ? tmpI : tmpJ;
            vet[i].push_back(max + 1);
        }
    }
    
    return vet;
}
