class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> matrix (m,vector<int>(n));
        
        for(auto mat : guards){
            matrix[mat[0]][mat[1]] = 2;
        }
        
        for(auto mat : walls){
            matrix[mat[0]][mat[1]] = 3;
        }
        
        for(auto x : guards){
            int row =  x[0];
            int col =  x[1];
            
            for(int i = row+1 ; i < m;i++){
                if(matrix[i][col] == 2 || matrix[i][col] == 3){
                    break;
                }
                matrix[i][col] = 1;
            }
            
            for(int i = row-1; i >= 0 ; i--){
                if(matrix[i][col] == 2 || matrix[i][col] == 3){
                    break;
                }
                matrix[i][col] = 1;
            }
            
            for(int i = col+1 ; i < n ; i++){
                if(matrix[row][i] == 2 || matrix[row][i] == 3){
                    break;
                }
                matrix[row][i] = 1;
            }
            
            for(int i = col-1 ; i >= 0 ; i--){
                if(matrix[row][i] == 2 || matrix[row][i] == 3){
                    break;
                }
                matrix[row][i] = 1;
            }
        }
       
        int count = 0;
        for(int i = 0; i < m ; i++){
            for(int j = 0 ; j < n ;j++){
                if(matrix[i][j] == 0){
                    count++;
                }
            }
        }
        return count;
    }
};