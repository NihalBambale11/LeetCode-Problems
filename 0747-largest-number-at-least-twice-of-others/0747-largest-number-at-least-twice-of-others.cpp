class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi =  0 ;
        int maxindex;
        
        for(int i = 0 ;i < nums.size() ; i++){
            if(maxi < nums[i]){
                maxi = nums[i];
                maxindex = i;
            }
        }
        sort(nums.begin() ,nums.end());
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] * 2 > maxi){
                return -1;
            }
        }
        return maxindex;
    }
};