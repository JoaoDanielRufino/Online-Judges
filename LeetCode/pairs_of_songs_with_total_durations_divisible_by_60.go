func numPairsDivisibleBy60(time []int) int {
    freq := make([]int, 60)
    count := 0
    
    for _, t := range time {
        tmp := t % 60
        
        if tmp == 0 {
            count += freq[0]
        } else {
            count += freq[60-tmp]
        }
        
        freq[tmp]++
    }
    
    return count
}
