class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count = 0 ;
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i < nums.size() ;i++){
            if(nums[i] <= nums[i-1]){
                int incre = nums[i-1] + 1 - nums[i];
                count = count + incre;
                nums[i] = nums[i-1] +1;
            }
        }
        return count;
    }
};