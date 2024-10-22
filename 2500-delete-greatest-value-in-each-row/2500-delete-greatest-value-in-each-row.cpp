class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum = 0;
        
 for (int i = 0; i < grid.size(); i++) {
            sort(grid[i].rbegin(), grid[i].rend()); 
 }
while(!grid[0].empty()){
        int maxi = 0;
        for(int i = 0 ; i < grid.size();i++){
            maxi = max(maxi,grid[i].front());
            grid[i].erase(grid[i].begin());
        }
        
        sum = sum + maxi;
      }
        return sum;
    }
};