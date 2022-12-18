class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);
        stack<int> st;

        for(int i = 0; i < nums.size() * 2; i++) {
            int index = i % nums.size();
            while(!st.empty() && nums[index] > nums[st.top()]) {
                ans[st.top()] = nums[index];
                st.pop();
            }

            st.push(index);
        }

        return ans;
    }
};
