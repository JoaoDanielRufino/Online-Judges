/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func partition(head *ListNode, x int) *ListNode {
    l1, l2, curr := &ListNode{}, &ListNode{}, head
    currL1, currL2, endL1 := l1, l2, l1

    for curr != nil {
        if curr.Val < x {
            currL1.Next = &ListNode{
                Val: curr.Val,
                Next: nil,
            }
            currL1 = currL1.Next
            endL1 = currL1
        } else {
            currL2.Next = &ListNode{
                Val: curr.Val,
                Next: nil,
            }
            currL2 = currL2.Next
        }
        curr = curr.Next
    }

    if l2.Next == nil {
        return l1.Next
    }

    if l1.Next == nil {
        return l2.Next
    }

    endL1.Next = l2.Next

    return l1.Next
}
