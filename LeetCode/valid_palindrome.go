func isAlphaNumeric(c byte) bool {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
}

func isPalindrome(s string) bool {
    l, r := 0, len(s)-1

    for l < r {
        if !isAlphaNumeric(s[l]) {
            l++
        }

        if !isAlphaNumeric(s[r]) {
            r--
        }

        if isAlphaNumeric(s[l]) && isAlphaNumeric(s[r]) {
            if unicode.ToLower(rune(s[l])) != unicode.ToLower(rune(s[r])) {
                return false
            }
            l++
            r--
        }
    }

    return true
}
