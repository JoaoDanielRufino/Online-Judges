func reductionOperations(nums []int) int {
    count := map[int]int{}

    for _, num := range nums {
        count[num]++
    }

    keys := make([]int, 0, len(count))
    for k := range count {
        keys = append(keys, k)
    }

    sort.Ints(keys)

    ans := 0
    for i := len(keys) - 1; i >= 0; i-- {
        if count[keys[i]] == len(nums) {
            break
        }

        ans += count[keys[i]]

        if i-1 >= 0 {
            count[keys[i-1]] += count[keys[i]]
        }
    }

    return ans
}
