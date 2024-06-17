func intersection(nums1 []int, nums2 []int) []int {
    nums1Map := map[int]bool{}
    
    for _, num := range nums1 {
        nums1Map[num] = true
    }
    
    intersection := []int{}
    for _, num := range nums2 {
        if nums1Map[num] {
            intersection = append(intersection, num)
            nums1Map[num] = false
        }
    }
    
    return intersection
}
