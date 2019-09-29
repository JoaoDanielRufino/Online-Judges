class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mymap;
        map<int, int>::iterator it;
        set<int> myset;
        
        for(int i = 0; i < arr.size(); i++) {
            mymap[arr[i]]++;
        }
        
        for(it = mymap.begin(); it != mymap.end(); it++) {
            if(myset.count(it->second))
                return false;
            myset.insert(it->second);
        }
        
        return true;
    }
};