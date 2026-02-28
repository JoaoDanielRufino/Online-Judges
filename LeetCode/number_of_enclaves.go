var (
    dx = [4]int{1, -1, 0, 0}
    dy = [4]int{0, 0, 1, -1}
)

func isBoundary(grid [][]int, i, j int) bool {
    if i == 0 || i == len(grid) - 1 {
        return true
    }

    return j == 0 || j == len(grid[i]) - 1
}

func canMove(grid [][]int, i, j int, seen [][]bool) bool {
    if i < 0 || i >= len(grid) {
        return false
    }

    if j < 0 || j >= len(grid[i]) {
        return false
    }

    return !seen[i][j] && grid[i][j] == 1
}

func cellsCannotWalkOffBoundary(grid [][]int, i, j int, boundaryFound *bool, seen [][]bool) int {
    seen[i][j] = true

    if isBoundary(grid, i, j) {
        *boundaryFound = true
    }

    cells := 1
    for k := 0; k < 4; k++ {
        nextI, nextJ := i + dx[k], j + dy[k]

        if canMove(grid, nextI, nextJ, seen) {
            cells += cellsCannotWalkOffBoundary(grid, nextI, nextJ, boundaryFound, seen)
        }
    }

    if *boundaryFound {
        return 0
    }

    return cells
}

func numEnclaves(grid [][]int) int {
    seen := make([][]bool, len(grid)) 

    for i := range len(seen) {
        seen[i] = make([]bool, len(grid[i]))
    }

    cells := 0
    for i := range grid {
        for j := range grid[i] {
            if grid[i][j] == 1 && !seen[i][j] {
                boundaryFound := false
                cells += cellsCannotWalkOffBoundary(grid, i, j, &boundaryFound, seen)
            }
        }
    }

    return cells
}
