int Solution::isPower(int A) {
    int root = sqrt(A);
    
    if(pow(root, 2) == A)
        return 1;
    
    for(int i = 1; i <= root; i++) {
        for(int j = 2; j <= sqrt(root); j++) {
            if(A == pow(i, j))
                return 1;
        }
    }
    
    return 0;
}
