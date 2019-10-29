/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
int Solution::lPalin(ListNode* A) {
    ListNode *tmp = A;
    stack<int> st;
    
    while(tmp) {
        st.push(tmp->val);
        tmp = tmp->next;
    }
    
    tmp = A;
    while(!st.empty()) {
        int x = st.top();
        st.pop();
        
        if(x != tmp->val)
            return 0;
        tmp = tmp->next;
    }
    
    return 1;
}
