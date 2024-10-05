class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        
        
        for(int a : nums){
            mp[a]++;
        }
        
        
            for(auto x : mp){
                if(x.second % 2 !=  0){
                    return false;
                }
            }
        
        
        return true;
    }
};