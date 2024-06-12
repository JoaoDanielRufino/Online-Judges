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

func solve(root *TreeNode, maxSum *int) int {
    if root == nil {
        return 0
    }

    left := max(solve(root.Left, maxSum), 0)
    right := max(solve(root.Right, maxSum), 0)


    *maxSum = max(*maxSum, root.Val + left + right)

    return root.Val + max(left, right)
}

func maxPathSum(root *TreeNode) int {
    maxSum := math.MinInt 

    solve(root, &maxSum)

    return maxSum
}
