int transitionPoint(int arr[], int n) {
    int ans, l, r;
    
    ans = -1;
    l = 0;
    r = n-1;
    while(l <= r) {
        int mid = l + (r - l)/2;
        if(arr[mid]) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    return ans;
}
