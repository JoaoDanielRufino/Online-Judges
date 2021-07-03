vector<int> rotLeft(vector<int> a, int d) {
    int aux;
    
    while(d--) {
        aux = a[0];
        for(int i = 0; i < a.size()-1; i++) {
            a[i] = a[i+1];
        }
        a[a.size()-1] = aux;
    }
    
    return a;
}
