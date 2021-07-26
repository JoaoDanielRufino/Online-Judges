class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int> res(cells.begin(), cells.end());
        
        n = n%14 == 0 ? 14 : n%14;
        
        while(n--) {
            vector<int> aux(res.begin(), res.end());
            for(int i = 1; i <= 6; i++) {
                res[i] = (aux[i-1] == aux[i+1]);
            }
            res[0] = 0;
            res[7] = 0;
            // for(int x : res) {
            //     cout << x << " ";
            // }
            // cout << endl;
        }       
        
        return res;
    }
};
