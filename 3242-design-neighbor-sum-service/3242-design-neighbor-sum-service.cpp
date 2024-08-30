class NeighborSum {
public:
    int n;
    vector<vector<int>> matrix;
    NeighborSum(vector<vector<int>>& grid) {
        n = grid.size();
        matrix = grid;
    }
    
    int adjacentSum(int value) {
        int sum = 0;
        for(int i = 0 ; i < n  ; i++){
            for(int j = 0; j < n ; j++){
                if(matrix[i][j] == value){
                    if(i-1 >= 0 && j >= 0 && i-1 < n && j < n){
                        sum = sum + matrix[i-1][j];
                    }
                    if(i >= 0 && j-1 >= 0 && i<n && j-1 < n){
                        sum = sum + matrix[i][j-1]; 
                    }
                    if(i+1 >= 0 && j >= 0 && i+1 < n && j < n){
                        sum = sum + matrix[i+1][j]; 
                    }
                    if(i >= 0 && j+1 >= 0 && i<n && j+1 < n){
                        sum = sum + matrix[i][j+1]; 
                    }

                }
            }
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int dsum = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j< n;j++){
                if(matrix[i][j] == value){
                    if(i+1 >= 0 && j-1 >= 0 && i+1 < n && j-1 < n){
                        dsum = dsum + matrix[i+1][j-1]; 
                    }
                    if(i-1 >= 0 && j+1 >= 0 && i-1 < n && j+1 < n){
                        dsum = dsum + matrix[i-1][j+1]; 
                    }
                    if(i-1 >= 0 && j-1 >= 0 && i-1 < n && j-1 < n){
                        dsum = dsum + matrix[i-1][j-1]; 
                    }
                    if(i+1 >= 0 && j+1 >= 0 && i+1 < n && j+1 < n){
                        dsum = dsum + matrix[i+1][j+1]; 
                    }
                }
            }
        }
        return dsum;
    }
      
    
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */