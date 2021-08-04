class Solution {
public:
    int countRepeatedChar(string s, char c, int start) {
        int count = 0;
        
        while(start < s.size() && s[start] == c) {
            start++;
            count++;
        }
        
        return count;
    }
    
    int expressiveWords(string s, vector<string>& words) {
        int count = 0;
        
        for(string word : words) {
            int i = 0, j = 0;
            while(i < s.size()) {
                if(s[i] != word[j])
                    break;
                
                int countA = countRepeatedChar(s, s[i], i);
                int countB = countRepeatedChar(word, word[j], j);
                
                if(countA < 3 && countA != countB)
                    break;
                
                if(countB > countA)
                    break;
                
                i += countA;
                j += countB;      
            }
            if(i == s.size() && s.size() >= word.size())
                count++;
        }
        
        return count;
    }
};
