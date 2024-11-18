class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int size = code.size();
        vector<int> res(size,0);
        
        if(k == 0){
            return res;
        }
        
        for(int i = 0 ; i < size ; i++){
            int sum = 0;
            if(k > 0){
                for(int j = 1; j <= k ; j++){
                    sum = sum + code[(i+j) % size];
                }
            }
            else{
                for(int j = 1; j <= -k ; j++){
                    sum = sum + code[(i-j+size) % size];
                }
            }
            res[i] = sum;
        }
        return res;
    }
};