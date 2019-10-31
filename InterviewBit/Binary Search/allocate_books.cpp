// https://www.youtube.com/watch?v=Ss9ta1zmiZo

bool OK(vector<int> A, int B, int mid) {
    int currStudents = 1;
    int acc = 0;
    
    for(int i = 0; i < A.size(); i++) {
        acc += A[i];
        if(acc > mid) {
            acc = A[i];
            currStudents++;
        }
        
        if(currStudents > B)
            return false;
    }
    
    return true;
}

int Solution::books(vector<int> &A, int B) {
    if(A.size() < B)
        return -1;
    
    int l, r, mid, sum = 0, res = 0, maxElem = 0;
    
    
    for(int i = 0; i < A.size(); i++) {
        sum += A[i];
        maxElem = max(maxElem, A[i]);
    }
        
    l = maxElem;
    r = sum;
    while(l <= r) {
        mid = l + (r - l) / 2;
        if(OK(A, B, mid)) {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    
    return res;
}
