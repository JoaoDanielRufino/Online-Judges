int makeAnagram(string a, string b) {
    vector<char> hash(26, 0);
    int count = 0;
    
    for(char c : a) {
        hash[c - 'a']++;
    }
    
    for(char c : b) {
        hash[c - 'a']--;
    }
    
    for(int i = 0; i < 26; i++) {
        count += abs(hash[i]);
    }
    
    return count;
}
