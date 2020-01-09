/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> hash;
        
        Node *tmp = head;
        while(tmp) {
            hash[tmp] = new Node(tmp->val);
            tmp = tmp->next;
        }
        
        Node *res = nullptr;
        tmp = head;
        while(tmp) {
            res = hash[tmp];
            res->next = hash[tmp->next];
            res->random = hash[tmp->random];
            tmp = tmp->next;
        }
        
        return hash[head];
    }
};