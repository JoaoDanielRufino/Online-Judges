type Pair struct {
    i, j int
}

func findDiagonalOrder(nums [][]int) []int {
    ans := []int{}

    queue := []Pair{
        Pair{
            0,
            0,
        },
    }
    for len(queue) > 0 {
        index := queue[0]
        queue = queue[1:]

        ans = append(ans, nums[index.i][index.j])

        if index.j == 0 && index.i < len(nums) - 1 {
            queue = append(queue, Pair{index.i + 1, index.j})
        }

        if index.j < len(nums[index.i]) - 1 {
            queue = append(queue, Pair{index.i, index.j + 1})
        }
    }

    return ans
}
