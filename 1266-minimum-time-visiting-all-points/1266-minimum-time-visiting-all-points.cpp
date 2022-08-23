class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int s = 0, n = points.size();
        for(int i = 0; i < n - 1; ++i) {
            int a = abs(points[i + 1][0] - points[i][0]), b = abs(points[i + 1][1] - points[i][1]);
            s += max(a, b);
        }
        return s;
    }
};