func makeFancyString(s string) string {
    ans := []rune{}

    count := 1
    for _, r := range s {
        if len(ans) > 0 {
            if ans[len(ans)-1] == r {
                count++
            } else {
                count = 1
            }
        }
        
        if count < 3 {
            ans = append(ans, r)
        }
    }

    return string(ans)
}
