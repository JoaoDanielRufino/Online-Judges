type IntHeap []int

func (h IntHeap) Len() int           { return len(h) }
func (h IntHeap) Less(i, j int) bool { return h[i] > h[j] }
func (h IntHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }

func (h *IntHeap) Push(x any) {
	*h = append(*h, x.(int))
}

func (h *IntHeap) Pop() any {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[0 : n-1]
	return x
}

type Project struct {
    profit int
    capital int
}

func findMaximizedCapital(k int, w int, profits []int, capital []int) int {
    projects := []Project{}

    for i := range profits {
        projects = append(projects, Project{profits[i], capital[i]})
    }

    sort.Slice(projects, func(i, j int) bool {
        return projects[i].capital < projects[j].capital
    })

    h := &IntHeap{}
    heap.Init(h)

    index := 0
    for i := 0; i < k; i++ {
        for index < len(projects) && projects[index].capital <= w {
            heap.Push(h, projects[index].profit)
            index++
        }

        if h.Len() == 0 {
            break
        }

        w += heap.Pop(h).(int)
    }

    return w
}
