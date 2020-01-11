class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> aux;
        
        int i, j;
        i = j = 0;
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j])
                aux.push_back(nums1[i++]);
            else
                aux.push_back(nums2[j++]);
        }
        
        while(i < m)
            aux.push_back(nums1[i++]);
        while(j < n)
            aux.push_back(nums2[j++]);
        
        for(int k = 0; k < nums1.size(); k++) {
            nums1[k] = aux[k];
        }
    }
};