class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> st[26];

        for(string idea : ideas) {
            st[idea[0] - 'a'].insert(idea.substr(1));
        } 

        long long int ans = 0LL;
        for(int i = 0; i < 25; i++) {
            for(int j = i + 1; j < 26; j++) {
                int count = 0;
                for(string a : st[i]) {
                    if(st[j].count(a))
                        count++;
                }

                ans += 2 * (st[i].size() - count) * (st[j].size() - count);
            }
        }

        return ans;
    }
};
