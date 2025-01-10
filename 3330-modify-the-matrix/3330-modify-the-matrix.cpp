class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == -1) {
                    int maxi = 0;
                    int x = i;
                    int y = j;
                    // bottom
                    for (int k = i; k < matrix.size(); k++) {
                        maxi = max(matrix[k][j], maxi);
                        matrix[x][y] = maxi;
                    }

                    // top
                    for (int k = i; k >= 0; k--) {
                        maxi = max(matrix[k][j], maxi);
                        matrix[x][y] = maxi;
                    }
                }
            }
        }
        return matrix;
    }
};