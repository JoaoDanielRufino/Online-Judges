func countSeniors(details []string) int {
    count := 0

    for _, detail := range details {
        if detail[11] > '6' {
            count++
        } else if detail[11] == '6' && detail[12] > '0' {
            count++
        }
    } 

    return count
}
