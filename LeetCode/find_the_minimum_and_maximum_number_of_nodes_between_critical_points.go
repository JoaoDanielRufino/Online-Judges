/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func max(a, b int) int {
    if a < b {
        return b
    }
    return a
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}

func nodesBetweenCriticalPoints(head *ListNode) []int {
    prev, curr, next := head, head.Next, head.Next.Next

    if next == nil {
        return []int{-1, -1}
    }

    minDist, maxDist, firstCriticalPoint, prevCriticalPoint, lastCriticalPoint, index := math.MaxInt, math.MinInt, -1, -1, -1, 2
    for next != nil {
        if curr.Val > prev.Val && curr.Val > next.Val {
            if firstCriticalPoint == -1 {
                firstCriticalPoint = index
                prevCriticalPoint = index
            } else {
                if lastCriticalPoint != -1 {
                    prevCriticalPoint = lastCriticalPoint
                }
                lastCriticalPoint = index
            }
        }

        if curr.Val < prev.Val && curr.Val < next.Val {
            if firstCriticalPoint == -1 {
                firstCriticalPoint = index
                prevCriticalPoint = index
            } else {
                if lastCriticalPoint != -1 {
                    prevCriticalPoint = lastCriticalPoint
                }
                lastCriticalPoint = index
            }
        }

        if firstCriticalPoint != -1 && lastCriticalPoint != -1 {
            minDist = min(minDist, lastCriticalPoint - prevCriticalPoint)
            maxDist = lastCriticalPoint - firstCriticalPoint
        }

        prev = curr
        curr = next
        next = next.Next
        index++
    }

    if firstCriticalPoint == -1 || lastCriticalPoint == -1 {
        return []int{-1, -1}
    }

    return []int{minDist, maxDist}
}
