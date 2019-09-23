int Solution::isPalindrome(string A) {
    int i = 0;
    int j = A.size() - 1;
    
    while(i <= j) {
        if(isalnum(A[i])) {
            if(isalnum(A[j])) {
                if(tolower(A[i]) != tolower(A[j]))
                    return 0;
                i++;
                j--;
            }
            else
                j--;
        }
        else
            i++;
    }
    
    return 1;
}
