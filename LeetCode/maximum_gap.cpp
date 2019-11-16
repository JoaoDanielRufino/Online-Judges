class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;
        
        int maxGap = -1;
        priority_queue<int> pq;
        
        for(int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);
        
        int tmp = pq.top();
        pq.pop();
        while(!pq.empty()) {
            int gap = tmp - pq.top();
            tmp = pq.top();
            pq.pop();
            
            maxGap = max(maxGap, gap);
        }
        
        return maxGap;
    }
};