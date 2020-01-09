class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> hash(J.begin(), J.end());
        int count = 0;
        
        for(char c : S) {
            if(hash.count(c))
                count++;
        }
        
        return count;
    }
};