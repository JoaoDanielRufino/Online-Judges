type Queue struct {
    arr []int
}

func (q *Queue) push(val int) {
    q.arr = append(q.arr, val)
}

func (q *Queue) pop() int {
    tmp := q.arr[0]
    q.arr = q.arr[1:]
    return tmp
}

func (q *Queue) empty() bool {
    return len(q.arr) == 0
}

func maxCandies(status []int, candies []int, keys [][]int, containedBoxes [][]int, initialBoxes []int) int {
    ans := 0
    canOpen := make([]bool, len(status))
    found := make([]bool, len(status))
    opened := make([]bool, len(status))

    for i, val := range status {
        canOpen[i] = (val == 1)
    }

    q := &Queue{
        arr: []int{},
    }
    for _, box := range initialBoxes {
        q.push(box)
        found[box] = true
    }

    for !q.empty() {
        currBox := q.pop()

        if !canOpen[currBox] || opened[currBox] {
            continue
        }

        for _, key := range keys[currBox] {
            canOpen[key] = true
            if found[key] {
                q.push(key)
            }
        }

        for _, contained := range containedBoxes[currBox] {
            found[contained] = true
            q.push(contained)
        }

        opened[currBox] = true
        ans += candies[currBox]
    }

    return ans
}
