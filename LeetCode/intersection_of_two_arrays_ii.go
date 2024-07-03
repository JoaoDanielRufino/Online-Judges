func intersect(nums1 []int, nums2 []int) []int {
    freq := map[int]int{}

    for _, num := range nums1 {
        freq[num]++
    }

    ans := []int{}
    for _, num := range nums2 {
        if freq[num] > 0 {
            ans = append(ans, num)
            freq[num]--
        }
    }

    return ans
}
