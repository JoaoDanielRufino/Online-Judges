int solution(vector<int> nums, int k) {
    priority_queue<int> pq;
    
    for(int x : nums) {
        pq.push(x);
    }
    
    while(--k) {
        pq.pop();
    }
    
    return pq.top();
}
