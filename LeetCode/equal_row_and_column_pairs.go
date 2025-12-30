func checkEqual(grid [][]int, row, col int) bool {
    for i := range grid {
        if grid[row][i] != grid[i][col] {
            return false
        }
    }

    return true
}

func equalPairs(grid [][]int) int {
    colPosMap := make(map[int][]int)

    for i := range grid {
        colPosMap[grid[0][i]] = append(colPosMap[grid[0][i]], i)
    }

    equal := 0
    for i := range grid {
        if colPositions, exists := colPosMap[grid[i][0]]; exists {
            for _, col := range colPositions {
                if checkEqual(grid, i, col) {
                    equal++
                }
            }
        }
    }

    return equal
}
