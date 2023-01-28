class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rowsCount(mat.size()), colsCount(mat[0].size());

        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                rowsCount[i] += mat[i][j];
                colsCount[j] += mat[i][j];
            }
        }

        int ans = 0;
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                if(rowsCount[i] >= 2 || colsCount[j] >= 2)
                    continue;
                ans += mat[i][j];
            }
        }

        return ans;
    }
};
