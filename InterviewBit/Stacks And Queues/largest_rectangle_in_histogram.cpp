// https://www.geeksforgeeks.org/largest-rectangle-under-histogram/

int Solution::largestRectangleArea(vector<int> &A) {
    stack<int> st;
    int maxArea = -1, i = 0;
    
    while(i < A.size()) {
        if(st.empty() || A[st.top()] <= A[i])
            st.push(i++);
        else {
            int currMax = st.top();
            st.pop();
            
            int area = A[currMax] * (st.empty() ? i : i - st.top() - 1);
            maxArea = max(maxArea, area);
        }
    }
    
    while(!st.empty()) {
        int curr = st.top();
        st.pop();
        
        int area = A[curr] * (st.empty() ? i : i - st.top() - 1);
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
}
