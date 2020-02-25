class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        
        if(!height.size())
            return res;
        
        int n = height.size();
        vector<int> left(n), right(n);
        
        left[0] = height[0];
        for(int i = 1; i < n; i++)
            left[i] = max(height[i], left[i-1]);
        
        right[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--)
            right[i] = max(height[i], right[i+1]);
        
        for(int i = 1; i < n-1; i++)
            res += min(left[i], right[i]) - height[i];
        
        return res;
    }
};