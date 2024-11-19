class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        int maxi = *max_element(nums.begin() ,nums.end());
        
        if(nums.size() != maxi+1){
            return false;
        }
        for(auto x: nums){
            mp[x]++;
        }
        
        sort(nums.begin() ,nums.end());
        
        for(int i = 0 ; i < nums.size()-2;i++){
            if(mp[maxi] != 2){
                return false;
            }
            else if(mp[nums[i]] != 1){
                return false;
            }
            
            
        }
        return true;
    }
};