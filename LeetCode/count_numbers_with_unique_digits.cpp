// https://leetcode.com/problems/count-numbers-with-unique-digits/discuss/83041/JAVA-DP-O(1)-solution.

class Solution {
public:  
    int countNumbersWithUniqueDigits(int n) {
        if(!n)
            return 1;
        
        int res = 10;
        int aux = 9, possible = 9;
        while(n > 1 && possible > 0) {
            aux *= possible--;
            res += aux;
            n--;
        }
        
        return res;
    }
};