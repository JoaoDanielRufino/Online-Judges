// https://www.geeksforgeeks.org/painters-partition-problem-set-2/

int totalPainters(vector<int> C, int A, int mid) {
    int total = 1;
    long long int acc = 0;
    
    for(int i = 0; i < C.size(); i++) {
        acc += C[i];
        if(acc > mid) {
            acc = C[i];
            total++;
        }
    }
    
    return total;
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long int l, r, mid, sum, maxElem, res;
    
    sum = 0, maxElem = 0;
    for(int i = 0; i < C.size(); i++) {
        sum += C[i];
        maxElem = maxElem < C[i] ? C[i] : maxElem;
    }
    
    l = maxElem, r = sum;
    while(l <= r) {
        mid = l + (r - l) / 2;
        int painters = totalPainters(C, A, mid);
        
        if(painters <= A) {
            res = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    
    return (res * B) % 10000003;
}
