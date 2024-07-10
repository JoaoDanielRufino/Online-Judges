func minOperations(logs []string) int {
    depth := 0

    for _, log := range logs {
        if log == "./" {
            continue
        }

        if log == "../" {
            if depth > 0 {
                depth--
            }
        } else {
            depth++
        }
    }

    return depth
}
