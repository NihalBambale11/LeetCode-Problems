class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<int> onesRow(r,0);
        vector<int> onesCol(c,0);

        vector<int> zerosRow(r,0);
        vector<int> zerosCol(c,0);

        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c;j++){
                if(grid[i][j] == 0){
                    zerosRow[i]++;
                    zerosCol[j]++;
                }
                else if(grid[i][j] == 1){
                    onesRow[i]++;
                    onesCol[j]++;
                }
            }
        }

        vector<vector<int>>  diff(r,vector<int>(c));
        for(int i = 0 ; i < r ; i++){
            for(int j =  0; j < c ; j++){
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }
        return diff;
    }
};