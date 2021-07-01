int lowerBound(vector<int> vet, int target) {
    int l = 0, r = vet.size()-1;
    
    while(l <= r) {
        int mid = l + (r - l)/2;
        if(vet[mid] >= target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    
    return l;
}

double findMedian(vector<int> vet) {
    int size = vet.size();
    if(size & 1)
        return vet[size/2];
    return (vet[size/2-1] + vet[size/2]) / 2.0;
}

vector<double> runningMedian(vector<int> a) {
    vector<int> vet;
    vector<double> res;
    
    for(int x : a) {
        if(!vet.size()) {
            vet.push_back(x);
            res.push_back(x);
        }
        else {
            int lb = lowerBound(vet, x);
            vet.insert(vet.begin() + lb, x);
            res.push_back(findMedian(vet));
        }
    }
    
    return res;
}
