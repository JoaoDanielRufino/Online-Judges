bool myComp(string a, string b) {
    return a + b > b + a;
}

string Solution::largestNumber(const vector<int> &A) {
    string res;
    vector<string> vet;
    
    for(int i = 0; i < A.size(); i++)
        vet.push_back(to_string(A[i]));
        
    sort(vet.begin(), vet.end(), myComp);
    
    for(int i = 0; i < vet.size(); i++) {
        if(i >= 1 && vet[i] != "0")
            res += vet[i];
        else if(!i)
            res += vet[i];
    }
    
    return res;
}
