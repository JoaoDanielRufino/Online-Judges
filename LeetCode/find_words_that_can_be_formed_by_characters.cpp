class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int good = 0;
        unordered_map<char, int> mp, aux;
        
        for(char c : chars) {
            mp[c]++;
            aux[c]++;
        }
        
        for(string word : words) {
            bool flag = false;
            for(char c : word) {
                if(aux[c])
                    aux[c]--;
                else {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                good += word.size();
            aux = mp;
        }
        
        return good;
    }
};
