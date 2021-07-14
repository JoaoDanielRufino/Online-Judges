class Solution {
public:
    set<string> st;
    unordered_map<int, bool> seen;
    int res;
    
    void solve(string curr, string tiles) {
        if(curr.size() > tiles.size())
            return;
        
        if(!st.count(curr)) {
            res++;
            st.insert(curr);            
        }
        
        for(int i = 0; i < tiles.size(); i++) {
            if(!seen[i]) {
                seen[i] = true;
                solve(curr + tiles[i], tiles);
                seen[i] = false;
            }      
        }
    }
    
    int numTilePossibilities(string tiles) {
        res = 0;
        
        solve("", tiles);
        
        return res-1; // Removing empty string
    }
};
