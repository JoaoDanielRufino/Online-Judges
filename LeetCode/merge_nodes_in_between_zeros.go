/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeNodes(head *ListNode) *ListNode {
    var ans *ListNode = nil
    sum, curr, currAns := 0, head.Next, ans

    for curr != nil {
        sum += curr.Val

        if curr.Val == 0 {
            next := &ListNode{
                Val: sum,
                Next: nil,
            }

            if ans == nil {
                ans = next
                currAns = ans
            } else {
                currAns.Next = next
                currAns = currAns.Next
            }

            sum = 0
        }

        curr = curr.Next
    }

    return ans
}
