type Node struct {
    Key int
    Val int
    Next *Node
}

type MyHashMap struct {
    table [1007]*Node 
}


func Constructor() MyHashMap {
    return MyHashMap{
        table: [1007]*Node{},
    } 
}

func (this *MyHashMap) hash(key int) int {
    return key % len(this.table)
}

func (this *MyHashMap) Put(key int, value int)  {
    hash := this.hash(key)
    
    if this.table[hash] == nil {
        this.table[hash] = &Node{
            Key: key,
            Val: value,
            Next: nil,
        }
        return
    }
    
    curr := this.table[hash]
    for curr != nil {
        if curr.Key == key {
            curr.Val = value
            return
        }
        
        if curr.Next == nil {
            break
        }
        
        curr = curr.Next
    }
    
    curr.Next = &Node{
        Key: key,
        Val: value,
        Next: nil,
    }
}


func (this *MyHashMap) Get(key int) int {
    hash := this.hash(key) 
    curr := this.table[hash]
    
    for curr != nil {
        if curr.Key == key {
            return curr.Val
        } 
        
        curr = curr.Next
    }
    
    return -1
}


func (this *MyHashMap) Remove(key int)  {
    hash := this.hash(key) 
    curr := this.table[hash] 
    var prev *Node = nil
    
    for curr != nil {
        if curr.Key == key {
            if prev == nil {
                this.table[hash] = curr.Next
            } else {
                prev.Next = curr.Next
            }
            return
        }
        
        prev = curr
        curr = curr.Next
    }
}


/**
 * Your MyHashMap object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Put(key,value);
 * param_2 := obj.Get(key);
 * obj.Remove(key);
 */
