class Solution {
public:
    void buildMap(unordered_map<char, int> &mymap) {
        mymap['I'] = 1;
        mymap['V'] = 5;
        mymap['X'] = 10;
        mymap['L'] = 50;
        mymap['C'] = 100;
        mymap['D'] = 500;
        mymap['M'] = 1000;
    }
    
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> mymap;
        
        buildMap(mymap);
        
        for(int i = 0; i < s.size(); i++) {
            res += mymap[s[i]];
            
            if(i >= 1) {
                if(mymap[s[i-1]] < mymap[s[i]])
                    res -= (mymap[s[i-1]] * 2);
            }
        }
        
        return res;
    }
};