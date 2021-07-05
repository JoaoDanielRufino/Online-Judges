int luckBalance(int k, vector<vector<int>> contests) {
    int luck = 0;
    vector<int> aux;
    
    for(int i = 0; i < contests.size(); i++) {
        if(!contests[i][1])
            luck += contests[i][0];
        else
            aux.push_back(contests[i][0]);
    }
    
    sort(aux.begin(), aux.end());
    
    int size = aux.size();
    int diff = aux.size() - k;
    int i = 0;
    while(diff > 0 && i < aux.size()) {
        luck -= aux[i++];
        diff--;
    }
    
    while(i < aux.size()) {
        luck += aux[i++];
    }
    
    return luck;
}
