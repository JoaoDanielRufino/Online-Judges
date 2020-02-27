class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        
        for(int i = 0; i < matrix.size(); i++) {
            for(int n : matrix[i]) {
                pq.push(n);
                if(pq.size() > k)
                    pq.pop();
            }
        }
        
        return pq.top();
    }
};