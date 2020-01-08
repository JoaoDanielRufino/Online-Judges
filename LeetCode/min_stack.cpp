struct StackNode{
    int val;
    int minVal;
    
    StackNode(int x, int y) {
        val = x;
        minVal = y;
    }
};

class MinStack {
public:
    stack<StackNode> st;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(StackNode(x, st.empty() ? x : min(st.top().minVal, x)));
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().val;
    }
    
    int getMin() {
        return st.top().minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */