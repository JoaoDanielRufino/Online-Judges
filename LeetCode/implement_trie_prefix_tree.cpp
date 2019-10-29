struct Node{
    Node *next[26];
    bool isEnd;
    
    Node() {
        for(int i = 0; i < 26; i++)
            next[i] = nullptr;
        isEnd = false;
    }
};

class Trie {
private:
    Node *root;
public:
    /** Initialize your data structure here. */
    Trie() {
       root = new Node(); 
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *tmp = root;
        
        for(int i = 0; i < word.size(); i++) {
            int index = word[i] - 'a';
            if(!tmp->next[index])
                tmp->next[index] = new Node();
            tmp = tmp->next[index];
        }
        
        tmp->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *tmp = root;
        
        for(int i = 0; i < word.size(); i++) {
            int index = word[i] - 'a';
            if(!tmp->next[index])
                return false;
            tmp = tmp->next[index];
        }
        
        return tmp->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *tmp = root;
        
        for(int i = 0; i < prefix.size(); i++) {
            int index = prefix[i] - 'a';
            if(!tmp->next[index])
                return false;
            tmp = tmp->next[index];
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */