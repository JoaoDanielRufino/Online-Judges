func solve(digits string, index int, digitsMap map[byte][]byte, curr string) []string {
    if len(curr) == len(digits) {
        return []string{curr}
    }

    ans := []string{}
    for _, letter := range digitsMap[digits[index]] {
        ans = append(ans, solve(digits, index+1, digitsMap, curr + string(letter))...)
    }

    return ans
}

func letterCombinations(digits string) []string {
    if len(digits) == 0 {
        return []string{}
    }

    digitsMap := map[byte][]byte{
        '2': []byte{'a', 'b', 'c'},
        '3': []byte{'d', 'e', 'f'},
        '4': []byte{'g', 'h', 'i'},
        '5': []byte{'j', 'k', 'l'},
        '6': []byte{'m', 'n', 'o'},
        '7': []byte{'p', 'q', 'r', 's'},
        '8': []byte{'t', 'u', 'v'},
        '9': []byte{'w', 'x', 'y', 'z'},
    }

    return solve(digits, 0, digitsMap, "")
}
