class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> v ;
        int sum = 0;
        int temp = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            sum = sum + nums[i];
        }
        
        sort(nums.begin(),nums.end(),greater<>());
        for(int i = 0 ; i < nums.size();i++){
            temp = temp + nums[i];
            sum = sum - nums[i];
            v.push_back(nums[i]);
            
            if(sum < temp){
                break;
            }
        }
        return v;
            
    }
};