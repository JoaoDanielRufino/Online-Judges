import "math"

func bestClosingTime(customers string) int {
    n := len(customers)
    suffixSumYs := make([]int, n)

    if customers[n-1] == 'Y' {
        suffixSumYs[n-1] = 1
    }

    for i := n-2; i >= 0; i-- {
        if customers[i] == 'Y' {
            suffixSumYs[i] = suffixSumYs[i+1] + 1
        } else {
            suffixSumYs[i] = suffixSumYs[i+1]
        }
    }

    countNs, closeHour, penalty := 0, 0, math.MaxInt
    for i := range customers {
        currPenalty := countNs + suffixSumYs[i]

        if currPenalty < penalty {
            penalty = currPenalty
            closeHour = i
        }

        if customers[i] == 'N' {
            countNs++
        }
    }

    if countNs < penalty {
        return n
    }

    return closeHour
}
