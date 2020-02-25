void buildMap(unordered_map<char, int> &mymap) {
    mymap['I'] = 1;
    mymap['V'] = 5;
    mymap['X'] = 10;
    mymap['L'] = 50;
    mymap['C'] = 100;
    mymap['D'] = 500;
    mymap['M'] = 1000;
}

int Solution::romanToInt(string A) {
    int res = 0;
    unordered_map<char, int> mymap;
    
    buildMap(mymap);
    
    for(int i = 0; i < A.size(); i++) {
        res += mymap[A[i]];
        
        if(i >= 1) {
            if(mymap[A[i-1]] < mymap[A[i]])
                res -= mymap[A[i-1]] * 2;
        }
    }
    
    return res;
}
