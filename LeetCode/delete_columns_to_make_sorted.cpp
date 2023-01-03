class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;

        int strLen = strs[0].size();
        for(int i = 0; i < strLen; i++) {
            char c = 'a';
            for(string str : strs) {
                if(str[i] < c) {
                    ans++;
                    break;
                } else {
                    c = str[i];
                }
            }
        }


        return ans;
    }
};
