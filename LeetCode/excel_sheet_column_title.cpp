class Solution {
public:
    string convertToTitle(int n) {
        string res;
        
        while(n) {
            n--;
            int aux = n % 26;
            n /= 26;
            char c = aux + 'A';
            res = c + res;
        }
        
        return res;
    }
};