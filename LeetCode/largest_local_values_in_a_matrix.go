func max(a, b int) int {
    if a < b {
        return b
    }
    return a
}

func findMax(grid [][]int, i, j int) int {
    rowEnd := i + 2
    colEnd := j + 2
    maxVal := math.MinInt

    for row := i; row <= rowEnd; row++ {
        for col := j; col <= colEnd; col++ {
            maxVal = max(maxVal, grid[row][col])
        }
    }

    return maxVal
}

func largestLocal(grid [][]int) [][]int {
    n := len(grid) - 2
    ans := make([][]int, n)

    for i := range n {
        ans[i] = make([]int, n)
    }

    for i := range n {
        for j := range n {
            ans[i][j] = findMax(grid, i, j)
        }
    }

    return ans
}
