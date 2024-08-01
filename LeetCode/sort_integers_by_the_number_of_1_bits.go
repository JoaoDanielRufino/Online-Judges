func countOnes(num int) int {
    ones := 0
    
    for num > 0 {
        ones += num % 2
        num /= 2
    }
    
    return ones
}

func sortByBits(arr []int) []int {
    onesMapping := map[int]int{} 
    
    for _, num := range arr {
        onesMapping[num] = countOnes(num)
    }
    
    sort.Slice(arr, func(i, j int) bool {
        if onesMapping[arr[i]] == onesMapping[arr[j]] {
            return arr[i] < arr[j]
        }
        
        return onesMapping[arr[i]] < onesMapping[arr[j]]
    })
    
    return arr
}
