// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
bool solution(ListNode<int> * l) {
    stack<int> st;
    
    ListNode<int> *curr = l;
    while(curr) {
        st.push(curr->value);
        curr = curr->next;
    }
    
    curr = l;
    while(!st.empty()) {
        if(curr->value != st.top())
            return false;
        st.pop();
        curr = curr->next;
    }
    
    return true;
}
