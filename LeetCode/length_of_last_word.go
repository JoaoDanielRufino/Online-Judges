func lengthOfLastWord(s string) int {
    ans, spaces := 0, false

    for i := len(s)-1; i >= 0; i-- {
        if s[i] == ' ' {
            spaces = true
        } else {
            spaces = false
        }

        if spaces && ans > 0 {
            break
        }

        if !spaces {
            ans++
        }
    }

    return ans
}
