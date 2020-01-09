struct Node{
    Node *child[26];
    bool isEnd;
    
    Node() {
        for(int i = 0; i < 26; i++)
            child[i] = nullptr;
        isEnd = false;
    }
};

class Trie {
    public:
        Node *root;

        Trie() {
            root = new Node();
        }

        void insert(string key) {
            Node *tmp = root;

            for(int i = 0; i < key.size(); i++) {
                int index = key[i] - 'a';
                if(!tmp->child[index])
                    tmp->child[index] = new Node();
                tmp = tmp->child[index];
            }

            tmp->isEnd = true;
        }

        void solve(Node *tmp, string& res, string curr) {
            for(int i = 0; i < 26; i++) {
                if(tmp->child[i] && tmp->child[i]->isEnd) {
                    curr.push_back(i + 'a');
                    if(curr.size() > res.size())
                        res = curr;
                    else if(curr.size() == res.size() && curr < res)
                        res = curr;
                    solve(tmp->child[i], res, curr);
                    curr.pop_back();
                }
            }
        }
};

class Solution {
public:    
    string longestWord(vector<string>& words) {
        Trie trie; 
        
        for(string s : words)
            trie.insert(s);
        
        string res;
        trie.solve(trie.root, res, "");
        
        return res;
    }
};