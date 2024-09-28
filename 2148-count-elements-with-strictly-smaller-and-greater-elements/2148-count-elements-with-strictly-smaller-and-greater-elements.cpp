class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int x = nums[0];
        int y = nums[nums.size()-1];
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != x && nums[i] != y){
                count++;
            }
        }
        return count;
    }
};