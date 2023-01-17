class Solution {
public:
    int minFlipsMonoIncr(string s) {
       int ans = 0, count = 0;

       for (char c : s) {
            if (c == '0') {
                ans = min(count, ans + 1);
            } else {
                count++;
            }
        }

        return ans;
    }
};
