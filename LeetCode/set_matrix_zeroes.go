func setZeroes(matrix [][]int)  {
    n, m := len(matrix), len(matrix[0])
    rowZero, colZero := false, false

    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            if matrix[i][j] == 0 {
                if i == 0 {
                    rowZero = true
                } else {
                    matrix[i][0] = 0
                }

                if j == 0 {
                    colZero = true
                } else {
                    matrix[0][j] = 0
                }
            }
        }
    }

    for i := 1; i < n; i++ {
        for j := 1; j < m; j++ {
            if matrix[0][j] == 0 || matrix[i][0] == 0 {
                matrix[i][j] = 0
            }
        }
    }

    if rowZero {
        for j := 0; j < m; j++ {
            matrix[0][j] = 0
        }
    }

    if colZero {
        for i := 0; i < n; i++ {
            matrix[i][0] = 0
        }
    }
}
