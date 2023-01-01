class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string str;

        unordered_map<char, string> mp;
        unordered_set<string> st;

        int i = 0;
        while(ss >> str) {
            if(i >= pattern.size())
                return false;

            char c = pattern[i];
            if(mp.count(c)) {
                if(mp[c] != str)
                    return false;
            } else {
                if(st.count(str))
                    return false;
                mp[c] = str;
                st.insert(str);
            }
            i++;
        }

        return i == pattern.size();
    }
};
