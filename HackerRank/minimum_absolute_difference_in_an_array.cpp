int minimumAbsoluteDifference(vector<int> arr) {
    int res;
        
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size()-1; i++) {
        res = min(res, abs(arr[i] - arr[i+1]));
    }
    
    return res;
}
