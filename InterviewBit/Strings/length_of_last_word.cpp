int Solution::lengthOfLastWord(const string A) {
    int count = 0;
    
    for(int i = A.size() - 1; i >= 0; i--) {
        if(A[i] == ' ' && count > 0)
            break;
        if(A[i] != ' ')
            count++;
    }
    
    return count;
}
