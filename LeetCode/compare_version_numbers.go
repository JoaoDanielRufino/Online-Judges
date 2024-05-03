func convertToInt(version []string) []int {
    versionInt := []int{}

    for _, v := range version {
        numInt, _ := strconv.Atoi(v)
        versionInt = append(versionInt, numInt)
    }

    return versionInt
}

func compareVersion(version1 string, version2 string) int {
    v1 := convertToInt(strings.Split(version1, "."))
    v2 := convertToInt(strings.Split(version2, "."))

    diff := len(v1) - len(v2)
    if diff > 0 {
        for diff > 0 {
            v2 = append(v2, 0)
            diff--
        }
    } else if diff < 0 {
        for diff < 0 {
            v1 = append(v1, 0)
            diff++
        }
    }

    for i := 0; i < len(v1); i++ {
        if v1[i] > v2[i] {
            return 1
        } else if v1[i] < v2[i] {
            return -1
        }
    }

    return 0
}
