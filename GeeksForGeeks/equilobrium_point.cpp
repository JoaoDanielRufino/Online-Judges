class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int total, curr;
        
        total = curr = 0;
        for(int i = 0; i < n; i++)
            total += a[i];
            
        for(int i = 0; i < n; i++) {
            total -= a[i];
            if(curr == total)
                return i+1;
            curr += a[i];
        }
        
        return -1;
    }

};
