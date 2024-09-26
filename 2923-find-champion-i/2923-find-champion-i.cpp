class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxi = 0;
        int maxii;
        for(int i = 0; i < grid.size();i++){
            int count = 0;
            for(int j = 0 ; j< grid[i].size();j++){
                if(grid[i][j] == 1){
                    count++;
                }
            }
            if(maxi < count){
                maxi = count;
                maxii = i;
            }
        }
        return maxii;
    }
};