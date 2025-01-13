func max(a, b int) int {
    if a > b {
        return a
    }

    return b
}

func maxScore(s string) int {
    ones := 0

    for i := range s {
        if s[i] == '1' {
            ones++
        }
    }

    ans, zeros := 0, 0
    for i := 0; i < len(s)-1; i++ {
        if s[i] == '1' {
            ones--
        } else if s[i] == '0' {
            zeros++
        }

        ans = max(ans, zeros + ones)
    }

    return ans
}
