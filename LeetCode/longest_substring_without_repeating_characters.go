func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func lengthOfLongestSubstring(s string) int {
    seen := map[byte]bool{}

    l, r, ans := 0, 0, 0
    for r < len(s) {
        if !seen[s[r]] {
            ans = max(ans, (r-l)+1)
            seen[s[r]] = true
            r++
        } else {
            seen[s[l]] = false
            l++
        }
    }

    return ans
}
