func isNumber(a byte) bool {
    return a >= '0' && a <= '9'
}

func isRowValid(board [][]byte) bool {
    for i := 0; i < len(board); i++ {
        seen := map[byte]bool{}
        for j := 0; j < len(board[i]); j++ {
            if isNumber(board[i][j]) {
                if seen[board[i][j]] {
                    return false
                } else {
                    seen[board[i][j]] = true
                }
            }
        }
    }

    return true
}

func isColumnValid(board [][]byte) bool {
    for i := 0; i < len(board); i++ {
        seen := map[byte]bool{}
        for j := 0; j < len(board[i]); j++ {
            if isNumber(board[j][i]) {
                if seen[board[j][i]] {
                    return false
                } else {
                    seen[board[j][i]] = true
                }
            }
        }
    }

    return true
}

func isBoxValid(board [][]byte, i, j int) bool {
    seen := map[byte]bool{}

    for k := 0; k < 3; k++ {
        for l := 0; l < 3; l++ {
            if isNumber(board[i + k][j + l]) {
                if seen[board[i + k][j + l]] {
                    return false
                } else {
                    seen[board[i + k][j + l]] = true
                }
            }
        }
    }

    return true
}

func isSubBoxesValid(board [][]byte) bool {
    for i := 0; i < len(board); i += 3 {
        for j := 0; j < len(board[i]); j += 3 {
            if !isBoxValid(board, i, j) {
                return false
            }
        }
    }

    return true
}

func isValidSudoku(board [][]byte) bool {
    return isRowValid(board) && isColumnValid(board) && isSubBoxesValid(board)
}
