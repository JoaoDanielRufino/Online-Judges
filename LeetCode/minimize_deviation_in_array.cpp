class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> st;

        for(int x : nums) {
            st.insert(x % 2 ? x * 2 : x);
        }

        int ans = *st.rbegin() - *st.begin();
        while(*st.rbegin() % 2 == 0) {
            int minn = *st.rbegin();
            st.insert(minn / 2);
            st.erase(minn);
            ans = min(ans, *st.rbegin() - *st.begin()); 
        }

        return ans;
    }
};
