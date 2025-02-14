class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() != nums.back()){
            return nums.size();
        }
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] != i){
                return i;
            }
        }
        return -1;
    }
};