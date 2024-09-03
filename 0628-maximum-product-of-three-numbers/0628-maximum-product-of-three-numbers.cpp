class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int prod = 1;
        sort(nums.begin(),nums.end());
        if(nums.size() == 3){
            return (nums[0]*nums[1]*nums[2]);
        }
        
        
        return max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3],nums[0]*nums[1]*nums[nums.size()-1]);
    }
};