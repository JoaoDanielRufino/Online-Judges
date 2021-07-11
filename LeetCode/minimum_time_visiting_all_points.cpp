class Solution {
public:
    int solve(int x1, int y1, int x2, int y2) {
        if(x1 == x2 && y1 == y2)
            return 0;
        
        if(x1 > x2 && y1 > y2)
            return 1 + solve(x1-1, y1-1, x2, y2);
        if(x1 > x2 && y1 < y2)
            return 1 + solve(x1-1, y1+1, x2, y2);
        if(x1 < x2 && y1 > y2)
            return 1 + solve(x1+1, y1-1, x2, y2);
        if(x1 < x2 && y1 < y2)
            return 1 + solve(x1+1, y1+1, x2, y2);
        if(x1 == x2 && y1 < y2)
            return y2 - y1;
        if(x1 == x2 && y1 > y2)
            return y1 - y2;
        if(y1 == y2 && x1 < x2)
            return x2 - x1;
        return x1 - x2;
    }
    
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int distance = 0;
        
        for(int i = 0; i < points.size()-1; i++) {
            distance += solve(points[i][0], points[i][1], points[i+1][0], points[i+1][1]);
        }
        
        return distance;
    }
};
