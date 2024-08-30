class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        
        int area =0;
        for(int i = 1 ; i < points.size() ; i++){
            int maxi = points[i][0] - points[i-1][0];
            area = max(maxi,area);
        }
        return area;
    }
    
};