class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> v1 (matrix.size() , INT_MAX);
        vector<int> v2 (matrix[0].size() ,0);

        for(int i = 0; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[i].size() ; j++){
                int ans = matrix[i][j];
                v1[i] = min(v1[i] , ans);
                v2[j] = max(v2[j] , ans);
            }
        }

        for(int i = 0; i < matrix.size()  ; i++){
            for(int j = 0; j < matrix[i].size() ;j++){
                int ans = matrix[i][j];
                if(ans == v1[i] && ans == v2[j]){
                    return {ans};
                }
            }
        }
        return {};
    }
};