class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int x = nums[nums.size()-1];
        int sum = nums[nums.size()-1];
        
        for(int i = 1 ; i < k ; i++){
            x = x + 1;
            sum = sum + x;
        }
        return sum;
    }
};