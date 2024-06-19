func search(nums []int, target int) int {
    l, r := 0, len(nums)-1

    for l <= r {
        mid := (l + r) / 2

        if nums[mid] == target {
            return mid
        }

        if nums[mid] > nums[r] {
            if nums[mid] > target && target >= nums[l] {
                r = mid - 1
            } else {
                l = mid + 1
            }
        } else if nums[mid] < nums[l] {
            if nums[mid] < target && target <= nums[r] {
                l = mid + 1
            } else {
                r = mid - 1
            }
        } else {
            if nums[mid] < target {
                l = mid + 1
            } else {
                r = mid - 1
            }
        }
    }

    return -1
}
