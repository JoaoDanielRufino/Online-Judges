class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size() || !matrix[0].size())
            return false;
        
        int i = 0, j = matrix.size()-1;
        int mid = 0;
        
        while(i <= j) {
            mid = (i + j) / 2;
            
            if(matrix[mid][0] == target)
                return true;
            
            if(matrix[mid][0] > target)
                j = mid-1;
            else
                i = mid+1;
        }
        
        int line;
        
        if(mid > 0)
            line = matrix[mid][0] > target ? mid-1 : mid;
        
        i = 0; j = matrix[line].size()-1;
        
        while(i <= j) {
            mid = (i + j) / 2;
            
            if(matrix[line][mid] == target)
                return true;
            
            if(matrix[line][mid] > target)
                j = mid-1;
            else
                i = mid+1;
        }
        
        return false;
    }
};