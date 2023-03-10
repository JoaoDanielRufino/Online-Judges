class Solution {
public:
    bool OK(vector<int>& time, int totalTrips, long long int t) {
        long long int count = 0;

        for(int x : time) {
            count += t / x;
        }

        return count >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int l = 0, r = INT_MIN;

        for(int x : time) {
            if(x > r)
                r = x;
        }

        r = r * totalTrips;

        long long int ans;
        while(l <= r) {
            long long int mid = l + (r - l)/2;

            if(OK(time, totalTrips, mid)) {
                r = mid - 1;
                ans = mid;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
