class Solution {
public:
    bool isVowel(char a) {
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }
    
    string reverseVowels(string s) {
        int l = 0, r = s.size()-1;
        
        while(l < r) {
            while(l < s.size() && !isVowel(tolower(s[l]))) {
                l++;
            }
            while(r > 0 && !isVowel(tolower(s[r]))) {
                r--;
            }

            if(l >= r)
                break;
                        
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++;
            r--;
        }
        
        return s;
    }
};
