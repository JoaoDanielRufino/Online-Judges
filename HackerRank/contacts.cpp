struct Node {
    Node *next[26];
    bool isEndOfWord;
    int size;
    
    Node() {
        for(int i = 0; i < 26; i++)
            next[i] = nullptr;
        isEndOfWord = false;
        size = 0;
    }
};

class Trie {
    private:
        Node *root;
        
    public:
        Trie() {
            root = new Node();
        }
        
        void insert(string str) {
            Node *tmp = root;
            
            for(char c : str) {
                int index = c - 'a';
                if(!tmp->next[index])
                    tmp->next[index] = new Node();
                tmp = tmp->next[index];
                tmp->size++;
            }
            
            tmp->isEndOfWord = true;
        }
        
        int solve(string prefix) {
            Node *tmp = root;
            
            for(char c : prefix) {
                int index = c - 'a';
                if(!tmp->next[index])
                    return 0;
                tmp = tmp->next[index];
            }
            
            return tmp->size;
        }
};

vector<int> contacts(vector<vector<string>> queries) {
    vector<int> res;
    Trie trie;
    
    for(int i = 0; i < queries.size(); i++) {
        if(queries[i][0] == "add")
            trie.insert(queries[i][1]);
        else
            res.push_back(trie.solve(queries[i][1]));
    }
    
    return res;
}
