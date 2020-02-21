// Solution 1

class Solution {
public:
    int count = 0;
    
    void merge(vector<int>& nums, int l, int mid, int r) {
        int i, j, k;
        int n1 = mid - l + 1;
        int n2 = r - mid;
        vector<int> L, R;
        
        for(i = 0; i < n1; i++)
            L.push_back(nums[i + l]);
        for(j = 0; j < n2; j++) 
            R.push_back(nums[mid + 1 + j]);
        
        i = l;
        j = mid+1;
        while(i <= mid && j <= r) {
            if((long) nums[i] > 2LL*nums[j]) {
                count += (mid + 1) - i;
                j++;
            }
            else
                i++;
        }
        
        i = j = 0;
        k = l;
        while(i < n1 && j < n2) {
            if(L[i] <= R[j])
                nums[k] = L[i++];
            else
                nums[k] = R[j++];
            k++;
        }
        
        while(i < n1)
            nums[k++] = L[i++];
        while(j < n2)
            nums[k++] = R[j++];
    }
    
    void solve(vector<int>& nums, int l, int r) {
        if(l >= r)
            return;
        
        int mid = l + (r - l)/2;
        solve(nums, l, mid);
        solve(nums, mid+1, r);
        merge(nums, l, mid, r);
    }
    
    int reversePairs(vector<int>& nums) {
        solve(nums, 0, nums.size()-1);
        
        return count;
    }
};

// Solution 2
class Solution {
public:
    int count = 0;
    
    void merge(vector<int>& nums, int l, int mid, int r) {
        int i, j;
        
        i = l;
        j = mid+1;
        while(i <= mid && j <= r) {
            if((long) nums[i] > 2LL*nums[j]) {
                count += (mid + 1) - i;
                j++;
            }
            else
                i++;
        }
        
        sort(nums.begin() + l, nums.begin() + r + 1);
    }
    
    void solve(vector<int>& nums, int l, int r) {
        if(l >= r)
            return;
        
        int mid = l + (r - l)/2;
        solve(nums, l, mid);
        solve(nums, mid+1, r);
        merge(nums, l, mid, r);
    }
    
    int reversePairs(vector<int>& nums) {
        solve(nums, 0, nums.size()-1);
        
        return count;
    }
};