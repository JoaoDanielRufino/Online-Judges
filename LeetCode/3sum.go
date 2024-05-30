func twoSum(nums []int, seen map[[3]int]bool, ans *[][]int, currNum, start int) {
    l, r := start, len(nums)-1

    for l < r {
        sum := nums[l] + nums[r] + currNum

        if sum == 0 {
            aux := [3]int{nums[l], nums[r], currNum}
            if !seen[aux] {
                *ans = append(*ans, aux[:])
                seen[aux] = true
            }
        }

        if sum < 0 {
            l++
        } else {
            r--
        }
    }
}

func threeSum(nums []int) [][]int {
    seen := map[[3]int]bool{}

    sort.Ints(nums)

    ans := [][]int{}
    for i, num := range nums {
        twoSum(nums, seen, &ans, num, i+1)
    }

    return ans
}
