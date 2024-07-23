func singleNumber(nums []int) []int {
    xor := 0
    for _, num := range nums {
        xor ^= num
    }

    setBit := xor & -xor
    a, b := 0, 0
    for _, num := range nums {
        if num & setBit != 0 {
            a ^= num
        } else {
            b ^= num
        }
    }

    return []int{a, b} 
}
