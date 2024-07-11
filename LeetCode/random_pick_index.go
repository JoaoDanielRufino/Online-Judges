type Solution struct {
    numIndexes map[int][]int
}


func Constructor(nums []int) Solution {
    numIndexes := map[int][]int{}
    
    for i, num := range nums {
        numIndexes[num] = append(numIndexes[num], i)
    } 
    
    return Solution{
        numIndexes,
    }
}


func (this *Solution) Pick(target int) int {
    return this.numIndexes[target][rand.Intn(len(this.numIndexes[target]))]
}


/**
 * Your Solution object will be instantiated and called as such:
 * obj := Constructor(nums);
 * param_1 := obj.Pick(target);
 */
