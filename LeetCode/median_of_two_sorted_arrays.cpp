class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> tmp;
               
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] <= nums2[j])
                tmp.push_back(nums1[i++]);
            else
                tmp.push_back(nums2[j++]);
        }
        
        while(i < nums1.size())
            tmp.push_back(nums1[i++]);
        while(j < nums2.size())
            tmp.push_back(nums2[j++]);
        
        int size = tmp.size();
        if(!(size & 1))
            return (double) (tmp[size / 2] + tmp[(size / 2) - 1]) / 2;
        else
            return tmp[size / 2];
    }
};