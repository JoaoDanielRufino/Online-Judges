class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;

        int size = 0;
        while(curr) {
            curr = curr->next;
            size++;
        }

        int midSize = size / 2;

        curr = head;
        while(midSize--) {
            curr = curr->next;
        }

        return curr;
    }
};

// Better
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast;

        slow = fast = head;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }
};
