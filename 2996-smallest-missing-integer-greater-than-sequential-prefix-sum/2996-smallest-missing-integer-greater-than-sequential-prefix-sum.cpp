class Solution {
public:
    int missingInteger(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        
        int sum = nums[0];
        for(int i = 1 ; i < nums.size();i++){
            if(nums[i] == nums[i-1]+1){
                sum = sum+nums[i];
            }
            else{
                break;
            }
        }
        
        while(mp[sum] > 0){
            sum++;
        }
        
        return sum;
    }
};