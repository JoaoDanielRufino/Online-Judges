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

// Solution 2
class MinStack {
public:
    stack<int> s1,s2;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= s2.top())
            s2.push(x);
    }
    
    void pop() {
        if(s1.top() == s2.top())
            s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
