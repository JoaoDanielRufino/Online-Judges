class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<pair<int, int>> st;

        for(int i = 0; i < temperatures.size(); i++) {
            while(!st.empty() && temperatures[i] > st.top().first) {
                ans[st.top().second] = i - st.top().second;
                st.pop();
            }

            st.push({ temperatures[i], i });
        }

        return ans;
    }
};
