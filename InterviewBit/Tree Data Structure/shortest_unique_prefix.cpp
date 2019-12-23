struct Node {
    Node *next[26];
    bool isEnd;
    int count;
    
    Node() {
        for(int i = 0; i < 26; i++)
            next[i] = nullptr;
        isEnd = false;
        count = 0;
    }
};

class Trie {
    private:
        Node *root;
    
    public:
        Trie() {
            root = new Node();
        }
        
        void insert(string key) {
            Node *tmp = root;
            
            for(int i = 0; i < key.size(); i++) {
                int index = key[i] - 'a';
                if(!tmp->next[index])
                    tmp->next[index] = new Node();
                tmp->next[index]->count++;
                tmp = tmp->next[index];
            }
            
            tmp->isEnd = true;
        }
        
        string uniquePrefix(string key) {
            Node *tmp = root;
            string prefix;
            
            for(int i = 0; i < key.size(); i++) {
                int index = key[i] - 'a';
                if(tmp->next[index]) {
                    if(tmp->next[index]->count == 1) {
                        prefix += key[i];
                        break;
                    }
                    else if(tmp->next[index]->count > 1)
                        prefix += key[i];
                }
                tmp = tmp->next[index];
            }
            
            return prefix;
        }
};

vector<string> Solution::prefix(vector<string> &A) {
    vector<string> res;
    Trie trie;
    
    for(int i = 0; i < A.size(); i++) {
        trie.insert(A[i]);
    }
    
    for(int i = 0; i < A.size(); i++) {
        res.push_back(trie.uniquePrefix(A[i]));
    }
    
    return res;
}
