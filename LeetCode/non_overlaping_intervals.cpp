class Solution {
public:
    static bool myCompare(const vector<int>& a, const vector<int>& b) {
        if(a[1] < b[1])
            return true;
        if(a[1] == b[1] && a[0] < b[0])
            return true;
        return false;
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int res = 0;
        
        sort(intervals.begin(), intervals.end(), myCompare);
        
        int pos = 0;
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[pos][1] > intervals[i][0])
                res++;
            else
                pos = i;
        }
        
        return res;
    }
};