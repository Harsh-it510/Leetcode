class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count = 0;
        for(int i=0; i < points.size() - 1; i++){
            int a = abs(points[i+1][0] - points[i][0]);
            int b = abs(points[i+1][1] - points[i][1]);
            count += max(a, b);
        }
        return count;
    }
};