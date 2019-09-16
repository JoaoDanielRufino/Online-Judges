vector<int> Solution::maxset(vector<int> &A) {
    if(A.size() == 1 && A[0] >= 0) {
        return A;
    }
    
    vector< vector<int> > vet;
    vet.assign(A.size(), vector<int>());
    
    int j = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] >= 0) {
            vet[j].push_back(A[i]);
        }
        else {
            j++;
        }
    }
    
    long long int maxSum = -1LL;
    vector<int> res;
    for(int i = 0; i < A.size()-1; i++) {
        j = i + 1;
        long long int sumI = 0LL, sumJ = 0LL;
        for(int k = 0; k < vet[i].size(); k++) {
            sumI += vet[i][k];
        }
        for(int k = 0; k < vet[j].size(); k++) {
            sumJ += vet[j][k];
        }
        if(sumI > sumJ && maxSum < sumI) {
            maxSum = sumI;
            res = vet[i];
        }
        else if(sumJ > sumI && maxSum < sumJ) {
            maxSum = sumJ;
            res = vet[j];
        }
        else if(sumI == sumJ && maxSum < sumI) {
            if(vet[i].size() > vet[j].size())
                res = vet[i];
            else if(vet[i].size() < vet[j].size())
                res = vet[j];
            else
                res = vet[i];
            maxSum = sumI;
        }
    }
    
    return res;
}