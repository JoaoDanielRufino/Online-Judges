func increasingTriplet(nums []int) bool {
    firstSmallest, secondSmallest := math.MaxInt, math.MaxInt

    for _, num := range nums {
        if num <= firstSmallest {
            firstSmallest = num
        } else if num <= secondSmallest {
            secondSmallest = num
        } else {
            return true
        }
    }

    return false
}
