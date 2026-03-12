func transpose(matrix [][]int) [][]int {
    m, n := len(matrix), len(matrix[0])
    transposed := make([][]int, n)

    for i := range transposed {
        transposed[i] = make([]int, m)
    }

    for i := range m {
        for j := range n {
            transposed[j][i] = matrix[i][j]
        }
    }

    return transposed
}
