// Solution 1
class Solution {
public:
    static bool myComp(const vector<int> a, const vector<int> b) {
        if(a[0] < b[0])
            return true;
        if(a[0] == b[0] && a[1] < b[1])
            return true;
        return false;
    }
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        intervals.push_back(newInterval);
        
        sort(intervals.begin(), intervals.end(), myComp);
        
        vector< vector<int> > res;
        int lastElem = -1;
        for(auto interval : intervals) {
            if(res.empty() || res[lastElem][1] < interval[0]) {
                res.push_back(interval);
                lastElem++;
            }
            else
                res[lastElem][1] = max(res[lastElem][1], interval[1]);
        }
        
        return res;
    }
};

// Solution 2
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool flag = false;
        for(int i = 0; i < intervals.size(); i++) {
            if(intervals[i][0] > newInterval[0]) {
                intervals.insert(intervals.begin()+i, newInterval);
                flag = true;
            }
            else if(intervals[i][0] == newInterval[0] && intervals[i][1] >= newInterval[1]) {
                intervals.insert(intervals.begin()+i, newInterval);
                flag = true;
            }
            if(flag)
                break;
        }
        
        if(intervals.empty() || !flag)
            intervals.push_back(newInterval);
        
        vector< vector<int> > res;
        int lastElem = -1;
        for(auto interval : intervals) {
            if(res.empty() || res[lastElem][1] < interval[0]) {
                res.push_back(interval);
                lastElem++;
            }
            else
                res[lastElem][1] = max(res[lastElem][1], interval[1]);
        }
        
        return res;
    }
};

// Solution 3
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;

        int i = 0;
        while(i < intervals.size() && intervals[i][1] < newInterval[0]) {
            ans.push_back(intervals[i]);
            i++;
        }

        while(i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval = { min(intervals[i][0], newInterval[0]), max(intervals[i][1], newInterval[1]) };
            i++;
        }

        ans.push_back(newInterval);

        ans.insert(ans.end(), intervals.begin() + i, intervals.end());

        return ans;
    }
};
