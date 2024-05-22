func isPalindrome(s string) bool {
    l, r := 0, len(s)-1

    for l < r {
        if s[l] != s[r] {
            return false
        }
        l++
        r--
    }

    return true
}

func solve(s string, ans *[][]string, curr []string, start int) {
    if start >= len(s) {
        tmp := make([]string, len(curr))
        copy(tmp, curr)
        *ans = append(*ans, tmp)
        return
    }

    size := 1
    for i := start; i < len(s); i++ {
        sub := s[start:start+size]
        if isPalindrome(sub) {
            solve(s, ans, append(curr, sub), i + 1)
        }
        size++
    }
}

func partition(s string) [][]string {
    ans := [][]string{} 
    solve(s, &ans, []string{}, 0)
    return ans
}
