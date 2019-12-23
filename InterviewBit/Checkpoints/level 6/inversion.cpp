int merge(vector<int> &A, int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> L, R;
    
    for(int i = 0; i < n1; i++)
        L.push_back(A[i + l]);
    for(int i = 0; i < n2; i++)
        R.push_back(A[mid + 1 + i]);
        
    int i, j, k, count;
    i = j = count = 0;
    k = l;
    while(i < n1 && j < n2) {
        if(L[i] > R[j]) {
            A[k] = R[j++];
            count += L.size() - i;
        }
        else
            A[k] = L[i++];
        k++;
    }
    
    while(i < n1)
        A[k++] = L[i++];
    while(j < n2)
        A[k++] = R[j++];
        
    return count;
}

int mergeSort(vector<int> &A, int l, int r) {
    if(l >= r)
        return 0;
    
    int mid = (l + r) / 2;
    int x = mergeSort(A, l, mid);
    int y = mergeSort(A, mid+1, r);
    return x + y + merge(A, l, mid, r);
}

int Solution::countInversions(vector<int> &A) {
    return mergeSort(A, 0, A.size()-1);
}
