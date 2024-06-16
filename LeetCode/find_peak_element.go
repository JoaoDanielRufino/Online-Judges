func findPeakElement(nums []int) int {
    if len(nums) == 1 {
        return 0
    }

    l, r, peak := 0, len(nums)-1, 0

    for l <= r {
        mid := (l + r) / 2

        if mid > 0 {
            if nums[mid] > nums[mid-1] {
                peak = mid
                l = mid + 1
            } else {
                r = mid - 1
            }
        } else if mid == 0 {
            if nums[mid+1] > nums[mid] {
                return mid+1
            }
            return mid
        } else if mid == len(nums)-1 {
            if nums[mid] < nums[mid-1] {
                return mid-1
            }
            return mid
        }
    }

    return peak
}

// better
func findPeakElement(nums []int) int {
    l, r, peak := 0, len(nums)-1, 0

    for l <= r {
        mid := (l + r) / 2

        if mid == 0 || nums[mid] > nums[mid-1] {
            peak = mid
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    return peak
}
