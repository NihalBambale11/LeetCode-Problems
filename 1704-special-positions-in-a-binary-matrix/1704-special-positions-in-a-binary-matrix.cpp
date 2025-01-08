class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
      int count = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    bool isOne = false;

                    for (int k = 0; k < mat[i].size(); k++) {
                        if (k != j && mat[i][k] == 1) {
                            isOne = true;
                            break;
                        }
                    }

                    for (int k = 0; k < mat.size(); k++) {
                        if (k != i && mat[k][j] == 1) {
                            isOne = true;
                            break;
                        }
                    }

                    if (!isOne) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};