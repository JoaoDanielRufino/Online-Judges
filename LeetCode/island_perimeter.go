func countAdjOnes(grid [][]int, i, j int) int {
    ones := 0
    
    if i > 0 && grid[i-1][j] == 1 {
        ones++
    }
    
    if i < len(grid)-1 && grid[i+1][j] == 1 {
        ones++
    }
    
    if j > 0 && grid[i][j-1] == 1 {
        ones++
    }
    
    if j < len(grid[i])-1 && grid[i][j+1] == 1 {
        ones++
    }
    
    return ones
}

func islandPerimeter(grid [][]int) int {
    perimeter := 0
    
    for i := range grid {
        for j := range grid[i] {
            if grid[i][j] == 1 {
                perimeter += (4 - countAdjOnes(grid, i, j))
            }
        }
    }
    
    return perimeter
}
