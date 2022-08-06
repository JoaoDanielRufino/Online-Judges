class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int res = 0, l = -1;
        
        for(int i = 0; i < seats.size(); i++) {
            if(seats[i]) {
                res = l == -1 ? i : max(res, (i - l) / 2);
                l = i;
            }
        }
        
        int n = seats.size()-1;
        res = max(res, n - l);
        
        return res;
    }
};
