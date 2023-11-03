/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func max(a, b int) int {
    if a < b {
        return b
    }
    return a
}

func solve(root *TreeNode, count map[int]int, maxOccurrence *int) {
    if root == nil {
        return
    }

    count[root.Val]++
    *maxOccurrence = max(*maxOccurrence, count[root.Val])

    solve(root.Left, count, maxOccurrence)
    solve(root.Right, count, maxOccurrence)
}

func findMode(root *TreeNode) []int {
    count := map[int]int{} 
    maxOccurrence := math.MinInt

    solve(root, count, &maxOccurrence)

    ans := []int{}
    for k, v := range count {
        if v == maxOccurrence {
            ans = append(ans, k)
        }
    }

    return ans
}
