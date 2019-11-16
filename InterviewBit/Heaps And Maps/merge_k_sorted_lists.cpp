/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<int, vector<int>, greater<int> > pq;
    
    for(int i = 0; i < A.size(); i++) {
        ListNode *tmp = A[i];
        while(tmp) {
            pq.push(tmp->val);
            tmp = tmp->next;
        }
    }
    
    ListNode *res = new ListNode(-1);
    ListNode *curr = res;
    
    while(!pq.empty()) {
        int top = pq.top();
        pq.pop();
        
        curr->next = new ListNode(top);
        curr = curr->next;
    }
    
    return res->next;
}
