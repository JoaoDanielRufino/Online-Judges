bool isAnagram(string a, string b) {
    vector<int> hash(26, 0);
    
    for(int i = 0; i < a.size(); i++) {
        hash[a[i] - 'a']++;
        hash[b[i] - 'a']--;
    }
    
    for(int x : hash) {
        if(x > 0)
            return false;
    }
    
    return true;
}

int countAnagrams(vector<string> substrings) {
    int count = 0;
    
    for(int i = 0; i < substrings.size()-1; i++) {
        for(int j = i+1; j < substrings.size(); j++) {
            if(isAnagram(substrings[i], substrings[j])) {
                count++;
            }
        }
    }
    
    return count;
}

int sherlockAndAnagrams(string s) {
    int count = 0;
    
    for(int k = 1; k <= s.size(); k++) {
        vector<string> substrings;
        for(int i = 0; i < s.size(); i += k) {
            for(int j = i; j < k+i && j <= s.size()-k; j++) {
                substrings.push_back(s.substr(j, k));
            }
        }
        count += countAnagrams(substrings);
    }
    
    return count;
}
