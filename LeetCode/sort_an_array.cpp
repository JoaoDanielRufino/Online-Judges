class Solution {
public:
    void merge(vector<int>& nums, int l, int mid, int r) {
        vector<int> a, b;

        for(int i = l; i <= mid; i++)
            a.push_back(nums[i]);
        for(int i = mid + 1; i <= r; i++)
            b.push_back(nums[i]);

        int i, j;
        i = j = 0;
        while(i < a.size() && j < b.size()) {
            if(a[i] <= b[j])
                nums[l++] = a[i++];
            else
                nums[l++] = b[j++];
        } 

        while(i < a.size())
            nums[l++] = a[i++];
        while(j < b.size())
            nums[l++] = b[j++];
    }

    void mergeSort(vector<int>& nums, int l, int r) {
        if(l >= r)
            return;

        int mid = l + (r - l)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r); 
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};
