type RandomizedSet struct {
    set map[int]int
    nums []int
}


func Constructor() RandomizedSet {
    return RandomizedSet{
        set: map[int]int{},
        nums: []int{},
    } 
}


func (this *RandomizedSet) Insert(val int) bool {
    if _, ok := this.set[val]; ok {
        return false
    }

    this.set[val] = len(this.nums)
    this.nums = append(this.nums, val)

    return true
}


func (this *RandomizedSet) Remove(val int) bool {
    if _, ok := this.set[val]; !ok {
        return false
    }

    lastPos := len(this.set)-1
    tmp := this.nums[lastPos]

    this.nums[this.set[val]], this.nums[lastPos] = this.nums[lastPos], this.nums[this.set[val]]
    this.nums = this.nums[:lastPos]

    this.set[tmp] = this.set[val]
    delete(this.set, val)

    return true
}


func (this *RandomizedSet) GetRandom() int {
    return this.nums[rand.Intn(len(this.nums))] 
}


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Insert(val);
 * param_2 := obj.Remove(val);
 * param_3 := obj.GetRandom();
 */
