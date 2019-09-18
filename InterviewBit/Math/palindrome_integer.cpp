int Solution::isPalindrome(int A) {
    int rev = 0, aux = A;
    
    while(aux > 0) {
        rev = rev * 10 + aux%10;
        aux /= 10;
    }
    
    return A == rev;
}
