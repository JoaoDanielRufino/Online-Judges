class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int res = 0;
        
        int l = 0;
        while(l < arr.size()) {
            int i = l;
            while(i < arr.size()-1 && arr[i] < arr[i+1])
                i++;
            
            if(i > l) {
                int peak = i;
                int j = peak;
                while(j < arr.size()-1 && arr[j] > arr[j+1])
                    j++;

                if(j > peak) {
                    res = max(res, j - l + 1);
                    l = j;
                } else {
                    l++;
                }
            } else {
                l++;
            }
        }
        
        return res;
    }
};
