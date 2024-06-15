func hammingWeight(n int) int {
    oneBits := 0
    
    for n > 0 {
        oneBits += n & 1
        n = n >> 1
    } 
    
    return oneBits
}
