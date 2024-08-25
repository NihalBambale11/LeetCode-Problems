class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0; 
        for(int i = 1 ; i < nums.size() ;i++){
            if(nums[i] > nums[i-1]){
                continue;
            }
            else{
                int temp = nums[i-1] - nums[i] + 1;
                nums[i] = nums[i] + temp;
                count = count + temp;
            }
        }
        return count;
        
    }
};