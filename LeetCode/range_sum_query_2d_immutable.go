type NumMatrix struct {
    prefixSum [][]int
}


func Constructor(matrix [][]int) NumMatrix {
    prefixSum := make([][]int, len(matrix)) 
    
    for i := range matrix {
        prefixSum[i] = make([]int, len(matrix[i]))
        prefixSum[i][0] = matrix[i][0]
        for j := 1; j < len(matrix[i]); j++ {
            prefixSum[i][j] = prefixSum[i][j-1] + matrix[i][j]
        }
    }
    
    return NumMatrix{
        prefixSum,
    }     
}


func (this *NumMatrix) SumRegion(row1 int, col1 int, row2 int, col2 int) int {
    sum := 0
    
    for i := row1; i <= row2; i++ {
        if col1-1 >= 0 {
            sum += this.prefixSum[i][col2] - this.prefixSum[i][col1-1]
        } else {
            sum += this.prefixSum[i][col2]
        }
    }
    
    return sum
}


/**
 * Your NumMatrix object will be instantiated and called as such:
 * obj := Constructor(matrix);
 * param_1 := obj.SumRegion(row1,col1,row2,col2);
 */
