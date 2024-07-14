func toLowerCase(s string) string {
    ans := ""
    
    for i := range s {
        if s[i] >= 'A' && s[i] <= 'Z' {
            ans += string(s[i] + byte('a' - 'A'))
        } else {
            ans += string(s[i])
        }
    }
    
    return ans
}
