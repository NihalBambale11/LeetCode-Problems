class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v;
        map<int,int> mp;
        
        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x : mp){
            if(x.second >= 2){
                v.push_back(x.first);
            }
        }
        return v;
    }
};