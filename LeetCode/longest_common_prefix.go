func commonPrefix(strs []string, prefix string) bool {
    size := len(prefix)

    for _, str := range strs {
        if len(str) < size || prefix != str[:size] {
            return false
        }
    }

    return true
}

func longestCommonPrefix(strs []string) string {
    minSize := math.MaxInt

    for _, str := range strs {
        if len(str) < minSize {
            minSize = len(str)
        }
    }

    ans, l, r := "", 0, minSize
    for l <= r {
        mid := (l + r) / 2
        prefix := strs[0][:mid]

        if commonPrefix(strs, prefix) {
            ans = prefix
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    return ans
}
