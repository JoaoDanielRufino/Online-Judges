// Solution 1
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
        set< pair<int, pair<char, int> > > hash;
        
        if(!A.size() || A.size() == 1)
            return res;
        
        for(int i = 0; i < A[0].size(); i++) {
            char c = (char) A[0][i];
            int count = 1;
            for(int j = 1; j < A.size(); j++) {
                for(int k = 0; k < A[j].size(); k++) {
                    if(A[j][k] == c) {
                        pair<int, pair<char, int> > p = make_pair(j, make_pair(A[j][k], k));
                        if(!hash.count(p)) {
                            count++;
                            hash.insert(p);
                            break;
                        }
                    }
                }
            }
            if(count == A.size()) {
                string tmp = "";
                res.push_back(tmp + c);
            }
        }
        
        return res;
    }
};

// Solution 2
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
        vector<int> hash(26, INT_MAX);
        
        for(string s : A) {
            vector<int> count(26, 0);
            for(char c : s)
                count[c - 'a']++;
            for(int i = 0; i < 26; i++)
                hash[i] = min(hash[i], count[i]);
        }
        
        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < hash[i]; j++) {
                string tmp = "";
                char c = i + 'a';
                res.push_back(tmp + c);
            }
        }
        
        return res;
    }
};