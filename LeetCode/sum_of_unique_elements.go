func sumOfUnique(nums []int) int {
    freq := map[int]int{}
    
    for _, num := range nums {
        freq[num]++
    }
    
    ans := 0
    for key, val := range freq {
        if val == 1 {
            ans += key
        }
    }
    
    return ans
}
