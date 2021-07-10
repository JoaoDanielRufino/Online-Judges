int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int res = INT_MAX;
    for(int i = 0; i <= arr.size()-k; i++) {
        res = min(res, arr[i+k-1] - arr[i]);
    }
    
    return res;
}
