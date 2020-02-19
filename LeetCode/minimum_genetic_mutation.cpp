class Solution {
public:
    vector<string> findAdj(string s, unordered_set<string>& hash) {
        vector<string> adj;
        char c[4] = { 'A', 'C', 'G', 'T' };
        
        for(char a : c) {
            for(int i = 0; i < s.size(); i++) {
                char tmp = s[i];
                s[i] = a;
                if(hash.count(s)) {
                    adj.push_back(s);
                    hash.erase(s);
                }
                s[i] = tmp;
            }
        }
        
        return adj;
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> hash(bank.begin(), bank.end());
        
        if(!hash.count(end))
            return -1;
        
        int count = 0;
        queue<string> q;
        q.push(start);
        while(!q.empty()) {
            int size = q.size();
            while(size--) {
                string s = q.front();
                q.pop();
                if(s == end)
                    return count;
                vector<string> adj = findAdj(s, hash);
                for(string str : adj)
                    q.push(str);
            }
            count++;
        }
        
        return -1;
    }
};