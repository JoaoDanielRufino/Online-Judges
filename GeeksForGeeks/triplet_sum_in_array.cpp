class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A+n);
        
        for(int i = 0; i < n-2; i++) {
            int l = i+1;
            int r = n-1;
            while(l < r) {
                int sum = A[i] + A[l] + A[r];
                if(sum == X)
                    return true;
                if(sum < X)
                    l++;
                else
                    r--;
            }
        }
        
        return false;
    }

};

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        for(int i = 0; i < n-1; i++) {
            unordered_set<int> st;
            for(int j = i+1; j < n; j++) {
                if(st.count(A[i] + A[j] - X))
                    return true;
                st.insert(-1 * A[j]);
            }
        }
        
        return false;
    }

};
