type Queue struct {
    arr []int
}

func (q *Queue) push(elem int) {
    q.arr = append(q.arr, elem)
}

func (q *Queue) pop() int {
    tmp := q.arr[0]
    q.arr = q.arr[1:]
    return tmp
}

func (q *Queue) top() int {
    return q.arr[0]
}

func (q *Queue) size() int {
    return len(q.arr)
}

type RecentCounter struct {
    queue *Queue 
}


func Constructor() RecentCounter {
    return RecentCounter{
        queue: &Queue{
            arr: []int{},
        },
    } 
}


func (this *RecentCounter) Ping(t int) int {
    this.queue.push(t)

    start := t-3000
    for this.queue.top() < start {
        this.queue.pop()
    }

    return this.queue.size()
}


/**
 * Your RecentCounter object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Ping(t);
 */
