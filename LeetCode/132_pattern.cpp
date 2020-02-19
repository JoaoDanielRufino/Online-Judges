// https://leetcode.com/problems/132-pattern/discuss/94071/Single-pass-C%2B%2B-O(n)-space-and-time-solution-(8-lines)-with-detailed-explanation.

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int b = INT_MIN;
        
        for(int i = nums.size()-1; i >= 0; i--) {
            if(nums[i] < b)
                return true;
            else {
                while(!st.empty() && nums[i] > st.top()) {
                    b = st.top();
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        
        return false;
    }
};