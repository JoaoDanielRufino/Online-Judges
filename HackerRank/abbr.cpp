// bool solve(string a, string b, int i, int j) {
//     if(i >= a.size() && j < b.size())
//         return false;
        
//     if(j >= b.size()) {
//         int tmp = i;
//         while(tmp < a.size()) {
//             if(isupper(a[tmp++]))
//                 return false;
//         }
//         return true;
//     }
    
//     if(isupper(a[i]) && a[i] != b[j])
//         return false;
    
//     if(toupper(a[i]) == b[j])
//         return solve(a, b, i+1, j+1) || solve(a, b, i+1, j);
        
//     return solve(a, b, i+1, j);
// }

string abbreviation(string a, string b) {
    vector<vector<bool>> dp(a.size()+1, vector<bool>(b.size()+1));
    
    dp[0][0] = true;
    for (int i= 1; i <= a.size(); i++) {
        if (isupper(a[i - 1])) {
            dp[i][0] = false;
        }
        else
            dp[i][0] = true;
    }
    
    for(int i = 1; i <= a.size(); i++) {
        for(int j = 1; j <= b.size(); j++) {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else if(toupper(a[i-1]) == b[j-1])
                dp[i][j] = dp[i-1][j-1] || dp[i-1][j];
            else if(isupper(a[i-1]))
                dp[i][j] = false;
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    return dp[a.size()][b.size()] ? "YES" : "NO";
}
