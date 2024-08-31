class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double avg;
        double mini = nums[nums.size()-1];
        int left = 0;
        int right = nums.size()-1;
        while(left < right){
            avg = (nums[left] + nums[right]) / 2.0;
            mini = min(avg,mini);   
            left++;
            right--;
        }
        
        return mini;
        
        
    }
};