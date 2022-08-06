class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        int index = -1;
        unordered_set<int> st;
        
        for(int i = n-1; i >= 0; i--) {
            if(st.count(arr[i]))
                index = i;
            else
                st.insert(arr[i]);
        }
        
        return index != -1 ? index + 1 : -1;
    }
};
