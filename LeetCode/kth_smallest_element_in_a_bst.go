/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func solve(root *TreeNode, k, ans *int) {
    if root == nil {
        return
    }

    solve(root.Left, k, ans)

    *k--

    if *k == 0 {
        *ans = root.Val
        return
    } else if *k < 0 { //just to optimize
        return
    }

    solve(root.Right, k, ans)
}

func kthSmallest(root *TreeNode, k int) int {
    ans := math.MaxInt 

    solve(root, &k, &ans)

    return ans
}
