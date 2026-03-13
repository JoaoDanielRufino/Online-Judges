func mergeHighDefinitionIntervals(intervals [][]int32) [][]int32 {
    if len(intervals) == 0 {
        return [][]int32{}
    }
    
    slices.SortFunc(intervals, func (a, b []int32) int {
        if cmpFirst := cmp.Compare(a[0], b[0]); cmpFirst != 0 {
            return cmpFirst
        }
        
        return cmp.Compare(a[1], b[1])
    })
    
    merged := [][]int32{}
    currInterval := intervals[0]
    
    for i := 1; i < len(intervals); i++ {
        interval := intervals[i]
        
        if interval[0] <= currInterval[1] {
            currInterval[1] = max(currInterval[1], interval[1])
        } else {
            merged = append(merged, currInterval)
            currInterval = interval
        }
    }
    
    merged = append(merged, currInterval)

    return merged
}
