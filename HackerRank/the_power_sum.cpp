int solve(int X, int N, int num) {
    int amount = X - pow(num, N);
    
    if(amount < 0)
        return 0;
        
    if(!amount)
        return 1;
        
    return solve(amount, N, num + 1) + solve(X, N, num + 1);
}

int powerSum(int X, int N) {
    return solve(X, N, 1);
}
