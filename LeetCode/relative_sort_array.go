func relativeSortArray(arr1 []int, arr2 []int) []int {
    maxElem := math.MinInt

    for _, num := range arr1 {
        if num > maxElem {
            maxElem = num
        }
    }

    count := make([]int, maxElem+1)

    for _, num := range arr1 {
        count[num]++
    }

    ans := make([]int, 0, len(arr1))
    for _, num := range arr2 {
        for count[num] > 0 {
            ans = append(ans, num)
            count[num]--
        }
    }

    for i := range count {
        for count[i] > 0 {
            ans = append(ans, i)
            count[i]--
        }
    }

    return ans
}
