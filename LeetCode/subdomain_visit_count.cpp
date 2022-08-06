class Solution {
public:
    int depth(string domain) {
        int depth = 0;
        
        for(char c : domain) {
            if(c == '.')
                depth++;
        }
        
        return depth;
    }
    
    pair<int, string> splitBySpace(string str) {
        int num;
        string domain;
        
        auto spacePos = str.find(" ");
        
        num = stoi(str.substr(0, spacePos));
        domain = str.substr(spacePos+1);
        
        return make_pair(num, domain);
    }
    
    string getSubdomain(string domain, int depth) {
        if(!depth)
            return domain;
        
        int pos = 0;  
        for(int i = 0; i < domain.size(); i++) {
            if(domain[i] == '.')
                depth--;
            if(!depth) {
                pos = i;
                break;
            }
        }
        
        return domain.substr(pos+1);
    }
    
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        int maxDepth = 0;
        vector<string> res;
        unordered_map<string, pair<int, pair<int, string>>> domains;
        
        for(string domain : cpdomains) {
            int d = depth(domain);
            maxDepth = max(maxDepth, depth(domain));
            domains[domain] = make_pair(d, splitBySpace(domain));
        }
        
        map<string, int> mp;
        for(int i = 0; i <= maxDepth; i++) {
            for(string domain : cpdomains) {
                if(i > domains[domain].first)
                    continue;
                string subdomain = getSubdomain(domains[domain].second.second, i);
                mp[subdomain] += domains[domain].second.first;
            }
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++) {
            res.push_back(to_string(it->second) + " " + it->first);
        }
        
        return res;
    }
};
