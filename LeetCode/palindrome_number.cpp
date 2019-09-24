class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        int rev = reverse(x);
        if(rev == x)
            return true;
        return false;
    }
    
    int reverse(int x) {
        long long int aux = 0;
        while(x != 0) {
            aux = aux*10 + x%10;
            x /= 10;
        }
        return aux;
    }
    
};