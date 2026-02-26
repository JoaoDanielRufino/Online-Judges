func hasCycle(course int, graph map[int][]int, seen, stack map[int]bool) bool {
    seen[course] = true
    stack[course] = true

    for _, adj := range graph[course] {
        if stack[adj] {
            return true
        }

        if !seen[adj] && hasCycle(adj, graph, seen, stack) {
            return true
        }
    }

    stack[course] = false

    return false
}

func canFinish(numCourses int, prerequisites [][]int) bool {
    graph := make(map[int][]int)

    for _, prereq := range prerequisites {
        graph[prereq[1]] = append(graph[prereq[1]], prereq[0])
    }

    seen := make(map[int]bool)
    for course := range numCourses {
        if !seen[course] && hasCycle(course, graph, seen, make(map[int]bool)) {
            return false
        }
    }

    return true
}
