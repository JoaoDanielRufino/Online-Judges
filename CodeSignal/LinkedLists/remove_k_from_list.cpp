// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * solution(ListNode<int> * l, int k) {
    ListNode<int> *curr, *prev;
    
    while(l && l->value == k) {
        l = l->next;
    }
    
    curr = l;
    prev = nullptr;
    while(curr) {
        if(curr->value == k) {
            prev->next = curr->next;
            curr = curr->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    
    return l;
}
