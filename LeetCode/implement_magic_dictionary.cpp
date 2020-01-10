class MagicDictionary {
public:
    unordered_map<int, vector<string>> hash;
    
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(string s : dict)
            hash[s.size()].push_back(s);
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        if(!hash.count(word.size()))
            return false;
        
        for(string dict : hash[word.size()]) {
            int count = 0;
            for(int i = 0; i < dict.size(); i++) {
                if(dict[i] != word[i])
                    count++;
                if(count >= 2)
                    break;
            }
            if(count == 1)
                return true;
        }
        
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dict);
 * bool param_2 = obj->search(word);
 */