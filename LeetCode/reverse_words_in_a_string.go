func extractWord(s string, start int) string {
    word := ""

    for i := start; i >= 0; i-- {
        if s[i] == ' ' {
            break
        }

        word = string(s[i]) + word
    }

    return word
}

func reverseWords(s string) string {
    ans := ""

    i := len(s)-1
    for i >= 0 {
        if s[i] != ' ' {
            word := extractWord(s, i)
            ans += word + " "
            i -= len(word)
        } else {
            i--
        }
    }

    return ans[:len(ans)-1]
}
