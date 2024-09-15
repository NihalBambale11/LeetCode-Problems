class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int rem;
        
        int sum = 0;
       for(int i = 0 ; i < nums.size() ; i++){
           rem = nums[i] % 3;
           rem = min(rem,3 - (nums[i] % 3));
           sum = sum + rem;
       }
        return sum;
    }
};