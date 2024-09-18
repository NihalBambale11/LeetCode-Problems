class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = nums[0];
        int maxi = nums[0];
        
        if(nums.size() == 1){
            return 0;
        }
        
        for(int i = 0; i < nums.size() ;i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
        }

        for(int i = 0; i < nums.size() ;i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        

        
        mini = mini + k;
        maxi = maxi - k;
        
        int sub = maxi - mini;
        
        if(sub < 0){
            return  0;
            
        }
        return sub;
    }
};