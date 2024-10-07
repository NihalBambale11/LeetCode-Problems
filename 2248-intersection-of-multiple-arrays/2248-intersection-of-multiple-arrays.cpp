class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int ,int> mp;
        int count = 0 ;
        for(vector<int> v : nums){
            
            for(int x : v){
                mp[x]++;
            }
            count++;
        }
        
        vector<int> v;
        for(auto x : mp){
            if(x.second == count){
                v.push_back(x.first);
            }
        }
        
        if(v.empty()){
            return {};
        }
        
        return v;
    }
};