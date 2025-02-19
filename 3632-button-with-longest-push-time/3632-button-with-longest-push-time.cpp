class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxi = events[0][1];
        int ans = events[0][0];
        for(int i = 1 ; i < events.size() ;i++){
            int time = events[i][1] - events[i-1][1];
            if(maxi < time || (maxi == time && events[i][0] < ans)){
                maxi = time;
                ans = events[i][0];
            }
        }
        return ans;
    }
};