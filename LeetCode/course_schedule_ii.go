func topologicalSort(graph map[int][]int, u int, seen, path []bool, stack *[]int) bool {
    seen[u] = true
    path[u] = true

    for _, adj := range graph[u] {
        if path[adj] {
            return true
        }

        if !seen[adj] && topologicalSort(graph, adj, seen, path, stack) {
            return true
        }
    }

    *stack = append(*stack, u)
    path[u] = false

    return false
}

func findOrder(numCourses int, prerequisites [][]int) []int {
    graph := map[int][]int{}

    for _, prerequisite := range prerequisites {
        graph[prerequisite[1]] = append(graph[prerequisite[1]], prerequisite[0])
    }

    stack, path := make([]int, 0, numCourses), make([]bool, numCourses)
    seen := make([]bool, numCourses)
    for i := range numCourses {
        if !seen[i] && topologicalSort(graph, i, seen, path, &stack) {
            return []int{}
        }
    }

    ans := make([]int, 0, numCourses)
    for len(stack) > 0 {
        last := len(stack)-1
        ans = append(ans, stack[last])
        stack = stack[:last]
    }

    return ans
}
