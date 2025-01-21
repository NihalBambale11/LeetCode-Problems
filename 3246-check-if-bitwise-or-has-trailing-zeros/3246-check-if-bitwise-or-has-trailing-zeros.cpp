class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i  = 0  ;i < nums.size() ; i++){
            for(int j = i+1 ; j  < nums.size() ; j++){
                int temp = (nums[i] | nums[j]);
                if(temp % 2 == 0){
                    return true;
                }
            }
        }
        return false;
    }
};