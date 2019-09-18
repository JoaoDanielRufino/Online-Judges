string Solution::findDigitsInBinary(int A) {
    if(!A)
        return "0";
    
    string res;
    
    while(A > 0) {
        res += to_string(A%2);
        A /= 2;
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}