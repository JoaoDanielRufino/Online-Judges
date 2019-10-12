void Solution::sortColors(vector<int> &A) {
    int zero = 0;
    int one = 0;
    int two = 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == 0)
            zero++;
        else if(A[i] == 1)
            one++;
        else
            two++;
    }
    
    int i;
    for(int j = 0; i < zero; j++)
        A[i++] = 0;
    for(int j = 0; j < one; j++)
        A[i++] = 1;
    for(int j = 0; j < two; j++)
        A[i++] = 2;
}
