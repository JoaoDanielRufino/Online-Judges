class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int arrows = 1;
        pair<int, int> pointToCompare = make_pair(points[0][0], points[0][1]);
        for(int i = 1; i < points.size(); i++) { 
            int currStart = points[i][0];
            int currEnd = points[i][1];
            if(currStart >= pointToCompare.first && currStart <= pointToCompare.second) {
                pointToCompare.first = max(pointToCompare.first, currStart);
                pointToCompare.second = min(pointToCompare.second, currEnd);
            } else {
                pointToCompare = make_pair(currStart, currEnd);
                arrows++;
            }
        }

        return arrows;
    }
};
