func solve(s string, dict map[string]bool, curr string) []string {
    if len(s) == 0 {
        return []string{curr[:len(curr)-1]}
    }

    ans := []string{}
    for i := 1; i <= len(s); i++ {
        substring := s[:i]
        if dict[substring] {
            ans = append(ans, solve(s[i:], dict, curr + substring + " ")...)
        }
    }

    return ans
}

func wordBreak(s string, wordDict []string) []string {
    dict := map[string]bool{}

    for _, word := range wordDict {
        dict[word] = true
    }

    return solve(s, dict, "")
}
