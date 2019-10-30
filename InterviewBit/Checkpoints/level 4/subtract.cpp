/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::subtract(ListNode* A) {
    stack<int> st;
    ListNode *tmp = A;
    
    while(tmp) {
        st.push(tmp->val);
        tmp = tmp->next;
    }
    
    tmp = A;
    int n = st.size() / 2;
    while(n--) {
        tmp->val = st.top() - tmp->val;
        st.pop();
        tmp = tmp->next;
    }
    
    return A;
}
