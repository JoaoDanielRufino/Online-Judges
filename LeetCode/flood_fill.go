func solve(image [][]int, i, j, startColor, replaceColor int) {
    if i < 0 || i >= len(image) || j < 0 || j >= len(image[i]) || image[i][j] != startColor {
        return
    }
    
    image[i][j] = replaceColor
    solve(image, i + 1, j, startColor, replaceColor)
    solve(image, i - 1, j, startColor, replaceColor)
    solve(image, i, j + 1, startColor, replaceColor)
    solve(image, i, j - 1, startColor, replaceColor)
}

func floodFill(image [][]int, sr int, sc int, color int) [][]int {
    if image[sr][sc] != color {
        solve(image, sr, sc, image[sr][sc], color)
    }
    
    return image
}
