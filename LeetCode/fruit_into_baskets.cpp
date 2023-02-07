class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int ans = 0;

        int l = 0, r = 0;
        while(r < fruits.size()) {
            mp[fruits[r]]++;

            while(mp.size() > 2) {
                mp[fruits[l]]--;
                if(!mp[fruits[l]])
                    mp.erase(fruits[l]);
                l++;
            }

            ans = max(ans, r - l + 1);

            r++;
        }

        return ans;
    }
};
