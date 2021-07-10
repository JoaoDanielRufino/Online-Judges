class Solution {
public:
    string customSortString(string order, string str) {
        vector<int> hash(26, 0);

        for(char c : str) {
            hash[c - 'a']++;
        }
        
        string res;
        for(char c : order) {
            while(hash[c - 'a']--) {
                res += c;
            }
        }
        
        for(int i = 0; i < hash.size(); i++) {
            while(hash[i] > 0) {
                res += i + 'a';
                hash[i]--;
            }
        }
        
        return res;
    }
};
