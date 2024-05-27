func countGreaterOrEqual(nums []int, x int) int {
    count := 0

    for i := 0; i < len(nums); i++ {
        if nums[i] >= x {
            count++
        }
    }

    return count
}

func specialArray(nums []int) int {
    maxVal := 0

    for _, num := range nums {
        if maxVal < num {
            maxVal = num
        }
    }

    l, r := 0, maxVal
    for l <= r {
        mid := (r + l) / 2
        count := countGreaterOrEqual(nums, mid)
        fmt.Println(mid, count, l, r)
        if count == mid {
            return mid
        }

        if count < mid {
            r = mid - 1
        } else {
            l = mid + 1
        }
    }

    return -1
}
