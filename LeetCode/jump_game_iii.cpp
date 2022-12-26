class Solution {
public:
    bool solve(vector<int>& arr, int current, vector<bool>& seen) {
        if(current < 0 || current >= arr.size() || seen[current])
            return false;
        
        if(!arr[current])
            return true;

        seen[current] = true;

        return solve(arr, current + arr[current], seen) || solve(arr, current - arr[current], seen);
    }

    bool canReach(vector<int>& arr, int start) {
        vector<bool> seen(arr.size());

        return solve(arr, start, seen);
    }
};
