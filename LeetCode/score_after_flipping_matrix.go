func flipRow(grid [][]int, row int) {
    for col := 0; col < len(grid[row]); col++ {
        if grid[row][col] == 1 {
            grid[row][col] = 0
        } else {
            grid[row][col] = 1
        }
    }
}

func flipCol(grid [][]int, col int) {
    for row := 0; row < len(grid); row++ {
        if grid[row][col] == 1 {
            grid[row][col] = 0
        } else {
            grid[row][col] = 1
        }
    }
}

func matrixScore(grid [][]int) int {
    for i := range grid {
        if grid[i][0] == 0 {
            flipRow(grid, i)
        }
    }

    for j := 1; j < len(grid[0]); j++ {
        zero, one := 0, 0
        for i := 0; i < len(grid); i++ {
            if grid[i][j] == 1 {
                one++
            } else {
                zero++
            }
        }
        if zero > one {
            flipCol(grid, j)
        }
    }

    ans := 0
    for i := 0; i < len(grid); i++ {
        num := ""
        for j := 0; j < len(grid[i]); j++ {
            num += strconv.Itoa(grid[i][j])
        }
        numInt, _ := strconv.ParseInt(num, 2, 64)
        ans += int(numInt)
    }

    return ans
}
