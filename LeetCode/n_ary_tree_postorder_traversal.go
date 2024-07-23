/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func solve(root *Node, arr *[]int) {
    if root == nil {
        return
    } 
    
    for _, child := range root.Children {
        solve(child, arr)
    }
    
    *arr = append(*arr, root.Val)
}

func postorder(root *Node) []int {
    ans := []int{}
    
    solve(root, &ans)
    
    return ans
}
