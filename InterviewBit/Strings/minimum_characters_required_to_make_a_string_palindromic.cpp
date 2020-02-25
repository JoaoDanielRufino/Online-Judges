bool isPalindrome(string s) {
    int l = 0, r = s.size()-1;
    
    while(l < r) {
        if(s[l] != s[r])
            return false;
        l++;
        r--;
    }
    
    return true;
}

int Solution::solve(string A) {
    int count = 0;
    
    while(!isPalindrome(A)) {
        A.pop_back();
        count++;
    }
    
    return count;
}
