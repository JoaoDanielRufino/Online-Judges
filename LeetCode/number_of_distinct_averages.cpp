class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> st;
        int n = nums.size();
        int i = 0, j = n-1;

        sort(nums.begin(), nums.end());

        while(n--) {
            double avg = (nums[i] + nums[j]) / 2.0;
            st.insert(avg);
            i++;
            j--;
        }

        return st.size();
    }
};
