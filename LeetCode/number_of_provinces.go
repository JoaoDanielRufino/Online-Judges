func dfs(graph map[int][]int, city int, seen []bool) {
    seen[city] = true

    for _, adj := range graph[city] {
        if !seen[adj] {
            dfs(graph, adj, seen)
        }
    }
}

func findCircleNum(isConnected [][]int) int {
    graph := make(map[int][]int)

    for i := range isConnected {
        for j := range isConnected[i] {
            if i != j && isConnected[i][j] == 1 {
                graph[i] = append(graph[i], j)
            }
        }
    }

    provinces := 0
    seen := make([]bool, len(isConnected))
    for i := range isConnected {
        if !seen[i] {
            dfs(graph, i, seen)
            provinces++
        }
    }

    return provinces
}
