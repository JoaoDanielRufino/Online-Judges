int Solution::jump(vector<int> &A) {
    if(A.size() <= 1)
        return 0;
        
    if(!A[0])
        return -1;
        
    int maxReach = A[0];
    int steps = A[0];
    int jump = 1;
    
    for(int i = 1; i < A.size(); i++) {
        if(i == A.size()-1)
            return jump;
            
        maxReach = max(maxReach, i + A[i]);
        steps--;
        if(!steps) {
            jump++;
            if(i >= maxReach)
                return -1;
            steps = maxReach - i;
        }
    }
    
    return -1;
}
