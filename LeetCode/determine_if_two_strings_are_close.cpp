class Solution {
public:
    bool checkKeysEqual(vector<int> a, vector<int> b) {
        for(int i = 0; i < a.size(); i++) {
            if((a[i] && !b[i]) || (!a[i] && b[i]))
                return false;
        }

        return true;
    }

    bool checkValuesEqual(vector<int> a, vector<int> b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i])
                return false;
        }

        return true;
    }

    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size())
            return false;

        vector<int> countWord1(26), countWord2(26);

        for(int i = 0; i < word1.size(); i++) {
            int index1 = word1[i] - 'a';
            int index2 = word2[i] - 'a';
            countWord1[index1]++;
            countWord2[index2]++;
        }

        return checkKeysEqual(countWord1, countWord2) && checkValuesEqual(countWord1, countWord2);
    }
};
