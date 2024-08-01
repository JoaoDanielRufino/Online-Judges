/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func deleteMiddle(head *ListNode) *ListNode {
    prev, slow, fast := head, head, head

    for fast != nil && fast.Next != nil {
        prev = slow
        slow = slow.Next
        fast = fast.Next.Next
    }

    if slow == fast {
        return nil
    }

    prev.Next = slow.Next

    return head
}
