class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int count = 0;
        
        for(int i = 0 ; i < numOnes ; i++){
            if(k > 0){
                count = count + 1;
                k--;
            }
        }
        
        
        for(int i = 0 ; i < numZeros ; i++){
            if(k > 0){
                count = count + 0;
                k--;
            }
        }

        for(int i = 0 ; i < numNegOnes ; i++){
            if(k > 0){
                count = count - 1;
                k--;
            }
        }
        return count;
    }
};