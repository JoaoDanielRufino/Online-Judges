func canConstruct(s string, k int) bool {
    if len(s) < k {
        return false
    }
    
    freq := map[rune]int{}
    
    for _, c := range s {
        freq[c]++
    }
    
    numOdds := 0
    for _, val := range freq {
        if val % 2 == 1 {
            numOdds++
        } 
    }
    
    return numOdds <= k
}
