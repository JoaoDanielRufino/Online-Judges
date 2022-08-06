class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> res;
        
        int current_sum = arr[0];
        int start = 0;
        for (int i = 1; i <= n; i++) {
            while (current_sum > s && start < i - 1) {
                current_sum = current_sum - arr[start];
                start++;
            }
            if (current_sum == s) {
                res.push_back(start+1);
                res.push_back(i);
                return res;
            }
            if (i < n) {
                current_sum = current_sum + arr[i];
            }
        }
        
        res.push_back(-1);
        
        return res;
    }
};
