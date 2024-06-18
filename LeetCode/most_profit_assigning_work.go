type Job struct {
    difficulty int
    profit int
}

func maxProfitAssignment(difficulty []int, profit []int, workers []int) int {
    jobs := []Job{} 

    for i := range profit {
        jobs = append(jobs, Job{difficulty[i], profit[i]})
    }

    sort.Slice(jobs, func(i, j int) bool {
        return jobs[i].difficulty < jobs[j].difficulty
    })

    ans := 0
    for _, worker := range workers {
        i, maxProfit := 0, 0
        for i < len(jobs) && jobs[i].difficulty <= worker { 
            if jobs[i].profit > maxProfit {
                maxProfit = jobs[i].profit
            }
            i++
        }
        ans += maxProfit
    }

    return ans
}

// better
type Job struct {
    difficulty int
    profit int
}

func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func findDifficulty(difficulty []int, workerAbility int) int {
    diff, l, r := 0, 0, len(difficulty)-1

    for l <= r {
        mid := (l + r) / 2

        if difficulty[mid] == workerAbility {
            return difficulty[mid]
        }

        if difficulty[mid] < workerAbility {
            diff = difficulty[mid]
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    return diff
}

func maxProfitAssignment(difficulty []int, profit []int, workers []int) int {
    jobs := map[int]int{}

    for i := range profit {
        if val, ok := jobs[difficulty[i]]; ok {
            jobs[difficulty[i]] = max(val, profit[i])
        } else {
            jobs[difficulty[i]] = profit[i]
        }
    }

    sort.Ints(difficulty)

    currMaxProfit := 0
    for i := range difficulty {
        currMaxProfit = max(currMaxProfit, jobs[difficulty[i]])
        jobs[difficulty[i]] = currMaxProfit
    }

    maxProfit := 0
    for _, worker := range workers {
        maxProfit += jobs[findDifficulty(difficulty, worker)]
    }

    return maxProfit
}
