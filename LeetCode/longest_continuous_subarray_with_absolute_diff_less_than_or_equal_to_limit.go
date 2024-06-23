func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func insertPos(arr []int, num int) int {
    l, r := 0, len(arr)-1

    for l <= r {
        mid := (l + r) / 2

        if arr[mid] < num {
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    return l
}

// better to use min and max heap, but since I'm lazy to use that on Go, I decided to keep track of a sort array
func longestSubarray(nums []int, limit int) int {
    l, r, minVal, maxVal, ans := 0, 0, nums[0], nums[0], 0

    window := []int{nums[0]}
    for r < len(nums) {
        if maxVal - minVal <= limit {
            ans = max(ans, (r - l) + 1)
            
            r++

            if r >= len(nums) {
                break
            }

            pos := insertPos(window, nums[r])
            window = slices.Insert(window, pos, nums[r])
            minVal = window[0]
            maxVal = window[len(window)-1]
        } else {
            pos, _ := slices.BinarySearch(window, nums[l])
            window = slices.Delete(window, pos, pos+1)
            minVal = window[0]
            maxVal = window[len(window)-1]
            l++
        }
    }

    return ans
}
