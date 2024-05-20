func solve(nums []int, sum *int, currSum, index int) {
    *sum += currSum 

    if index >= len(nums) {
        return
    }

    for i := index; i < len(nums); i++ {
        solve(nums, sum, currSum ^ nums[i], i+1)
    }
}

func subsetXORSum(nums []int) int {
    sum := 0
    solve(nums, &sum, 0, 0) 
    return sum
}
