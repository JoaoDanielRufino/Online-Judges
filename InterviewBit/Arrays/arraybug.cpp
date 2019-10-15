vector<int> Solution::rotateArray(vector<int> &A, int B) {
    if(!B)
        return A;
    
    int tmp = A[0];
    for(int i = 0; i < A.size(); i++)
        A[i] = A[i+1];
    A[A.size()-1] = tmp;
    
    return rotateArray(A, B-1);
}
