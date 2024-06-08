/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(list1 *ListNode, list2 *ListNode) *ListNode {
    ans := &ListNode{}
    curr1, curr2, currAns := list1, list2, ans

    for curr1 != nil && curr2 != nil {
        if curr1.Val < curr2.Val {
            currAns.Next = &ListNode{
                Val: curr1.Val,
                Next: nil,
            }
            curr1 = curr1.Next
        } else {
            currAns.Next = &ListNode{
                Val: curr2.Val,
                Next: nil,
            }
            curr2 = curr2.Next
        }
        currAns = currAns.Next
    }

    if curr1 != nil {
        currAns.Next = curr1
    }

    if curr2 != nil {
        currAns.Next = curr2
    }

    return ans.Next
}
