class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int x1 = points[0][0], x2 = points[0][1], c = 1;
        for(auto point : points) {
            if(point[0] >= x1) {
                x1 = point[0];
            }
            if(point[1] <= x2) {
                x2 = point[1];
            }
            if(x1 > x2) {
                x1 = point[0];
                x2 = point[1];
                c++;
            }
        }
        return c;
    }
};