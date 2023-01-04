class Solution {
public:
    int solve(int num) {
        if(num == 1)
            return -1;

        if(!(num % 3))
            return num / 3;
        
        return (num / 3) + 1;
    }
    
    int minimumRounds(vector<int>& tasks) {
        map<int, int> mp;

        for(int task : tasks) {
            mp[task]++;
        }

        int ans = 0;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            int rounds = solve(it->second);
            if(rounds == -1)
                return -1;
            ans += rounds;
        }

        return ans;
    }
};
