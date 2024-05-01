func removeTime(arr []int) int {
    ans, max := 0, arr[0]

    for _, x := range arr {
        ans += x
        if x > max {
            max = x
        }
    }

    return ans - max
}

func minCost(colors string, neededTime []int) int {
    time, currColor := 0, 0

    for i := 1; i < len(colors); i++ {
        if colors[currColor] != colors[i] {
            if i - currColor > 1 {
                time += removeTime(neededTime[currColor:i])
            }
            currColor = i
        }
    }

    if len(colors) - currColor > 1 {
        time += removeTime(neededTime[currColor:])
    }

    return time
}
