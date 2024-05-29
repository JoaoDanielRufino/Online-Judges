func min(a, b int) int {
    if a < b {
        return a
    }

    return b
}

func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func maxArea(height []int) int {
    ans, l, r := 0, 0, len(height)-1

    for l < r {
        area := min(height[l], height[r]) * (r-l)
        ans = max(ans, area)

        if height[l] < height[r] {
            l++
        } else {
            r--
        }
    } 

    return ans
}
