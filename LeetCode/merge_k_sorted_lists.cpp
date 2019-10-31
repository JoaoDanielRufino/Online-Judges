/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size())
            return nullptr;
        
        priority_queue<int, vector<int>, greater<int> > pq;
        
        ListNode *tmp;
        for(int i = 0; i < lists.size(); i++) {
            tmp = lists[i];
            while(tmp) {
                pq.push(tmp->val);
                tmp = tmp->next;
            }
        }
        
        ListNode *aux = new ListNode(0); // dummy
        ListNode *res = aux;
        while(!pq.empty()) {
            aux->next = new ListNode(pq.top());
            pq.pop();
            aux = aux->next;
        }
        
        return res->next;
    }
};