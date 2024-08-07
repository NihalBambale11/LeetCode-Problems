class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0;
        int doubleSum = 0;
        
        for(int x : nums){
            if(x > 9){
                doubleSum = doubleSum + x;
            }
            else{
                singleSum = singleSum + x;
            }
        }
        
        if(doubleSum > singleSum){
            return true;
        }
        else if(singleSum > doubleSum){
            return true;
        }
        else{
            return false;
        }
    }
};