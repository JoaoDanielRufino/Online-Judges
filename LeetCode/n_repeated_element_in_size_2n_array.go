func repeatedNTimes(nums []int) int {
    freq := map[int]int{}
    n := len(nums) / 2
    
    for _, num := range nums {
        freq[num]++
        
        if freq[num] == n {
            return num
        }
    }
    
    return -1
}
