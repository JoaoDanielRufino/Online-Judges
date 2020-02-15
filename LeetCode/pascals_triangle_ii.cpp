class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        
        res.push_back(1);
        if(!rowIndex)
            return res;
        
        rowIndex--;
        res.push_back(1);
        
        int k = 1;
        while(rowIndex--) {
            vector<int> tmp;
            tmp.push_back(1);
            for(int i = 0; i < k; i++) {
                tmp.push_back(res[i] + res[i+1]);
            }
            k++;
            tmp.push_back(1);
            res = tmp;
        }
        
        return res;
    }
};