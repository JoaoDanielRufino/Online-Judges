/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func min(a, b int) int {
    if a < b {
        return a
    }

    return b
}

func getMin(root *TreeNode, prev, minDiff *int) {
    if root == nil {
        return
    }

    getMin(root.Left, prev, minDiff)

    if *prev != math.MinInt {
        *minDiff = min(*minDiff, root.Val - *prev)
    }

    *prev = root.Val

    getMin(root.Right, prev, minDiff)
}

func getMinimumDifference(root *TreeNode) int {
    prev := math.MinInt
    minDiff := math.MaxInt

    getMin(root, &prev, &minDiff)

    return minDiff
}
