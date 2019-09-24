class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") {
            return 0;
        }
        
        for(int i = 0; i < haystack.size(); i++) {
            if(haystack[i] == needle[0]) {
                int j = i+1, k;
                for(k = 1; k < needle.size(); k++) {
                    if(haystack[j++] != needle[k]) {
                        break;
                    }
                }
                if(k == needle.size()) {
                    return i;
                }
                
            }
        }
        return -1;
    }
};