class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        for(int i = 0; i < n-1; i++) {
            unordered_set<int> st;
            for(int j = i+1; j < n; j++) {
                if(st.count((arr[i] + arr[j]) * -1))
                    return true;
                st.insert(arr[j]);
            }
        }
        
        return false;
    }
};
