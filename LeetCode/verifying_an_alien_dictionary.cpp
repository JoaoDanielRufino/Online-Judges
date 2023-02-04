class Solution {
public:
    bool smaller(string a, string b, vector<int>& mp) {
        for(int i = 0; i < a.size(); i++) {
            if(i >= b.size()) 
                return false;

            int indexA = a[i] - 'a';
            int indexB = b[i] - 'a';

            if(mp[indexA] > mp[indexB])
                return false;
            if(mp[indexA] < mp[indexB])
                return true;
        }

        return true; 
    }

    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> mp(26);

        for(int i = 0; i < order.size(); i++) {
            int index = order[i] - 'a';
            mp[index] = i;
        }

        for(int i = 0; i < words.size() - 1; i++) {
            for(int j = i + 1; j < words.size(); j++) {
                if(!smaller(words[i], words[j], mp))
                    return false;
            }
        }

        return true;
    }
};
