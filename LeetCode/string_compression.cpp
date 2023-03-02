class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;

        int count = 1, start = 0;
        char c = chars[0];
        for(int i = 1; i < chars.size(); i++) {
            if(chars[i] != c) {
                string num = to_string(count);
                chars[ans++] = c;
                if(count > 1) {
                    for(char n : num)
                        chars[ans++] = n;
                }
                c = chars[i];
                start = i;
                count = 1;
            } else {
                count++;
            }
        }

        string num = to_string(count);
        chars[ans++] = c;
        if(count > 1) {
            for(char n : num)
                chars[ans++] = n;
        }

        return ans;
    }
};
