func searchMatrix(matrix [][]int, target int) bool {
    l, r := 0, len(matrix)-1

    rowPos := 0
    for l <= r {
        mid := (l + r) / 2

        if matrix[mid][0] == target {
            return true
        }

        if matrix[mid][0] < target {
            rowPos = mid
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    l, r = 0, len(matrix[rowPos])-1
    for l <= r {
        mid := (l + r) / 2

        if matrix[rowPos][mid] == target {
            return true
        }

        if matrix[rowPos][mid] < target {
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    return false
}
