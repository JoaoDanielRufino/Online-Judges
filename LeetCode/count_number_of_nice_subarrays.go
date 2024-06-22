func countAtMost(nums []int, k int) int {
    count, start, numOdd := 0, 0, 0

    for i := range nums {
        if nums[i] % 2 == 1 {
            numOdd++
        }

        for start <= i && numOdd > k {
            if nums[start] % 2 == 1 {
                numOdd--
            }
            start++
        }

        count += (i - start) + 1
    }

    return count
}

func numberOfSubarrays(nums []int, k int) int {
    return countAtMost(nums, k) - countAtMost(nums, k-1)
}

// or prefix sum
func numberOfSubarrays(nums []int, k int) int {
    ans, numOdds := 0, 0
    freq := map[int]int{}

    for _, num := range nums {
        if num % 2 == 1 {
            numOdds++
        }

        if numOdds == k {
            ans++
        }

        if val, ok := freq[numOdds - k]; ok {
            ans += val
        }

        freq[numOdds]++
    }

    return ans
}
