class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int ans, l, r;
       
       l = 0;
       r = n-1;
       while(l <= r) {
           int mid = l + (r - l)/2;
           if(!mid || arr[mid] > arr[mid-1]) {
               ans = mid;
               l = mid + 1;
           } else {
               r = mid - 1;
           }
       }
       
       return ans;
    }
};
