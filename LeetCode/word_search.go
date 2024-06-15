var (
    dx = [4]int{1, -1, 0, 0}
    dy = [4]int{0, 0, 1, -1}
)

func canVisit(board [][]byte, word string, index, i, j int) bool {
    if i < 0 || i >= len(board) {
        return false
    }

    if j < 0 || j >= len(board[i]) {
        return false
    }

    return board[i][j] == word[index]
}

func solve(board [][]byte, word string, index, i, j int) bool {
    if index >= len(word) {
        return true
    }

    tmp := board[i][j]
    board[i][j] = '#'

    for k := 0; k < len(dx); k++ {
        x := i + dx[k]
        y := j + dy[k]

        if canVisit(board, word, index, x, y) && solve(board, word, index + 1, x, y) == true {
            return true
        }
    }

    board[i][j] = tmp

    return false
}

func exist(board [][]byte, word string) bool {
    for i := range board {
        for j := range board[i] {
            if board[i][j] == word[0] {
                if solve(board, word, 1, i, j) {
                    return true
                }
            }
        }
    }

    return false
}
