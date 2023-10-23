func isPowerOfFour(n int) bool {
    if n == 1 {
        return true
    } 

    if n <= 0 || n % 4 != 0 {
        return false
    }

    return isPowerOfFour(n / 4) 
}
