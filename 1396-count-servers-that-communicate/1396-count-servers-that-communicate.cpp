class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int count = 0 ;
        vector<int> vrow(grid.size(),0);
        vector<int>  vcol(grid[0].size(),0);

        for(int i = 0; i < grid.size() ;i++){
            for(int j = 0 ; j < grid[i].size() ;j++){
                if(grid[i][j] == 1){
                    vrow[i]++;
                    vcol[j]++;
                }        
            }
        }

        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ;j < grid[i].size();j++){
                if(grid[i][j] == 1 && (vrow[i] > 1 || vcol[j] > 1 )){
                    count++;
                }
            }
        }
         return count;

            }   
    
};