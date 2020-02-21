// Solution 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        for(int i = 0; i < k; i++) {
            nums.insert(nums.begin(), nums[nums.size()-1]);
            nums.erase(nums.end()-1);
        }
    }
};

// Solution 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        k = k % n;
        vector<int> tmp(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++)
            nums[(i + k) % n] = tmp[i];
    }
};

// Solution 3
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};