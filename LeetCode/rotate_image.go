func rotate(matrix [][]int)  {
    rowStart, rowEnd, colStart, colEnd := 0, len(matrix)-1, 0, len(matrix[0])-1

    for rowStart <= rowEnd && colStart <= colEnd {
        size := (colEnd - colStart) + 1

        for k := 0; k < size-1; k++ {
            p1 := &matrix[rowStart][colStart+k]
            p2 := &matrix[rowStart+k][colEnd]
            p3 := &matrix[rowEnd][colEnd-k]
            p4 := &matrix[rowEnd-k][colStart]

            *p1, *p2, *p3, *p4 = *p4, *p1, *p2, *p3
        }

        rowStart++
        rowEnd--
        colStart++
        colEnd--
    }
}
