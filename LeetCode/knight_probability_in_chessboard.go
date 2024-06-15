var (
    dx = [8]int{-1, -2, -2, -1, 1, 2, 2, 1}
    dy = [8]int{-2, -1, 1, 2, -2, -1, 1, 2}
)

type Key struct {
    k, i, j int
}

func canMove(n, i, j int) bool {
    if i < 0 || i >= n {
        return false
    }
    
    if j < 0 || j >= n {
        return false
    }
    
    return true
}

func countGoodMoves(n, k, i, j int, mem map[Key]float64) float64 {
    if k == 0 {
        return 1.0
    }
    
    key := Key{k, i, j}
    
    if val, ok := mem[key]; ok {
        return val
    }
    
    var goodMoves float64 = 0.0
    for l := 0; l < len(dx); l++ {
        x := i + dx[l]
        y := j + dy[l]
        
        if canMove(n, x, y) {
            goodMoves += countGoodMoves(n, k-1, x, y, mem) / 8.0
        }
    }  
    
    mem[key] = goodMoves
    
    return mem[key]
}

func knightProbability(n int, k int, row int, column int) float64 {
    mem := map[Key]float64{} 
    
    return countGoodMoves(n, k, row, column, mem) 
}
