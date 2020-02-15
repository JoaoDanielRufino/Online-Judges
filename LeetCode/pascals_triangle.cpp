class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > res;
        
        if(!numRows)
            return res;
        
        res.push_back(vector<int>(1, 1));
        numRows--;
        
        int k = 0;
        while(numRows--) {
            vector<int> tmp;
            tmp.push_back(1);
            for(int i = 0; i < k; i++) {
                int size = res.size()-1;
                tmp.push_back(res[size][i] + res[size][i+1]);
            }
            k++;
            tmp.push_back(1);
            res.push_back(tmp);
        }
        
        return res;
    }
};