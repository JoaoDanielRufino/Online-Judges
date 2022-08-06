class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        
        for(string sentence : sentences) {
            int currSpaces = 0;
            for(char c : sentence) {
                if(c == ' ')
                    currSpaces++;
            }
            res = max(res, currSpaces + 1);
        }
        
        return res;
    }
};
