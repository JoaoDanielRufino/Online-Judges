vector<int> reverseArray(vector<int> a) {
    int l = 0, r = a.size()-1;
    
    while(l < r) {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
    
    return a;
}
