class Solution {
public:
    string solve(int num, vector<pair<int, string>> aux) {
        if(!num)
            return "";
        
        string res;
        for(auto p : aux) {
            if(num >= p.first) {
                res = p.second + solve(num - p.first, aux);
                break;
            }
        }
        
        return res;
    }
    
    string intToRoman(int num) {
        vector<pair<int, string>> aux{
            { 1000, "M" },
            { 900, "CM" },
            { 500, "D" },
            { 400, "CD" },
            { 100, "C" },
            { 90, "XC" },
            { 50, "L" },
            { 40, "XL" },
            { 10, "X" },
            { 9, "IX" },
            { 5, "V" },
            { 4, "IV" },
            { 1, "I" }
        };
        
        return solve(num, aux);
    }
};