func majorityElement(nums []int) int {
    counter := map[int]int{}

    for _, num := range nums {
        counter[num]++
        if counter[num] > (len(nums) / 2) {
            return num
        }
    }

    return -1
}
