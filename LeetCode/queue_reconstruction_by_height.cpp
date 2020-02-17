class Solution {
public:
    static bool myComp(const vector<int> a, const vector<int> b) {
        if(a[0] > b[0])
            return true;
        if(a[0] == b[0] && a[1] < b[1])
            return true;
        return false;
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector< vector<int> > res;
        
        sort(people.begin(), people.end(), myComp);
        
        for(auto p : people) {
            res.insert(res.begin() + p[1], p);
        }
        
        return res;
    }
};
