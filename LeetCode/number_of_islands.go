var (
    dx = [4]int{1, -1, 0, 0}
    dy = [4]int{0, 0, 1, -1}
)

func canVisit(grid [][]byte, i, j int) bool {
    if i < 0 || i >= len(grid) {
        return false
    }

    if j < 0 || j >= len(grid[i]) {
        return false
    }

    return grid[i][j] == '1'
}

func dfs(grid [][]byte, i, j int, seen [][]bool) {
    seen[i][j] = true

    for k := 0; k < len(dx); k++ {
        x := i + dx[k]
        y := j + dy[k]

        if canVisit(grid, x, y) && !seen[x][y] {
            dfs(grid, x, y, seen)
        }
    }
}

func numIslands(grid [][]byte) int {
    seen := make([][]bool, len(grid)) 

    for i := range seen {
        seen[i] = make([]bool, len(grid[i]))
    }

    islands := 0
    for i := 0; i < len(grid); i++ {
        for j := 0; j < len(grid[i]); j++ {
            if grid[i][j] == '1' && !seen[i][j] {
                dfs(grid, i, j, seen)
                islands++
            }
        }
    }

    return islands
}
