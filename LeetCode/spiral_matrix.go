func solve(matrix [][]int, rowStart, rowEnd, colStart, colEnd int) []int {
    ans := []int{}

    if rowStart > rowEnd || colStart > colEnd {
        return ans
    }

    for j := colStart; j <= colEnd; j++ {
        ans = append(ans, matrix[rowStart][j])
    }

    rowStart++

    if rowStart <= rowEnd {
        for i := rowStart; i <= rowEnd; i++ {
            ans = append(ans, matrix[i][colEnd])
        }
    }

    colEnd--

    if rowStart <= rowEnd {
        for j := colEnd; j >= colStart; j-- {
            ans = append(ans, matrix[rowEnd][j])
        }
    }

    rowEnd--

    if colStart <= colEnd {
        for i := rowEnd; i >= rowStart; i-- {
            ans = append(ans, matrix[i][colStart])
        }
    }

    colStart++

    ans = append(ans, solve(matrix, rowStart, rowEnd, colStart, colEnd)...)

    return ans
}

func spiralOrder(matrix [][]int) []int {
    return solve(matrix, 0, len(matrix)-1, 0, len(matrix[0])-1)
}
