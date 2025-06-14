class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        
        int maxi = helperFunction(nums,0,0);
        maxi = max(abs(nums[0] - nums[nums.size()-1]) , maxi );
        return maxi;

    }

    int helperFunction(vector<int> nums,int i , int maxii){
        if(i == nums.size()-1){
            return maxii;
        }

        maxii = max(abs(nums[i] - nums[i+1]) , maxii  );
        return helperFunction(nums,i+1,maxii);
    }
};