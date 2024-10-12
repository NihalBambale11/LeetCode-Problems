class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini = INT_MAX;
        
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] == target){
                mini = min(abs(i-start),mini);
            }
        }
        return mini;
    }
};