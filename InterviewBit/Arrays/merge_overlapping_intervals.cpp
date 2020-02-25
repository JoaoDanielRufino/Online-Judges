/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> res;
    
    sort(A.begin(), A.end(), [](const Interval a, const Interval b) {
       if(a.start < b.start)
            return true;
       if(a.start == b.start && a.end < b.end)
            return true;
       return false;
    });
    
    for(Interval it : A) {
        if(res.empty() || res[res.size()-1].end < it.start)
            res.push_back(it);
        else
            res[res.size()-1].end = max(res[res.size()-1].end, it.end);
    }
    
    return res;
}
