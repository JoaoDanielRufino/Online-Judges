int minimumSwaps(vector<int> arr) {
    int count = 0;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != i+1) {
            swap(arr[i], arr[arr[i]-1]);
            count++;
            i--;
        }
    }
    
    return count;
}
