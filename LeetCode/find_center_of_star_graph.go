func findCenter(edges [][]int) int {
    graph := map[int][]int{}

    for _, edge := range edges {
        u, v := edge[0], edge[1]
        graph[u] = append(graph[u], v)
        graph[v] = append(graph[v], u)
    }

    for vertex, adjs := range graph {
        if len(adjs) == len(graph)-1 {
            return vertex
        }
    }

    return -1
}
