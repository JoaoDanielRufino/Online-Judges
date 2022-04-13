class TopVotedCandidate {
public:
    map<int, int> winner;
    
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {  
        int currMax = INT_MIN, candidate;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < persons.size(); i++) {
            mp[persons[i]]++;
            
            if(currMax <= mp[persons[i]]) {
                currMax = mp[persons[i]];
                candidate = persons[i];
            }
            
            winner[times[i]] = candidate;
        }
    }
    
    int q(int t) {
        return (--winner.upper_bound(t))->second;
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */
