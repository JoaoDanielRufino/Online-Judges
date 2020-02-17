class Solution {
public:
    string strWithout3a3b(int A, int B) {
        string res;
        
        while(A > 0 && B > 0) {
            if(A > B) {
                res += "aab";
                A -= 2;
                B--;
            }
            else if(A < B) {
                res += "bba";
                B -= 2;
                A--;
            }
            else {
                res += "ab";
                A--;
                B--;
            }
        }
        
        while(A--)
            res += 'a';
        while(B--)
            res += 'b';
        
        return res;
    }
};