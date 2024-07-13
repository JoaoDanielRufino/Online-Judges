func minSteps(s string, t string) int {
    freq := map[byte]int{}
    
    for i := range s {
        freq[s[i]]++
        freq[t[i]]--
    }
    
    ans := 0
    for _, count := range freq {
        if count > 0 {
            ans += count
        }
    }
    
    return ans
}
