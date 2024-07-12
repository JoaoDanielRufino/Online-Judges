func reverseOnlyLetters(s string) string {
    ans := []rune{}    
    runeS := []rune(s)
    i, last := 0, len(runeS)-1
    
    for i < len(runeS) {
        if !unicode.IsLetter(runeS[i]) {
            ans = append(ans, runeS[i])
            i++
        } else if !unicode.IsLetter(runeS[last]) {
            last--
        } else {
            ans = append(ans, runeS[last])
            i++
            last--
        }
    }
    
    return string(ans)
}
