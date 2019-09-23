int Solution::atoi(const string A) {
    int res = 0;
    int aux = 1;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == '-')
            aux = -1;
        else if(A[i] == '+')
            continue;
        else if(isdigit(A[i])) {
            int tmp = A[i] - '0';
            
            if((long long) res * 10 + tmp >= INT_MAX && aux == 1)
                return INT_MAX;
            
            res = res * 10 + tmp;
            if(res < 0)
                return INT_MIN;
        }
        else
            break;
    }
    
    if((res * aux) > INT_MAX)
        return INT_MAX;
    
    return res * aux;
}
