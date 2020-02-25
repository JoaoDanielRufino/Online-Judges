/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    bool flag = true;
    for(int i = 0; i < intervals.size(); i++) {
        if(intervals[i].start > newInterval.start) {
            intervals.insert(intervals.begin() + i, newInterval);
            flag = false;
            break;
        }
        else if(intervals[i].start == newInterval.start && intervals[i].end >= newInterval.end) {
            intervals.insert(intervals.begin() + i, newInterval);
            flag = false;
            break;
        }
    }
    
    if(flag)
        intervals.push_back(newInterval);
        
    vector<Interval> res;
    for(Interval it : intervals) {
        if(res.empty() || res[res.size()-1].end < it.start)
            res.push_back(it);
        else
            res[res.size()-1].end = max(res[res.size()-1].end, it.end);
    }
    
    return res;
}
