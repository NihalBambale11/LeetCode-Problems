class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> v(2) ;
        int maxi = 0;
        int index = 0;
        int count = 0;
        for(int i = 0; i < mat.size();i++){
            
            for(int j = 0 ; j < mat[i].size();j++){
                if(mat[i][j] == 1){
                    count++;
                    
                }
            }
            if(maxi < count){
                index = i;
            }
            maxi = max(maxi,count);
            count =0;
        }
        
        return {index,maxi};
    }
};