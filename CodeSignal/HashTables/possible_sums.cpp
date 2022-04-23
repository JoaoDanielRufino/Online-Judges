void solve(vector<int>& coins, vector<int>& quantity, unordered_set<int>& st, int index, int sum) {
    if(index == coins.size()) {
        if(sum)
            st.insert(sum);
        return;
    }
    
    for(int i = 0; i <= quantity[index]; i++) {
        solve(coins, quantity, st, index + 1, sum + coins[index] * i);
    }
}

int solution(vector<int> coins, vector<int> quantity) {
    unordered_set<int> st;
    
    solve(coins, quantity, st, 0, 0);
    
    return st.size();
}
