class Solution {
public:
    string convert(string s, int numRows) {
        vector<char> vet[numRows];
        string res;
        int j = 0;
        bool up = true;
        
        for(int i = 0; i < s.size(); i++) {
            vet[j].push_back(s[i]);
            if(numRows > 1) {
            if(up)
                j++;
            else
                j--;
            if(j == numRows-1)
                up = false;
            else if(!j)
                up = true;
            }
        }
        
        for(int i = 0; i < numRows; i++) {
            for(int k = 0; k < vet[i].size(); k++) {
                res += vet[i][k];
            }
        }
        return res;
    }
};