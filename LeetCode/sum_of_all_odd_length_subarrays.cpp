class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        
        for(int size = 1; size <= arr.size(); size += 2) {
           for(int i = 0; i < arr.size(); i++) {
               if(i + size > arr.size())
                   continue;
               for(int j = 0; j < size; j++) {
                   sum += arr[i+j];
               }
           } 
        }
        
        return sum;
    }
};
